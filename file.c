#include <stdio.h> 
#include <string.h> 
#define MAX 100  
void reverseContent(char* x) 
{ 
    FILE* fp1 = fopen(x, "a+");  
    if (fp1 == NULL) { 
        printf("Unable to open file\n"); 
        return; 
    } 
    char buf[100]; 
    int a[MAX], s = 0, c = 0, l;  
    fprintf(fp1, " \n"); 
    rewind(fp1); 
    while (!feof(fp)) { 
        fgets(buf, sizeof(buf), fp1); 
        l = strlen(buf); 
        a = s += l; 
    } 
    rewind(fp); 
    c -= 1; 
    while (c >= 0) { 
        fseek(fp, a, 0); 
        fgets(buf, sizeof(buf), fp); 
        printf("%s", buf); 
        c--; 
    }  
    if (fp2 == NULL) 
    { 
        printf("Cannot open file %s \n", filename); 
        exit(0); 
    } 
    c = fgetc(fp1); 
    while (c != EOF) 
    { 
        fputc(c, fp2); 
        c = fgetc(fp1); 
    } 
    printf("\nContents copied to %s", filename); 
    fclose(fp1); 
    fclose(fp2); 
    return 0; 
}
int main() 
{ 
    
    char x[] = "file1.txt"; 
    reverseContent(x); 
    return 0; 
} 
