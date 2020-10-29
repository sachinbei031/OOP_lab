#include <iostream>
using namespace std;
class complex{
int real, imag;
 public:   
    complex{
    
real=0;
imag=0;

        }
    complex(int r; int i){
    
   real=r;
   imag=i;

        }

void show(){
    cout<<real<<"+i"<<imag<<endl;
}
    
friend complex operator+(complex,complex)
};
complex operator +(complex c1, complex c2){
complex temp;
temp.real=c1.real+c2.real;
temp.imag=c1.imag+c2.imag;
return temp;

}
int main(){
complex c1(2,3),c2(1,2),c3;
c3=c1+c2;
c3.show();
    }