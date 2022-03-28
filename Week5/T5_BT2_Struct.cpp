#include <bits/stdc++.h>
using namespace std;
struct complexNumber
{
	double x;
	double y;
	complexNumber(double _x, double _y)
	{
		x=_x;
		y=_y;
	}
};
complexNumber add(complexNumber a, complexNumber b)
{
	return complexNumber(a.x+b.x,a.y+b.y);
}
complexNumber subtract(complexNumber a, complexNumber b)
{
	return complexNumber(a.x-b.x,a.y-b.y);
}
complexNumber multiply(complexNumber a, complexNumber b)
{
	return complexNumber(a.x*b.x-a.y*b.y,a.y*b.x+b.y*a.x);
}

int main(){
	double x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	complexNumber a(x1,y1),b(x2,y2);
	complexNumber addition=add(a,b);
	complexNumber subtraction=subtract(a,b);
	complexNumber multiplication=multiply(a,b);
	cout<<addition.x<<" "<<addition.y<<endl;
	cout<<subtraction.x<<" "<<subtraction.y<<endl;
	cout<<multiplication.x<<" "<<multiplication.y<<endl;
	return 0;
}


