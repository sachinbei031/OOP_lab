#include<iostream>
using namespace std;
  class complex
{
float real;
float img;

public:
  void getdata()
{
cin>>real>>img;
}

  void showdata()
{
cout<<"sum of complex number are"<<endl;
cout<<real<<"+i"<<img;
}
complex addition(complex cc1,complex cc2)
{
complex temp;
temp.real=cc1.real+cc2.real;
temp.img=cc1.img+cc2.img;
return temp;
}
};
int main()
{
complex c1,c2,c3;
cout<<"Enter first complex no."<<endl;
c1.getdata();
cout<<"Enter second complex no."<<endl;
c2.getdata();
c3=c3.addition(c1,c2);
c3.showdata();
return 0;
}
