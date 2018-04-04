#include<iostream>
#include<string>
using namespace std;

int main()
{
	string ten;
	float toan,ly,hoa,tb;
	cout<<"Ho va ten:";
	cin>>ten;
	cout<<"diem mon toan la:"; cout<<endl;
	cin>>toan;
	cout<<"diem mon ly la:"; cout<<endl;
	cin>>ly;
	cout<<"diem mon hoa la:"; cout<<endl;
	cin>>hoa;
	tb=(toan+ly+hoa)/3;
	if(tb>=8) cout<<"xuat sac";
	if((tb>=7) && (tb<8)) cout<<"gioi";
	if((tb>=6) && (tb<7)) cout<<"kha";
	if((tb>=5) && (tb<6)) cout<<"trung binh";
	if(tb<5) cout<<"yeu";
	
}
