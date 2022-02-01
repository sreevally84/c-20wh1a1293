//Allocate memory using new operator
#include<iostream>
using namespace std;
class sample
{
public:
int a=220;
int b=150;
void add()
{
cout<<"a = "<<a<<endl;
cout<<"b = "<<b<<endl;
cout<<"a+b ="<<a+b<<endl;
}};
int main()
{
sample *obj;
obj = new sample;
obj->add();
delete obj;
return 0;
}
