#include <bits/stdc++.h>
using namespace std;

string pigLatin(string text){
	char a = text[0];
	text.erase(0, 1);
	text += a;
	return text+"ay";
}

int main(){

	string text;
	getline(cin, text);
	
//	cout<< text;0
//	for(int i=0; i < text.size()-3; i++){
//		if(text.substr(i, 4) != "Zues"){
//			cout<< text[i];
//		} else if (text.substr(i, 4) == "Zues"){
//			cout<< "Zeus";
//		}
////		cout<< text[i] << " ";
//	}
	
	cout<< pigLatin(text);
	return 0;
}


