//early binding
#include<iostream>
using namespace std;
class base

{
	public:
		void show()
		{
			cout<<"in base\n"<<endl;
		}
	};
	class derived:public base
	{
		public:
			void show()
			{
				cout<<"in derived\n"<<endl;
			}
		};
		int main(void)
		{
			base*bp=new derived;
			bp->show();
			return 0;
		}
