#include <stdio.h>

int main(){
	char name[50];
	printf("vui long nhap ten cua ban ");
	fgets(name, sizeof name, stdin);
	printf("\nhello %s",name);
	return 0;
}
