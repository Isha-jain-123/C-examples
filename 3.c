#include <stdio.h>
#include <math.h>


double l,w,h1;
double r,h2;
double R;


double cuboid(){                           // function for cuboid
    return l*w*h1;
}

double cylinder(){                         // function for cylinder
    
    return 3.14159265*pow(r,2)*h2;
}
 
double sphere(){                          // function for sphere
    return (4*3.14159265*pow(R,3))/3;
}

int main(){
    
    scanf("%lf %lf %lf",&l,&w,&h1);        // input for cuboid
    scanf("%lf %lf",&r,&h2);               // input for cylinder
    scanf("%lf",&R);                       // input for sphere                
    printf("%.2lf\n",cuboid());            // output for cuboid
    printf("%.2lf\n",cylinder());          // output for cylinder   
    printf("%.2lf\n",sphere());            // output for sphere

    return 0;
}