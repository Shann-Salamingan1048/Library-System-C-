#pragma once
#include <string>

struct Book
{
	std::string Author;
	std::string Title;
	uint16_t BookID;
	bool Is_Borrowed;
	
	Book(std::string Author,std::string Title,uint16_t BookID);	
	~Book();
};
