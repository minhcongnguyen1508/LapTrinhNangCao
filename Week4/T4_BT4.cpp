#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>> n >> k;
	int a[n+1];
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int temp;
	for(int i = 0; i < n; i++){
		if(a[i] > k){
			temp = a[i];
			a[i] = k;
			k = temp;
			// i la vi tri thich hop
		}
	}
	a[n] = temp;
	
	for(int i = 0; i < n+1; i++){
		cout<< a[i] << " ";
	}
	return 0;
}


