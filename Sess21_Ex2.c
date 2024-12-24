#include <stdio.h>

int main() {
    FILE *file;
    char text[1000]; 
    
    printf("Nhap mot chuoi bat ki: ");
    fgets(text, sizeof(text), stdin); 

    file = fopen("bt01.txt","w");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt da ghi.\n");
        return 1; 
    }

    fprintf(file, "%s", text);
    fclose(file);

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt da doc.\n");
        return 1;
    }

    char firstChar = fgetc(file);
    if (firstChar != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", firstChar);
    } else {
        printf("File bt01.txt rong\n");
    }
    fclose(file);

    return 0;
}

