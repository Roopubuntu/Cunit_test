
#include <stdio.h> 
#include <stdlib.h> // For exit() 
  
int main() 
{ 
    FILE *fp1, *fp2; 
    char str[100], c; 
  
          
    // Open one file for reading 
    fp1 = fopen("input.txt", "r"); 
    if (fp1 == NULL) 
    { 
        printf("Cannot open file input.txt \n"); 
        exit(0); 
    } 
  
  
    // Open another file for writing 
    fp2 = fopen("output.txt", "w"); 
    if (fp2 == NULL) 
    { 
        printf("Cannot open file output.txt \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(fp1); 
    while (c != EOF) 
    { 
        fputc(c, fp2); 
        c = fgetc(fp1); 
    } 
  
    printf("\nContents copied to output.txt"); 
  
    fclose(fp1); 
    fclose(fp2); 
    return 0; 
}
