#include <iostream>
#include <string>
using namespace std;
int main(){
	string fullname = "Byron Emmanuel Uwem";
	int age = 21;
	double height = 1.75;
	double cgpa = 4.00;
	bool isEnrolled = true;
	cout<<"Name: "<<fullname<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"CGPA: "<<cgpa<<endl;
	cout<<"Currently Enrolled: "<<(isEnrolled? "Yes": "No")<<endl;
	return 0;
}
