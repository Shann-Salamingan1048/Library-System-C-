#pragma once
#include "Library.h"

class Members : public Library{
public:
    Members(std::string Name, int Age, std::string Address, std::string MemberType);
    ~Members();
    void Print_Info();

private:
    std::string Name;
    int Age;
    std::string Address;
    std::string MemberType;
};

class Teacher : public Members {
public:
    Teacher(std::string Name, int Age, std::string Address);
    ~Teacher();  
};
class Student : public Members {
public:
    Student(std::string Name, int Age, std::string Address);
    ~Student();  
};
