#include<stdio.h>

int main(){
	float pi = 3.14;
	float radius;
	printf("Ban hay nhap vao ban kinh hinh tron: \n");
	scanf("%f",&radius);
	float cir = 2  * pi * radius;
	float area = pi * radius * radius;
	printf("Chu vi hinh tron la: %.2f\n",cir);
	printf("Dien tich hinh tron la: %.2f\n",area);
	return 0;
}