#include <bits/stdc++.h>
using namespace std;

void readArr(vector <int> &a){
	// <0, 0, 0, 0, 0>
	for(int i=0; i<a.size(); i++){
		int x;
		cin>> x; // x = 1, 3
		
		a[i] = x; // a[0] = 1 => <1, 0, 0, 0, 0>, // a[1] = 3; => <1, 3, 0, 0, 0>
	}
}

void printArr(vector <int> &a){
	for(int i=0; i<a.size(); i++){
		cout<< a[i]<< " ";
	}
}

int main(){
	int n;
	cin>> n;
	
	vector <int> a(n); // Vector a co n phan tu 0
	
	cout<< a.size() << endl;
	
	readArr(a);
	printArr(a);
	
//	for(int i = 0; i < n; i++){
//		int x;
//		cin>> x;
//		A.push_back(x);
//	}
//	
//	
//	for(int i = 0; i < n; i++){
//		cout<< A[i]<< " ";
//	}

	
	return 0;
}


