#include <stdio.h>

int n;
void main(){
    scanf("%d",&n);
    if (n<=0){
        printf("Invalid Input");
    }
    else{
        if (n%4==0 && n%100!=0){       // for non-century years
            printf("Leap Year");
        }
        else if (n%400==0){            // for century years
            printf("Leap Year");
        }
        else{
            printf("Not a leap year");
        }
    }
}