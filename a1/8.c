// #include <stdio.h>

// int main(){
//     int a;
//     printf("Enter the time\n");
//     scanf("%d",&a);
//     int n1,n2;
//     n1=a%100;
//     n2=a/100;
//     if (n1>59||n2>24){
//         printf("Invalid input");

//     }
//     else{
//         printf("The minutes passed from midnight are %d", n2*60 + n1);
//     }
//     return 0;
// }

#include<stdio.h>
void main()
{
	int t,m,ans,h;
	scanf("%d",&t);
	m=t%100;
	h=t/100;
	if(h>24 || h<0 || m>=60 || m<0)
		printf("Invalid Input");
	else
	{
		ans=(h*60)+m;
		printf("%d",ans);
	}
}