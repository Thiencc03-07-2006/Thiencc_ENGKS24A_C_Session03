#include <stdio.h>

int main(){
	int num;
	printf("vui long nhap vao so co bon chu so: ");
	scanf("%d",&num);
	int sum=num/1000+num%1000/100+num%100/10+num%10;    
	printf("tong cac so la: %d",sum);
	return 0;
}
