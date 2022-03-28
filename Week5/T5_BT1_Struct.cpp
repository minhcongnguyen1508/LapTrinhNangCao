#include <bits/stdc++.h>
using namespace std;
struct Students{
	int no, age;
	string name;
	double marks;
	
	Students(int no , int age, string name, double marks) : no(no), age (age), name(name), marks(marks) {
	}
};

int main(){
	Students s1 (1,18,"Pham Huy Hoang", 9.9);
	cout << s1.no << " " << s1.age << " " << s1.name << " " << s1.marks ;
//	Students s2;
//	s2.name 
	return 0;
}


