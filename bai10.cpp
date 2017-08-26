#include<iostream>
#include<math.h>
using namespace std;

int horner (int x)
{
	int p=0, n, heSo[30];
	cout<< "nhap bac n";
	cin>> n;
	for(int i=0; i<=n; i++)
	{
		cin>> heSo[i];
	}
	p= heSo[n]*x+heSo[n-1];
	for(int i=n-2; i>=0;i--)
	{
		p=p*x+heSo[i];
	}
	return p;
} 	
int dhHorner (int x)
{
	int p=0, k, n, heSo[30];
	cout<< "nhap bac n";
	cin>> n;
	for(int i=0; i<=n; i++)
	{
		cin>> heSo[i];
	}
	p= heSo[1];
	for(int i=2; i<=n; i++)
	{	 k=pow(x, i-1);
		p+= i* k* heSo[i];
	}
	return p;
}		
int main ()
{
	int x;
	cout<< "nhap x";
	cin>> x;
	cout<< "dao ham p:"<< dhHorner(x);
	return 0;
}