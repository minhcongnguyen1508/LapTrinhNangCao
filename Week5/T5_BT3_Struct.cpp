#include <bits/stdc++.h>
using namespace std;

struct Distance {
	double inch;
	double feet;
};

int main(){
    Distance Distance1, Distance2, Sum;
 	cin >> Distance1.inch;
 	cin >> Distance1.feet;
 	cin >> Distance2.inch;
 	cin >> Distance2.feet;
 
 Sum.inch = Distance1.inch + Distance2.inch;
 Sum.feet = Distance1.feet + Distance2.feet;
 while (Sum.inch > 12.0) {
 	Sum.inch = Sum.inch - 12;
 	Sum.feet++;
 }
 cout << Sum.feet << "ft" <<" "<< Sum.inch << "in";
 return 0;
}


