#include<stdio.h>
int main()
{
	int a,b,choice,c;
	scanf("%d%d",&a,&b);
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : c=a+b;
				printf("%d",c);
				break;
		case 2 : c=a-b;
				printf("%d",c);
				break;
		case 3 : c=a*b;
				printf("%d",c);
				break;
		case 4 : c=a/b;
				printf("%d",c);
				break;
		case 5 : c=a%b;
				printf("%d",c);
				break;
		default : printf("Invalid Choice");
	}
}
