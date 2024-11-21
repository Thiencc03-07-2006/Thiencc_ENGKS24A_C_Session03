#include <stdio.h>

int main(){
	float a,h;
	printf("vui long nhap vao do dai mot canh cua tam giac: ");
	scanf("%f",&a);
	printf("vui long nhap vao do dai duong cao tuong ung: ");
	scanf("%f",&h);
	float area=0.5*a*h;
	printf("tam giac tren co dien tich la %.2f",area);
	return 0;
}
