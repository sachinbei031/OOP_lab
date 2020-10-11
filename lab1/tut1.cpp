#include <stdio.h>
struct complex{
    float real,imag;
};
int main(){
    struct complex a,a1,a2;
    printf("enter the value of a and b in a+ib for 1st complex number");
    scanf("%f %f",&a.real,&a.imag);
    printf("enter the value of a and b in a+ib for 2nd complex number");
    scanf("%f %f",&a1.real,&a1.imag);
    a2.real=a.real+a1.real;
    a2.imag=a.imag+a1.imag;
    printf("sum of complex no is: %f +i %f",a2.real,a2.imag);
    
     
}