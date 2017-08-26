#include<iostream>
using namespace std;
	unsigned GCD(unsigned u, unsigned v) {
    while ( v != 0) {
        unsigned r = u % v;
        u = v;
        v = r;
    }
    return u;
}
int main ()
{
	unsigned u, v;
	cin>>u>>v;
	cout<<GCD(u,v)<<endl;
}

