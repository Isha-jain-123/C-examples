#include <stdio.h>

int main(){
    double marks;
    printf("Enter you're marks\n");
    scanf("%lf",&marks);
    if (0<=marks<=100 && (marks >0 || marks <0)){
        if (marks>=86 && marks<=100){
            printf("You're grade is A+");
        }
        if (marks >=71 && marks<=85){
            printf("You're grade is A-");
        }
        if (marks >=56 && marks<=70){
            printf("You're grade is B+");
        }
        if (marks>=41 && marks<=55){
            printf("You're grade is B-");
        }
        if (marks>=26 && marks<=40){
            printf("You're grade is C+");
        }
        if (marks >= 0 && marks<=25){
            printf("You're grade is F");
        }
    }
    return 0;
}