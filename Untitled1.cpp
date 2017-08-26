#include<iostream>
#include<math.h>
using namespace std;
int count(long a)
{	int i;
	while(a>0)
	{	a=a/10;//chia den khi bang 0
		i++;
	}
	return i;
}
void tachso(long a)
{
	for(int i=count(a)-1;i>=0;i--)
	
	{   long c=pow(10,i);
	 	long b= a/c;//count bang varibles then have int
	 	
		cout<<b<<" ";
		a=fmod(a,c);// de chia lay du cho double
	}
}

int main()
{
	long a;
	cout<<" chu so:";
	cin>>a;
	tachso(a);
	return 0;
	
}
