#include<iostream>
using namespace std;

void search (int a[], int n)
{	int max1, max2, k, t;
	if(a[1]>=a[0])
	{
		max1=a[1]; max2=a[0];k=1;t=0;
	}
	else
	{
		max1=a[0];max2=a[1];k=0;t=1;
	}
	for(int i=0; i<n;i++)
	{
		if(a[i]>max1)
		{	max2=max1;t=k;
			max1=a[i];k=i;
		}
		else if(a[i]>(max2)&&a[i]<(max1))
		{
			max2=a[i];t=i;
		}
	}
	cout<< "a";
	std::cout<<"location and max la: " << max1<< " "<< k;
	std::cout<<"location and second-max: "<< max2<< " "<< t;	
}
void sapXep (int a[], int n)
{
	for(int i=0; i<n;i++)
	{
		for(int j=i; j<n;j++)
		{
			if(a[i]<=a[j]){ int temp=a[i];a[i]=a[j];a[j]=temp;}
		}
	}	

}
void addElement (int a[],int n)
{	int x;
	cout<< "nhap x";
	cin>>x;
	for(int i=0; i<=n-2; i++)
	{
		if(x<=a[i] && x>a[i+1])
		{
			for(int j=n; j>=i+1; j--)
			{
				a[j]=a[j-1];
			}
			a[i+1]=x;
			break;
			cout<<"alo";
		}	
	}
	for(int i=0; i<=n; i++)
	{
		cout<< a[i]<< " ";
	}
}

int main()
{
	int a[100], n;
	cout<< "nhap n:";
	cin>> n;
	for(int i=0; i<n; i++)
	{	std::cout<<"a["<<i<<"]:";
		std::cin>>a[i];
	}
	sapXep(a,n);
        addElement(a,n);
	return 0;
		
}