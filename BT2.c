#include<stdio.h>

int main(){
	float c;
	printf("Moi ban nhap vao nhiet do C: \n");
	scanf("%f",&c);
	float f = ( c * 9 / 5 ) + 32;
	printf("Nhiet do F la : %.2f\n",f);
	return 0;
}