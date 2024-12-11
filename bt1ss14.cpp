#include<stdio.h>
#include<string.h>
int main(){
	char c[50];
	printf("Nhap xau ki tu: ");
	fgets(c, 50, stdin);
	printf("Chuoi vua nhap la: %s",c);
	printf("Do dai ky tu do la: %d\n",strlen(c));
	return 0;	
}
