#include <stdio.h>
#include <string.h>
#include <ctype.h>
void demKyTu(const char *str) {
    int chuCai = 0, chuSo = 0, kyTuDacBiet = 0;
	for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            chuCai++;
        } else if (isdigit(str[i])) {
            chuSo++;
        } else {
            kyTuDacBiet++;
        }
    }
	printf("So ky tu la chu cai: %d\n", chuCai);
    printf("So ky tu la chu so: %d\n", chuSo);
    printf("So ky tu dac biet: %d\n", kyTuDacBiet);
}
int main() {
    char input[1000];
    printf("Nhap vao chuoi: ");
    fgets(input, sizeof(input), stdin);
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    demKyTu(input);

    return 0;
}

