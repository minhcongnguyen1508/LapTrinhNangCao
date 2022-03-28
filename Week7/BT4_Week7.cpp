#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++){
		if (s[i] == s[i + 1] ){
			s = s.substr(0, i + 1) + "*" + s.substr(i + 1, s.size() - i);
		}
	}
	cout << s;
	return 0;
}


