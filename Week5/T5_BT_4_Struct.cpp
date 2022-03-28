#include <bits/stdc++.h>
using namespace std;
struct student
{
	string roll;
	string name;
	int age;
	double mark;
};
void nhap(student &a)
{
	cout<<"Enter roll :";cin>>a.roll;
	cout<<"Enter name :";
	cin.ignore();
	getline(cin,a.name);
	cout<<"Enter age :";cin>>a.age;
	cout<<"Enter mark :";cin>>a.mark;
}
void xuat(student a)
{
	cout<<"Roll of student:"<<a.roll<<endl;
	cout<<"Name of student:"<<a.name<<endl;
	cout<<"Age of student:"<<a.age<<endl;
	cout<<"Mark of student:"<<a.mark<<endl;
}
int main()
{
	int n;
	cin>>n;
	student st[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap du lieu hoc sinh "<<i+1<<endl;
		nhap(st[i]);
		cout<<"Student number "<<i+1<<endl;
		xuat(st[i]);
		cout<<"--------------"<<endl;
	}
	
	return 0;
}


