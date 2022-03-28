#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> array;
	int num;
	cin >> num;
	
	while (num --) {
		int temp;
		cin >> temp;
		
		array.push_back(temp);
	}
	
	map <int, int> m;
	
	for (int i = 0; i < array.size(); ++ i) {
		m[array[i]] ++;
	}
	
	map <int, int> :: iterator it;
	for (it = m.begin(); it != m.end(); ++ it) {
		if (it->second != 1) {
			cout << it->first << " " << it ->second << endl;
		}
	}
	
	return 0;
}


