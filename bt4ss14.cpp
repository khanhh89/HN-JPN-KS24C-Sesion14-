#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100], kyTu;
    int dem = 0; 

    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin); 
    chuoi[strcspn(chuoi, "\n")] = '\0';

    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &kyTu);

    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);
    return 0;
}
