#include <stdio.h>

int main(){
	float r,pi=3.14;
	printf ("ban kinh: ");
	scanf ("%f",&r);
	float perimeter=2*pi*r,area=pi*r*r;
	printf ("hinh tron co chu vi %.2f va dien tich %.2f",perimeter,area);
	return 0;
}
