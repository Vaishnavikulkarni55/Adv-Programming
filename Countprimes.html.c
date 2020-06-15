#include<stdio.h>
int main()
{
	int i,n,count,x,y,cnt=0,j;
	printf("enter x and y:");
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
	count=0;
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
		{
		count=1;
		break;
	    }
	}
	if(count==0)
	{
		cnt++;	
	}
    }
	printf("Count : %d",cnt);
}

