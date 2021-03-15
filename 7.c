#include<stdio.h>
void main()
{
	int n;
	float ans;
	scanf("%d",&n); 
	if(n<=2)                  //invalid input condition
		printf("Invalid Input");
	else
	{
		ans=(n-2)*180.0/n;    //getting internal angle from the number of sides
		printf("%f",ans);
	}
}

