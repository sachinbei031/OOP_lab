#include <iostream>
using namespace std;
int multiply(int a, int b, int c=5, int d=1)
{
return(a*b*c*d);}
int main(){
cout<< multiply(1,2)<<endl;
cout<< multiply(1,2,3)<<endl;
cout<< multiply(1,2,4)<<endl;
}
