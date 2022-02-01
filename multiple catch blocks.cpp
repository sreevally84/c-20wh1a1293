//program handles divide by zero exception using multi catch blocks
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a and b values: ";
    cin>>a>>b;
    try{
        if(b==0)
            throw b;
        else if(b<0)
            throw "b cannot be negative";
        else
            cout<<"result of a/b = "<<(a/b);
    }
    catch(int b){
        cout<<"b cannot be zero";
    }
    catch(const char* msg){
        cout<<msg;
    }
    return 0;
}
