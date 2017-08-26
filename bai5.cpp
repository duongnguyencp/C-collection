#include<iostream>
using namespace std;

void hexaDecimal (int a,int b)
{
	int c=0, i=0; char hexDecimal[100];
	while(a>0)
	{
		c= a % b;// lay du
		a= a / b;//giam a
		if(c< 10) //them c vao mang
		{
			hexDecimal[i]= c+48;
		}
		if(c>= 10)
		{
			hexDecimal[i]= c+55;
		}
		i++;	
	}
	for(int j=i-1; j>=0;j--)
	{
		cout<< hexDecimal[j];
	}
}
void eveDecimal (int a, int b)
{	
	int c=0, i=0; int Decimal[100];
	while(a>0)
	{
		c= a % b;// lay du
		a= a / b;//giam a
		Decimal[i]= c;
		i++;	
	}
	for(int j=i-1; j>=0;j--)
	{
		cout<< Decimal[j];
	}
}


int main() {
	int a, b;
	cin>> a>> b;
	if(b==16)
	{
		hexaDecimal(a, b);
	}
	else 
	{
		eveDecimal(a, b);
	}
	return 0;
}