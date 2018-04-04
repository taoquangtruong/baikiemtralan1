#include<iostream>
#include<cmath>
bool kt(int n)
{
	int i,dem=0;
	if(n<2) return 0;
	for(i=0;i<sqrt(n);i++)
	if(n%i==0) dem++;
	if(dem==1) return 1;
}
using namespace std;
int main()
{
	int i,n,s=0,a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	
	cout<<"day theo chieu thuan"<<endl;
	for(i=0;i<=19;i++)
    {cout<<a[i]<<"\t";} cout<<endl;
    
    cout<<"day theo chieu nghich"<<endl;
    for(i=19;i>=0;i--)
    { cout<<a[i]<<"\t"; } cout<<endl;
    
	cout<<"day so chan la "<<endl; 
    for(i=0;i<=19;i++)
    {
	if(a[i]%2==0)
    cout<<a[i]<<"\t";} cout<<endl;
    
    cout<<"day so le la"<<endl;
    for(i=0;i<=19;i++)
    {
	if(a[i]%2==1)
    cout<<a[i]<<"\t";} cout<<endl;
    
    cout<<"cac so nguyen to la"<<endl;
    for(i=0;i<=19;i++)
    {if(kt(a[i]==1)) cout<<a[i]<<"t";}
    
    cout<<"tong la:";
    for(i=0;i<=19;i++)
    s=s+a[i];
    cout<<s<<endl;
    
    
    return 0;	
	
	
	
}
