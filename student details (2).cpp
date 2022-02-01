//student  detalis
#include<iostream>
using namespace std;
class student
{
public:
string name;
int roll_no;
char grade[5];
void read_info()
{
cout<<"Name ";
cin>>name;
cout<<"Rollno ";
cin>>roll_no;
cout<<"Grade ";
cin>>grade;
}
void display_info()
{
cout<<"Name :"<<name<<endl;
cout<<"Roll_no :"<<roll_no<<endl;
cout<<"Grade :"<<grade<<endl;
}
};
int main()
{
student s[3];
int i,n;
cout<<"Enter the number of students"<<endl;
cin>>n;
for(i=0;i<n;i++)
{
s[i].read_info();
}
cout<<"-------------------------------------"<<endl;
for(i=0;i<n;i++)
{
cout<<"Student "<<i+1<<endl;
s[i].display_info();
}
return 0;
}
