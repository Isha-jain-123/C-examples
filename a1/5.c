#include <stdio.h>
#include <limits.h>
#include <float.h>
 


int main(void){
    printf("size of int is : %2d bytes \n", sizeof(int));
    printf("The limit range of integers is (%d , %d)\n", INT_MIN,INT_MAX );
    printf("\n");
    printf("size of float is : %2d bytes \n", sizeof(float));
    printf("The limit range of float is (%f , %f)\n", FLT_MIN,FLT_MAX );
    printf("\n");
    printf("size of char is : %2d bytes \n", sizeof(char));
    printf("The limit range of char is (%c , %c)\n", CHAR_MIN,CHAR_MAX );
    printf("\n");
    printf("size of double is : %2d bytes \n", sizeof(double));
    printf("The lmit range of double is (%d , %d)\n", DBL_MIN,DBL_MAX );
    printf("\n");
    printf("size of bool is : %2d bytes \n", sizeof(_Bool));
    printf("The limit range of bool is {0,1}\n");

}



