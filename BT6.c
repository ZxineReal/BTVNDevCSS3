#include<stdio.h>

int  main(){
	float edge, height;
	printf("Ban hay nhap vao canh cua hinh tam giac: \n");
	scanf("%f",&edge);
	printf("Ban hay nhap vao chieu cao cua tam giac: \n");
	scanf("%f",&height);
	float area = 0.5 * edge * height;
	printf("Dien tich hinh tam giac la: %.2f\n",area);
	return 0;
}