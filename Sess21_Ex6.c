#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *oriFile, *cpyFile;
    char ch;
   	oriFile = fopen("bt01.txt", "r");
    if (oriFile == NULL) {
        printf("Khong the mo tep bt01.txt\n");
        return 1; 
    }
    cpyFile = fopen("bt06.txt", "w");
    if (cpyFile == NULL) {
        printf("Khong the mo tep bt06.txt \n");
        fclose(oriFile);
        return 1; 
    }
    while ((ch = fgetc(oriFile)) != EOF) {
        fputc(ch, cpyFile);
    }
    fclose(oriFile);
    fclose(cpyFile);
    printf("Da sao chep noi dung tu tep bt01.txt sang tep bt06.txt \n");
    return 0;
}

