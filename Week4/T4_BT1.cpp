#include <bits/stdc++.h>
using namespace std;

void swap(int a, int b){
	cout<< "Before: " << a << " " << b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<< "After: "<< a << " " << b << endl;
}

void swap2(int &a, int &b){
	cout<< "Before: " << a << " " << b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<< "After: "<< a << " " << b << endl;
}

int main(){
	
	// break, continue
	int number1, number2;
	cin >> number1 >> number2;
	swap(number1, number2);
	cout<< "Tham tri: " << number1 << " "<< number2 << endl;
	swap2(number1, number2);
	cout<< "Tham chieu: " << number1 << " "<< number2 << endl; 
	return 0;
}


