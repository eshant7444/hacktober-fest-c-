using namespace std;
#include<iostream>
int main()
{
	int a[10];
	int sum=0;
	for(int i=0;i<10;i++)
	{
	cin>>a[i];
	sum=sum+a[i];
}
cout<<"The sum of 10 enteresd elements are : "<<sum;
}
