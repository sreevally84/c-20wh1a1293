//pure virtual function
#include<iostream>
using namespace std;
class base{
	public:
		virtual void display()=0;
	};
		class derived:public base{
			void display()
			{
				cout<<"pure virtual function in base class"<<endl;
				}
				};
				int main(){
				base *bp = new derived;
				bp->display();
				return 0;
			}


