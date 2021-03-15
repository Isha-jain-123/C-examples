#include <stdio.h>
#include <math.h>


void addition(long long int n1,long long int n2){  //function for addition
    long long int sum=n1+n2;
    printf("%lld\n",sum); 
}

void subtraction(long long int n1,long long int n2){   //function for subtraction
    printf("%lld\n",n1-n2);
}

void multiplication(long long int n1 ,long long int n2){   //function for multiplication
    printf("%lld\n",n1*n2);
}

void division(long long int n1 ,long long int n2){
    double num1=n1;
    double num2=n2;
    if (n2==0){                   //handling div by 0 error
        printf("Div by 0 error, please rerun the code\n");
    }  
    else{
        printf("%lf\n",num1/num2);
    }   
}

void modulus(long long int n1,long long int n2){
    if (n2==0){                   //handling div by 0 error
        printf("Undefined , please rerun the code\n");   
    } 

    else{
    long long int mod;
    mod=n1%n2;
    printf("%lld\n",mod);
    }
}

void main(){
    long long int a,b;
   
    scanf("%lld\n",&a);
    scanf("%lld",&b);
    addition(a,b);
    subtraction(a,b);
    multiplication(a,b);
    division(a,b);
    modulus(a,b);
}

    

    
