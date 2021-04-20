#include<stdio.h>
void main()
{
	int rem,t,a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	while(b%a!=0)
	{
		rem=b%a;
		b=a;
		a=rem;
	}
	printf("%d",a);
}
