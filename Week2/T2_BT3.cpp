#include <bits/stdc++.h>
using namespace std;

bool ktscp(int n){
	int num = sqrt(n); // sqrt(4) => num = 2; sqrt(5) => num = 2
	
	if (num*num == n){
		return true;
	}
	return false;
}

int main(){
	int lowerBound, upperBound;
	cin >> lowerBound >> upperBound;  // [lowerBound, .... , upperBound]
	
	for(int i=lowerBound; i<=upperBound; i++){
		if(ktscp(i) == true){
			cout<< i << " ";
		}
	}
	
	return 0;
}


