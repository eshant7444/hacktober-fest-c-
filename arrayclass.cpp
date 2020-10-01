using namespace std;
#include<iostream>
class array{
	int a[10];
	public:
		void get();
		void show();
		
};
void array :: get(){
	int i;
	cout<<"enter an array\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
}
void array :: show()
{
	int i;
	cout<<"entered element are \n";
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	array a;
	a.get();
	a.show();
}

