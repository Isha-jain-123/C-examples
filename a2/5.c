#include <stdio.h>

double r,l,w,b,h;
double circle(){
    return  3.14159265*r*r;
}

double rectangle(){
    return l*w;
}

double triangle(){
    return 0.5*b*h;
}

void main(){
    char shape;
    scanf("%c",&shape);
    if (shape=='C'){
        scanf("%lf",&r);
        printf("The area is %.2lf",circle());
    }
    if (shape=='R'){
        scanf("%lf %lf",&l,&w);
        printf("The area is %.2lf",rectangle());
    }
    if (shape=='T'){
        scanf("%lf %lf",&b,&h);
        printf("The area is %.2lf",triangle());
    }
}