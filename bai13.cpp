#include<iostream>
#include<math.h>
#define const 100
using namespace std;

void oMaTrix (int a[][const], int n)					// out put ma tran
{
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<n; i++)
		{
			cout<< a[j][i]<<" ";
		}
		cout<<"\n";
	}	
}
void oMaTrix2 (float a[][const], int n)					// out put ma tran
{
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<n; i++)
		{
			cout<< a[j][i]<<" ";
		}
		cout<<"\n";
	}	
}
void iMaTrix (int a[][const], int n)					// inma tran
{
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<n; i++)
		{
			cout<< "a["<< j<< i<<"]:";
			cin>> a[j][i];
		}
	}
}
void maxRCCheo(int a[][const], int n)                                      // vai phep toan voi ma tran
{	int maxR=0;
	int maxC=0;
	int Sum=0;
	for(int j=0; j<n; j++)
	{	 Sum=0;
		for(int i=0; i<n; i++)
		{
			Sum+=a[j][i];
		}
		if(Sum>maxR) maxR=Sum;
	}
	for(int i=0; i<n; i++)
	{	Sum=0;
		for(int j=0; j<n; j++)
		{
			Sum+=a[j][i];	
		}
		if(Sum>maxC) maxC=Sum;
	}
	Sum=0;
	for(int j=0; j<n; j++)
	{
			Sum+=a[j][j];
	}
	int maxCheo=Sum;
	int Sum2=0;
	for(int j=0; j<n; j++)
	{
			Sum2+=a[j][n-1-j];
	}
	if(Sum2>maxCheo) maxCheo=Sum2;
	cout<<"hang max:"<<maxR<<"\n cot max:"<<maxC<<"\n maxCheo:"<<maxCheo;
	
}
void newDeterminant(int a[][const], int b[][const], int n, int row, int col)
{	int t=0,k=0;
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<n; i++)
		{	
			if(j!= row && i!= col)
			{	
				b[t][k++]=a[j][i];
				if(k==n-1) {k=0; t++;}
				
			}
		}
	}	
}
int determinant( int A[][const], int n) 						//ma tran dinh thuc
{	int Sum=0, B[const][const], j=0, row=0, col=0;
	if(n==1) return A[0][0];
	int sig=1;
	for(j=0; j<n; j++)
	{	newDeterminant(A, B, n, j,0);
		Sum+=sig*A[j][0]*determinant(B, n-1);
		sig=-sig;
	}
	return Sum;
	
}
void chuyenVi (float a[][const], int n)// chuyen vi ma tran
{	int j=0;
	for(j=0 ; j<n; j++)
	{
		for(int i=j; i<n; i++)
		{
			int temp=a[j][i];a[j][i]=a[i][j];a[i][j]=temp;
		}
	}
	
}
void converse(int a[][const], float c[][const], int n)
{	int b[const][const];
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<n; i++)
		{	newDeterminant(a, b,n,j,i);
			c[j][i]=pow(-1,i+j+2)*determinant(b,n-1);
		}
	}
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<n; i++)
		{	
			c[j][i]*=1/determinant(a,n);
		}
	}
	
}
									
int main()
{
	int a[const][const],n;float c[const][const];
	cin>>n;
	iMaTrix(a,n);
	oMaTrix(a,n);
       //	maxRCCheo(a,n);
	cout<<determinant(a,n)<<"\n";
	converse(a,c,n);
	chuyenVi (c,n);
	oMaTrix2(c,n);
	return 0;
}