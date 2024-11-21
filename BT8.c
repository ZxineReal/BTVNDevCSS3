#include<stdio.h>

int main(){
	int num;
	printf("Moi ban nhap vao mot so co 4 chu so \n");
	scanf("%d",&num);
	int nghin = num /  1000;
	int tram = num % 1000 / 100;
	int chuc = num % 100 /10;
	int dvi =  num % 10;
	printf("So dao nguoc la: %d %d %d %d", dvi, chuc, tram, nghin);
	return 0;
}