#include<iostream>
using namespace std;
struct person{
	char name[100];
	int age;
	int salary;
};
int main(){
	person p1;
	person *ptr;
	ptr = &p1;
	cout <<"Enter the name of Employee "<<endl;
	cin.getline(ptr->name,100);
	cout <<"Enter the age of Employee "<<endl;
	cin >>ptr->age;
	cout <<"Enter the salary of Employee "<<endl;
	cin >>ptr->salary;
	cout <<endl;
	
	cout <<"You have enter the following details "<<endl<<endl;
	cout <<"Name   : "<<ptr->name<<endl;
	cout <<"Age    : "<<ptr->age<<endl;
	cout <<"Salary : "<<ptr->salary<<endl;
	return 0;
}
