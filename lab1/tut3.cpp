#include <iostream>
#define PI 3.14
using namespace std;
float area(int radius){
  float area;
  area = radius*radius*PI;
  return area;
};

float area(int length,int breadth){
  float area=length*breadth;
  return area;
};

void main(){
  cout<<"The area of circle is:"<<area(12.5)<<endl;
  cout<<"The area of rectangle is:"<<area(5,13)<<endl;
  return 0;
};
