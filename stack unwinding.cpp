#include<iostream>
using namespace std;

void fun1(){
    cout<<"\nfun1 start";
    throw 100;
    cout<<"\nfun1 end";
}


void fun2(){
    cout<<"\nfun2 start";
    fun1();
    cout<<"\nfun2 end";
}

void fun3(){
    cout<<"\nfun3 start";
    try{
        fun2();}
    catch(int i){
        cout<<"caught execption:"<<i;
    }
    cout<<"\nfun end";
}
int main()
{
    fun3();
    

    return 0;
}

