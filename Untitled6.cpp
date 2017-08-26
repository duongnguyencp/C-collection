#include<iostream>
using namespace std;
void ThuaSo (int a) 
{   int i=2;
	while(a>0)
	{  
		if(a%i==0)
		{
			cout<<i;
			a=a/i;
			if(a!=1) cout<<"x";
		}
		
		if(a%i!=0)
		{
			i++;
		}
	}
}
int main()
{
	int a;
	cin>>a;
	ThuaSo(a);
}
