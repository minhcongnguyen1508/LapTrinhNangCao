#include <bits/stdc++.h>
using namespace std;

int giaithua(int n){ // n! = 1*2*3*...*n
	int giaithua = 1;
	for(int i=1; i<=n; i++){
		giaithua *= i; // giaithua = giaithua * i; x += 1 => x = x + 1
	}
	return giaithua;
}

int mu(int n, int x){ // n^5 = n*n*n*n*n 
	int result=1;
	for(int i = 0; i < x; i++){
		result *= n;
	}
	return result;
}

int main(){
//	cout<< giaithua(5) << " "<< mu(5, 2);
	int x;
	cin>> x;
	if(x > 50 || x < 0){
		cout<< "invalid";
	}else{
		float sum_i = 1;
		float sum_i_1 = sum_i;
		int i = 1;
//		cout<< x<< endl;
		while(true){
			sum_i = sum_i + (float)mu(x, i)/giaithua(i);
			i++;
//			sum_i_1 = sum_i;

			if(sum_i - sum_i_1 < 0.001){
				cout<< "So lan lap: " <<i<< endl;
				break;
			}
			sum_i_1 = sum_i;
		}
		cout<< sum_i;
	}
	return 0;
}


