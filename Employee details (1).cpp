//Employee details
#include<iostream>
using namespace std;
class employee{
public:
int emp_num = 12;
string emp_name = "vijay";
int basic_sal = 20000;
float DA;
float IT;
float net_sal;
void display(){
cout<<"employee number "<<emp_num<<endl;
cout<<"employee name "<<emp_name<<endl;
cout<<"basic salary "<<basic_sal<<endl;
cout<<"DA "<<basic_sal*0.72<<endl;
cout<<"IT "<<basic_sal*0.5<<endl;
cout<<"net salary "<<basic_sal+basic_sal*0.72-
basic_sal*0.5<<endl;
}
};
int main(){
employee emp;
emp.display();
return 0;
}

