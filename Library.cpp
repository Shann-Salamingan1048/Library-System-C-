#include "Library.h"
Library::Library()
{
}
Library::~Library()
{
	for(auto i : this->Books)
		delete i;
}
void Library::DisplayBooks()
{
	if (Books.size() > 0)
	{
		uint16_t count = 1;
		for (auto i : Books)
		{
			if(!(i->Is_Borrowed))
			{
			cout
				 << endl << "Book #" << count << endl;
			cout << "Title: " << i->Title << endl
				 << "Author: " << i->Author << endl
				 << "Book ID: " << i->BookID << endl;
			count++;
			}
		}
	}
	else
	{
		cout << endl << "No Books Yet!" << endl;
	}
}
void Library::ReturnABook(Book *book)
{
	book->Is_Borrowed = false;
}
void Library::BorrowABook(Book *book)
{
	book->Is_Borrowed = true;
}
void Library::AddBook(Book *book)
{
	this->Books.push_back(book);
}
void Library::RemoveBook(Book *book)
{
	this->Books.erase(std::remove_if(
						  this->Books.begin(), this->Books.end(), [book](const Book* Boook) {
							  return Boook->BookID == book->BookID;
						  }),
					  this->Books.end());
// Lambda = [capture](parameter or T params)
// Meaning capture is putting external variable into internal variable in order to use it. Refer to the above code. 
// it Captures the "book" in order to use the "book" in return Boook->BookID == book->BookID;
// the "(const Book* book)" it means a paramter, so how can it passed down the value?
// simple because the "std::remove_if" will loop the entire vector due to .begin() and .end()
}
