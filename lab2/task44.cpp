#include<iostream>
using namespace std;
class area{
    int length;
    int breadth;
    public:
    area(){
    length=0;
    breadth=0;
}
area(int a, int b ){
 length=a;
breadth=b;
}
 
area(area &a){
        length=a.length;
    breadth=a.breadth;
    }
    
    void calculatearea(){
    cout<< length*breadth<<endl;
}    
   ~area(){
    cout<<"destructor is called"<<endl; 
}
};

int main(){
area a1;
    a1.calculatearea();
    area a2(2,3);
     a2.calculatearea();
area a3(a2);    
     a3.calculatearea();


}
