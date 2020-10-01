using namespace std;
#include<iostream>
class A{
	protected:
		int x;
		public:
			void get()
			{
				cout<<"enter a x\n";
				cin>>x;
			}
};
class B{
	protected:
		int y;
		public:
			void get()
			{
				cout<<"enter a y\n";
				cin>>y;
			}
};
class C: public A, public B{
	
	public:
		void sum()
		{
			cout<<"sum is "<<x+y;
		}
};
int main()
{
	C ob;
	ob.A::get();
	ob.B::get();
	ob.sum();
}
