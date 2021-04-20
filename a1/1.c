#include <stdio.h>
#include <limits.h>

void addition(int n1,int n2){  //function for addition
    if ((n1>=0 && n2>=0 && (INT_MAX - n1) >= n2) || (n1 >=0 && n2<0) || (n1<0 && n2>=0) ||
        (n1<0 && n2<0 && (INT_MIN - n1) <= n2)){    //handling overflow and underflow
            printf("%d\n",n1+n2);
        }
    else{
        printf("Invalid input\n");
    }
}

void subtraction(int n1,int n2){  //function for subtraction
    if (n1>=0 && n2>=0 && (INT_MAX - n1) >= -n2){
        printf("%d\n",n1-n2);
    }
    else if (n1>=0 && n2>=0){
        printf("%d\n",n1-n2);
    }
    else if (n1<0 && n2<0){
        printf("%d\n",n1-n2);
    }
    else if (n1<0 && n2>=0 && (INT_MIN + n2) <= n1){
        printf("Invalid input\n");
    }
}

void multiplication(int n1 ,int n2){   //function for multiplication
    printf("%d\n",n1*n2);
}

void division(int n1 ,int n2){
    double num1=n1;
    double num2=n2;
    if (n2==0){                   //handling div by 0 error
        printf("Div by 0 error, please give a valid input\n");
    }  
    else{
        printf("%lf\n",num1/num2);
    }   
}

void modulus(int n1,int n2){
    if (n2==0){                   //handling div by 0 error
        printf("Modulus undefined , please give a valid input\n");   
    } 
    else{
    int mod;
    mod=n1%n2;
    printf("%d\n",mod);
    }
}

void main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    addition(a,b);
    subtraction(a,b);
    multiplication(a,b);
    division(a,b);
    modulus(a,b);
}

    

    
