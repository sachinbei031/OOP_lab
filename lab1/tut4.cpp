#include <iostream>
using namespace std;
inline float area(float l, float b)
{
return(l*b);}
int main(){
float b=10;
for (int l=0; l<10;l++){

cout<<area(l,b)<<endl;
}

}