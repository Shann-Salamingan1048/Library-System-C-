#include "Library.h"
#include "Members.h"
int main(int argc, char *argv[])
{
	// Creating books on the heap using dynamic memory allocation
    Book* b1 = new Book("Shanny Salamingan", "C++ With me", 12152);
    Book* b2 = new Book("Samira", "How to make up", 56789);
    Book* b3 = new Book("Shaina", "Freelancing", 23522);
	Library lib1;
	Student s1("Shann",19,"Purok 4 San Juan");
	s1.BorrowABook(b1);
	s1.Print_Info();
	lib1.AddBook(b1);
	lib1.AddBook(b2);
	lib1.AddBook(b3);
	lib1.DisplayBooks();
	s1.ReturnABook(b1);
	lib1.DisplayBooks();
}