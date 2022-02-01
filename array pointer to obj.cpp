//array pointer to obj
#include<iostream>
using namespace std;
class item
{
	int code;
		public:
			void get()
			{
				cout<<"enter code"<<endl;
				cin>>code;
				}
				void show()
				{
				cout<<"code"<<code<<"\n"<<endl;
			}
		};
		int main()
		{
			item x;
			item *ptr = new item[5];
			x.get();
			x.show();
			cout<<"array of pointer objects"<<endl;
			for(int i=0;i<5;i++)
			{
			ptr->get();
			ptr->show();
			}
			return 0;
			}
