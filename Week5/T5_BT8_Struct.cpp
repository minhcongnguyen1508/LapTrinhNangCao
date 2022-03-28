// Nguyen Thi Oanh
#include <bits/stdc++.h>
using namespace std;
struct complex1{
	int real;
	int img;
    complex1 add( complex1& other){
    	complex1 ad;
    	ad.real= real+other.real;
    	ad.img= img+other.img;
    	return ad;
	}
	complex1 substract(complex1& other){
		complex1 su;
		su.real= real-other.real;
    	su.img= img-other.img;
    	return su;
	}
	complex1 mul(complex1& other){
		complex1 mu;
		mu.real= real*other.real-img*other.img;
    	mu.img= real*other.img+ img*other.real;
    	return mu;
	}
};

int main(){
	complex1 x1, x2, x3;
    cin>> x1.real>>x2.img;
    cin>>x2.real>>x2.img;
    x3=add(x1,x2);
    cout <<x3<<endl;
    x3=substract(x1,x2);
    cout << x3<<endl;
    x3=mul(x1,x2);
    cout << x3 << endl;
	return 0;
}


