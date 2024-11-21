#include<stdio.h>

int main(){
	float toan, van, anh;
	printf("Ban hay nhap vao diem Toan: \n");
	scanf("%f",&toan);
	printf("Ban hay nhap vao diem Van: \n");
	scanf("%f",&van);
	printf("Ban hay nhap vao diem Anh: \n");
	scanf("%f",&anh);
	float sum = toan + van + anh;
	float tbc = sum / 3;
	printf("Tong diem ba mon la: %.2f\n",sum);
	printf("Trung binh cong ba mon la: %.2f\n",tbc);
	return 0;
}