#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
    int id;
    char name[20];
    int age;
};

void nhapSinhVien(struct SinhVien *sv) {
    printf("Nhap ma sinh vien: ");
    scanf("%d", &sv->id);
    fflush(stdin); 
    printf("Nhap ten sinh vien: ");
    fgets(sv->name, 20, stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv->age);
}

void saveSv(struct SinhVien *sv, FILE *f) {
    fprintf(f,"%d,%s,%d\n", sv->id, sv->name, sv->age);
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file da ghi.\n");
        return 1;
    }
    

    struct SinhVien sv;
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        nhapSinhVien(&sv);
        saveSv(&sv, file);
    }

    fclose(file);
    printf("Thông tin sinh viên da duoc luu vAo file students.txt\n");

    return 0;
}
