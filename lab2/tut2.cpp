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
    int n;
    student s1[10];
    cout<<"enter the no of student"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
    s1[i].getdata();
}
 for(int i=0; i<n; i++){
    s1[i].showdata();
}}
