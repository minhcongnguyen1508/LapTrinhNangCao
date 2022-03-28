#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	// 1 1 2 3 4 5 5 5 6 7 8
	int i = 0;
	int j = i+1;
	cout<< a[0] << " ";
	
	while(j < n){
		if(a[i] == a[j]){
			i = j;
			j = i+1;
		}else{
			cout<< a[j]<< " ";
			i = j;
			j = i+1;
		}
	}
	
	
	return 0;
}


