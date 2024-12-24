int main() {
    FILE *file;
    char text[1000]; 
    
    printf("Nhap mot chuoi bat ki: ");
    fgets(text, sizeof(text), stdin); 

    file = fopen("bt01.txt","a");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt da ghi\n");
        return 1; 
    }

    fprintf(file,"%s", text);
    fclose(file);

    file = fopen("bt01.txt","r");
    if (file == NULL) {
        printf("Khong the mo tep bt01.txt da doc\n");
        return 1;
    }

    char firstLine[50];
    fgets(firstLine, sizeof(firstLine), file);
        printf("Dong dau tien trong file la: %s", firstLine);

    fclose(file);

    return 0;
}
