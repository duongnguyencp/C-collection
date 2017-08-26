#include<iostream>
#include<math.h>
using namespace std;

int SCP(int a)
{
	int b=sqrt(a);
	int c=b*b; //kinh nghiem la can ko ra le la dc :))
	if(a==c) return 1;
	else return 0;
}
int main ()
{   int m,n;
	std::cin>>m>>n;
	for(int i=m; i<=n;i++)
	{
		if(SCP(i)) cout<<i<<"\t";
	}
	//cout<<(int)sqrt(17);
	return 0;
}
