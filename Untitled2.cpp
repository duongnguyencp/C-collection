#include<iostream>
using namespace std;
void table(int a)
{
	cout<<"integer "<<"square "<<"cube "<<endl;
	for(int i=0;i<=a;i++)
	{
		cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
	}
}
int main()
{
	int a;
	cout<<"nhap a:"<<endl;
	cin>>a;
	table(a);
}
