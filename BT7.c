#include<stdio.h>

int main(){
	int num;
	printf("Moi ban nhap vao mot so co 4 chu so \n");
	scanf("%d",&num);
	int nghin = num /  1000;
	int tram = num % 1000 / 100;
	int chuc = num % 100 /10;
	int dvi =  num % 10;
	int sum =  nghin + tram + chuc + dvi;
	printf("Tong cac chu so co trong so do la: %d\n",sum);
	return 0;
}