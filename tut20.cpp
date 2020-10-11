#include<stdio.h>
struct student{
    char name[20];
    int roll;
    int marks;
    char adress[20];
    
};
int main(){
    struct student s[100];
    int i,n,j;
    printf("enter the no of student");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        
        scanf("%s %d %d %s",&s[i].name,&s[i].roll,&s[i].marks,&s[i].adress);
        
        
        
    }
    
    for(j=0;j<n;j++){
    printf("%s \t %d \t %d \t %s",s[i].name,s[i].roll,s[i].marks,s[i].adress);
}
}