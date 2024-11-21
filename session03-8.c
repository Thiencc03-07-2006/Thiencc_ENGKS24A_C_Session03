#include <stdio.h>

int main(){
	int num;
	printf("vui long nhap vao so co bon chu so: ");
	scanf("%4d",&num);
	int reverse=num%10*1000+num%100/10*100+num%1000/100*10+num/1000;    
	printf("dao so la: %d",reverse);
	return 0;
}
