#include<iostream> 
using namespace std;
 
class mat 
 { 
       private: 
                     int s[10][10]; 
                     int u,v; 
       public: 
                     void show(); 
                 
                     mat operator *(mat); 
                     void read(); 
 }; 
        
           mat mat::operator*(mat uu2) 
      { 
                mat t; 
                for(int i=0;i<3;i++) 
                     for(int j=0;j<3;j++) 
                         { 
                            t.s[i][j]=0; 
                            for(int k=0;k<3;k++) 
                                   t.s[i][j]+=s[i][k]*uu2.s[k][j]; 
                         } 
                                   return t; 
        } 
            void mat::read() 
        { 
               cout<<"Enter the Elements of Matrix :\n"; 
               for(int i=0;i<3;i++) 
                    for(int j=0;j<3;j++) 
                        cin>>s[i][j]; 
      } 
              void mat::show() 
      { 
              for(int i=0;i<3;i++) 
                   { 
                   for(int j=0;j<3;j++) 
                        { 
                              cout<<s[i][j]<<"\t"; 
                              
                         } 
                              cout<<"\n"; 
                   } 
      } 
              int main() 
      { 
                 mat obj1 ,obj2,obj3; 
                 clrscr(); 
                 cout<<"Enter First Matrix\n"; 
                 obj1.read(); 
                 cout<<"Enter Second Matrix\n"; 
                 obj2.read(); 
                 obj3=obj1 *obj2; 
                 cout<<"Result After Multiplication of two Matrix\n"; 
                 obj3.show(); 
                 
      }
