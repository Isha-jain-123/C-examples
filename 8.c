#include<stdio.h>
void main()
{
	int t,m,ans,h;
	scanf("%d",&t);
	m=t%100;        // separating the minutes
	h=t/100;        //separating the hours
	if(h>24 || h<0 || m>=60 || m<0)
		printf("Invalid Input");
	else
	{
		ans=(h*60)+m; 
		printf("%d",ans);
	}
}
 		

