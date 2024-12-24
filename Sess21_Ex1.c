#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char text[1000]; 

    printf("Nhap mot chuoi bat ki: ");
    fgets(text, sizeof(text), stdin); 
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt da ghi.\n");
        return 1; 
    }
    fprintf(file,"%s", text);
    fclose(file);
    printf("Da ghi chuoi vào tap bt01.txt thanh cong\n");
    return 0;
}

