//catching class type exception
#include <iostream>
#include<cstring>
using namespace std;
class MyException{
    public:
        char str_what[50];
        int what;
        MyException(){
            *str_what = 0;
            what = 0;
        }
        MyException(char *s,int e){
            strcpy(str_what,s);
            what = e;
        }
};

int main()
{
    int i;
    try{
        cout<<"enter a positive number:";
        cin>>i;
        if(i<0)
        throw MyException("not positive",i);
    }
    catch(MyException e){
        cout<<e.str_what<<":";
        cout<<e.what<<"\n";
    }
    return 0;
}
