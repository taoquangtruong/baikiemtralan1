#include<iostream>
using namespace std;

int main()
{
	int n,t,m,max=0;
	do
	{
		cout<<"nhap so nguyen duong:";
		cin>>n;
	}
	while((n<0)||(n>10000));
	m=n;
	while(m!=0)
	{
		t=m%10;
		m=m/10;
		if(t>max) max=t;
	}
	cout<<"chu so lon nhat trong"<<n<<"la"<<max;
	return 0;
	
	
	
}
