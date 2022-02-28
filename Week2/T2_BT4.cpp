#include <bits/stdc++.h>
using namespace std;

void inkq(int animals, int legs){
	cout<< animals<< " "<< legs<< endl;
	for(int chicken=0; chicken <= animals; chicken++){
		if(chicken*2 + (animals-chicken)*4 == legs){
			cout<< chicken << " - " << animals-chicken << endl;
		}
	}
}

int main(){
	int animals, legs;
	cin>> animals >> legs;
	inkq(animals, legs);
	
	return 0;
	
	
}


