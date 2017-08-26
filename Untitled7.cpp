#include<iostream>
#include<math.h>
using namespace std;

int TLP (int a)
{	int c = a;
	int sum=0;
	while ( a > 0)
	{   
		int b = a%10;
		a = a / 10;
		cout<<pow(b,3)<<" ";
		sum=sum+pow(b,3);
	}
	if(sum==c) return 1;
	else return 0;
}
int main() {
	/*for(int i=100;i<=999;i++)
	{
		if(TLP(i))
		{
			cout<<i<<" ";
		}
	}*/
	TLP(153);
	

	
}
