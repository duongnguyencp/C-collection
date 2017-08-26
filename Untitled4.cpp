#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0) 
		return a;
	else
    	return gcd(b, a%b);
}
int bcd(int a,int b)
{
	return a*b/(gcd(a,b));
}
int main() {
	int a, b;
	cin>>a >>b ;
	cout<< gcd(a,b);
	return 0;
}


