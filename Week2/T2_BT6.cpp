#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int temp;
    for(int x = 1; x <= n+1; x++){
        for(int y = 1; y <= 2*n+1; y++){
            if ((y <= (2*n+1)/2 - x + 1) || (y >= (2*n+1)/2 + x + 1)){
                cout<<". ";
            }else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int x = n; x >= 1; x--) {
        for(int y = 1; y <= (2*n + 1); y++) {
            if ((y <= (2*n+1)/2 - x + 1) || (y >= (2*n+1)/2 + x + 1)) cout << ". ";
            else cout << "* ";
        }
        cout << "\n";
    }
	return 0;
}


