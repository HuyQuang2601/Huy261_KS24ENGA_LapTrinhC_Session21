#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int n;

    printf("Nhap so dong can ghi vao file: ");
    scanf("%d", &n);
    getchar(); 
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the mo tep bt05.txt\n");
        return 1; 
    }
    for (int i = 0; i < n; i++) {
        char line[1000];
        printf("Nhap dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tep bt05.txt\n");
        return 1; 
    }
    printf("Noi dung tep bt05.txt:\n");
    char line[1000];
    for (int i = 0; i < n; i++) {
        if (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line);
        }
    }
    fclose(file);
    return 0;
}
