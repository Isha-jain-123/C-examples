#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a/1000==0 || a%1000==a || a>9999){                       //not a 4 digit number
        printf("Invalid , please enter a valid 4 digit number");
    }
    
    else if (a%10==0){
        if ((a/10)%10==0 && a%10==0){                           
            if ((a/10)%10==0 && a%10==0 && (a/100)%10==0){      // cases like 1000
                printf("%d",(a/1000));
                printf("\nInvalid");
                }
            else{                                              // cases like 1400
                printf("%d%d",(a/100)%10,(a/1000));
                printf("\nInvalid");
            }
        }
        else{
            printf("%d%d%d",(a/10)%10,(a/100)%10,(a/1000));
            printf("\nInvalid");
        }
    }
        
    else{
        printf("%d%d%d%d",a%10,(a/10)%10,(a/100)%10,(a/1000));
        printf("\nValid");
    }
    return 0;
}


















