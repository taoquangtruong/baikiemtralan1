#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,i,j,a[n],max,min,t,m;
	cout<<"nhap gia tri n=";
	cin>>n;
	for(i=0;i<n;i++)
	{cin>>a[i];}
	for(i=0;i<n;i++)
	{cout<<"a["<<i<<"]="<<a[i]<<"t";} cout<<endl;
	
	
	cout<<"so lon nhat la:";
	max=a[1];
	for(i=0;i<n;i++)
	if(a[i]>max) max=a[i];
    cout<<max;
    cout<<endl;
    
    cout<<"so be nhat la:";
    min=a[2];
    for(i=0;i<n;i++)
    if(a[i]<min) min=a[i];
    cout<<min;
    cout<<endl;
	
	cout<<"sap xep tu be den lon:";
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	if(a[i]>a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<endl;
	
	cout<<"sap xep tu lon den be:";
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	if(a[i]<a[j])
	{
		m=a[i];
		a[i]=a[j];
		a[j]=m;
	}}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<endl;
	

	

}
