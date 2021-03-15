#include<stdio.h>
void main()
{
	float m;
	scanf("%f",&m);   //taking input
	//checking cases
	if(m>100 || m<0)               
		printf("Invalid");
	if(m<=100 && m>=86)
		printf("A+");
	else if(m<86 && m>=71)
		printf("A-");
	else if(m<71 && m>=56)
		printf("B+");
	else if(m<56 && m>=41)
		printf("B-");
	else if(m<41 && m>=26)
		printf("C");
	else if(m<26 && m>=0)
		printf("F");
}

