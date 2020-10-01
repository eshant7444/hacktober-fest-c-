using namespace std;
#include<iostream>
class student{
	private: 
	float x,y,z,b;
	
	public:
		int a;
		char name[30];
		void getdata()
		{
			cout<<"Enter the name of student ";
			cin>>name;
			cout<<"Marks in CSE and ECE and Mech and Phy";
			cin>>x>>y>>z>>b;
		}
		void avg(){
			
			a=(x+y+z+b)/4;
			cout<<"Average : "<<a;
			cout<<endl<<name;
			
		}
		
};
int main()
{	int n;
	cout<<"Enter the no of sets";
	cin>>n;
	student obj[n];
	for(int i=0;i<n;i++)
	{
		obj[i].getdata();
		//obj[i].avg();
	}
	
	int s=0;
	int max=obj[0].a;
	for(int i=0;i<n;i++)
	{
		if(obj[i].a>max)
		{
		max=obj[i].a;
		s=i;	
	}
}
cout<<max;
/*	for(int i=0;i<n;i++)
	{
		if(max==obj[i].a)
		{
		s=i;
		break;
	}
	}
*/	
	obj[s].avg();
	
}
