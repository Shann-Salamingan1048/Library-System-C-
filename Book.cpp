#include "Book.h"

Book::Book(std::string Author, std::string Title, uint16_t BookID)
{
	this->Author = Author;
	this->Title = Title;
	this->BookID = BookID;
	this->Is_Borrowed = false;
	
}
Book::~Book()
{
}