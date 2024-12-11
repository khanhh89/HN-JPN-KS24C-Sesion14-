#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100];
    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';

    int doDai = strlen(chuoi);
    printf("Chuoi dao nguoc la: ");
    for (int i = doDai - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }

    return 0;
	}
