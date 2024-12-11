#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[100];
    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
	printf("Cac ky tu trong chuoi la: ");
    for (int i = 0; i < strlen(chuoi); i++) {
        printf("%c ", chuoi[i]);
    }
	return 0;
}
