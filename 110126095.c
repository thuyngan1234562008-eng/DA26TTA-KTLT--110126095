#include <stdio.h>
#include <stdlib.h>



int main() {
	int a, b;
	printf("Nhap vao 2 so nguyen: ");
	scanf("%d%d",&a,&b);
	printf("Tong = %d\n",a+b);
	printf("Hieu = %d\n",a-b);
	printf("Tich = %d\n",a*b);
	if (b !=0)
	printf("thuong = %.2f\n",(float)a/b);
	else
	printf("khong the chia cho 0\n");
	
	return 0;
}
