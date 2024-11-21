#include <stdio.h>

int main(){
	float mathS,literatureS,englishS;
	printf("vui long nhap diem toan: ");
	scanf("%f",&mathS); 
	printf("vui long nhap diem van: ");
	scanf("%f",&literatureS); 
	printf("vui long nhap diem anh: ");
	scanf("%f",&englishS);
	float totalS=mathS+literatureS+englishS,averageS=totalS/3;
	printf("tong diem: %.2f\ndiem trung binh: %.2f",totalS,averageS);
	return 0;
}
