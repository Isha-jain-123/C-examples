#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of sides\n");
    scanf("%d",&n);
    if (n<=2){
        printf("Invalid input");
    }
    else{
        double ang;
        ang=((180*n)-360)/n;
        printf("The interior angle in degrees is %.3lf",ang);
    }
    return 0;
}