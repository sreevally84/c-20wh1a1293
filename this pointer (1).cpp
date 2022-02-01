//this pointer

#include<iostream>
using namespace std;
class Test
{
private:
int x;
public:
void setX (int x)
{
this->x = x;
}
void print() { cout << "x = " << x << endl; }
};
int main()
{
Test obj;
int x = 15;
obj.setX(x);
obj.print();
return 0;
}
