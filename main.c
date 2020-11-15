#include <stdio.h>
#include "myMath.h"
//#define EX 2.71828  

int main(){

    double x;

    printf("Please insert a real number:\n");  
    scanf("%lf",&x);
    
    // 1) f(x) = e^x + (x^3) -2
    // 2) f(x) = 3*x + 2*(x^2)
    // 3) f(x) = (4(x^3))/5 - 2*x
    double f1;
    if (x>=0){
        f1 = Exponent((int)x) + Power(x,3) - (double)2;    
    }
    else if (x<0){
        int y = (int)x;
        if (y==x){
            f1 = Exponent(y) + Power(x,3) - (double)2;    
        }
        else {
            f1 = Exponent(y-1) + Power(x,3) - (double)2;
        }
    }

    double f2 = mul(x,3) + mul(Power(x,2),2);
    double f3 = div(mul(Power(x,3),4),5) - mul(x,2);

   // fprintf('%.4f',f1); 
    printf("The value of f(x) = e^x +x^3 -2 at the point: %0.4lf, is: %0.4lf\n", x, f1);
    printf("The value of f(x) = 3*x + 2(x^2) at the point: %0.4lf, is: %0.4lf\n", x, f2);
    printf("The value of f(x) = (4(x^3))/5 - 2x at the point: %0.4lf, is: %0.4lf\n", x, f3);
    
    return 0;

}