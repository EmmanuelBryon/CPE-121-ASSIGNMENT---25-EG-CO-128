#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
string name;
int test1, test2, test3;
cout<<"Enter Students name: "<<endl;
cin>>name;
cout<<"Enter three Test Scores"<<endl;
cin>>test1>>test2>>test3;
double average = (test1 + test2 + test3)/3.0;
cout<<fixed<<setprecision(2)<<"Average: "<<average<<endl;
return 0;
}
