#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Failed to open file for writing.\n");
        return 1;
    }
    
    fprintf(fp, "Hello, World!");
    fclose(fp);
    
    return 0;
}
