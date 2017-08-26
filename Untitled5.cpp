#include<iostream>
using namespace std;
int Fibonacii(int a)
{
	if(a<2) return 1;
	else
	{
		return Fibonacii(a-1)+Fibonacii(a-2);
	}
}
int main()
{	
	int a;
	cin>> a;
	while(a>=0)
	{
	
		cout<<Fibonacii(a)<<" ";
		a--;
    }
}
