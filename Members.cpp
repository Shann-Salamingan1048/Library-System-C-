#include "Members.h"

Members::Members(std::string Name, int Age, std::string Address,std::string MemberType)
{
	this->Name = Name;
	this->Age = Age;
	this->Address = Address;
	this->MemberType = MemberType;
}

Members::~Members() {}
void Members::Print_Info()
{
	cout << "Borrower's Info: "<< endl <<"Name: " << this->Name << endl << "Age: " << this->Age << endl << "Address: " << this->Address << endl << "Type of a Member: " << this->MemberType << endl;
}

Teacher::Teacher(std::string Name, int Age, std::string Address)
    : Members(Name, Age, Address,"Teacher") {}
Teacher::~Teacher(){}
Student::Student(std::string Name, int Age, std::string Address)
    : Members(Name, Age, Address,"Teacher") {}
Student::~Student(){}
