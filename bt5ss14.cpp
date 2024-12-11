#include <stdio.h>
#include <string.h>
#include <ctype.h>

int demSoTu(const char* chuoi) {
    int dem = 0, trongTu = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (!isspace(chuoi[i])) {
            if (!trongTu) {
                trongTu = 1;
                dem++;
            }
        } else {
            trongTu = 0;
        }
    }
    return dem;
}

int main() {
    char chuoi[200];
    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    int soTu = demSoTu(chuoi);
    printf("So tu trong chuoi la: %d\n", soTu);
    return 0;
}
