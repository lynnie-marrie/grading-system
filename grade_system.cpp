#include <iostream> 
using namespace std;

int main() {
	double grade;
	
	cout << "Please enter your grade";
	cin >> grade;	
	
	if ( (grade >= 90) && (grade < 100) ) {
		cout << " your grade is: " << "A";
	}
	else if ( (grade >= 80) && (grade < 90) ) {
		cout << " your grade is : " << "B";
	}
	else if ( (grade >= 70) && (grade < 80) ) {
		cout << " your grade is : " << "C";
	}
	else if ((grade >= 60) && (grade < 70) ) {
		cout << " your grade is : " << "D";
	}
	else if ( (grade >= 30) && (grade < 60) ) {
		cout << " your grade is : " << "E";
	}
	else if ( (grade >= 0) && (grade <30) ) {
		cout << " your grade is : " << "F";
	}
 	return 0;
}
