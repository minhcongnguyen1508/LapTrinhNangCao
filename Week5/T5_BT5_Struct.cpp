// Nguyen Tien Hoang
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Marks{
	int no;
	string roll;
	string name;
	float chem_marks,maths_marks,phy_marks;
};

int main(){
	for(int i=0;i<5;i++){
		struct Marks student;
		cin >> student.no;
		cin >> student.roll;
		cin.ignore();
		getline(cin,student.name);
		cin >> student.chem_marks >> student.maths_marks >> student.phy_marks;
		
		defaultValues(student);
		
		cout << setprecision(2) << fixed
		<< (student.chem_marks + student.maths_marks + student.phy_marks)/3 
		<< " " << "%" << endl;
	}
	return 0;
}


