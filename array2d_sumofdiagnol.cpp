 using namespace std;
 #include<iostream>
class array{
	int a[3][3];
	public:
		void get(){
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++){
					cin>>a[i][j];
				}
			}
		}
		void show(){
			int sum=0;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++){
					if(i==j)
					sum=sum+a[i][j];
				}
			}
			cout<<sum;
		}
};
int main(){
	array a;
	a.get();
	a.show();
}
