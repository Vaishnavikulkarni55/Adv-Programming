#include<stdio.h>
int main()
{
	int temp;
	scanf("%d",&temp);
	if(temp<0)
	printf("Freezing weather");
	if(temp>=0 && temp<10)
	printf("very cold weather");
	if(temp<=10 && temp>20)
	printf("cold weather");
	if(temp>=20 && temp<30)
	printf("normal in temperature");
	if(temp>=30 && temp<40)
	printf("its hot");
	if(temp>=40)
	printf("�ts very hot");
}
