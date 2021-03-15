#include<stdio.h>
void main()
{
	float ip1,d1,t1,ip2,d2,t2,b,p1,p2,q1,q2;
	scanf("%f%f%f",&ip1,&d1,&t1);
	scanf("%f%f%f",&ip2,&d2,&t2);
	if(ip1<=0 || ip2<=0 || t1>100 || t2>100 || t1<0 || t2<0 || d1<0 || d2<0 || d1>100 || d2>100)
		printf("Invalid Input");
	else
	{
		p1=(100-d1)*ip1/100;
		p2=(100-d2)*ip2/100;
		q1=(100+t1)*p1/100;
		q2=(100+t2)*p2/100;
		b=q1+q2;
		printf("%.2f",b);
	}
}



