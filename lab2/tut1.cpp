#include<iostream>
using namespace std;
class student{
    char name[20],adress[20];
    int roll,marks;

    public:
    void getdata(){
        cout<<"enter the name, roll, adress and mark of student"<<endl;
        cin>>name>>roll>>adress>>marks;
    }
    void showdata(){
        cout<<"Name "<<name<<endl;
        cout<<"Roll "<<roll<<endl;
        cout<<"Adress "<<adress<<endl;
        cout<<"mark "<<marks<<endl;
         }
    
    
    
    };

int main(){
    student s1;
    s1.getdata();
    s1.showdata();
}
