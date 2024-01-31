#pragma once
#include "Book.h"
#include <vector>
#include <iostream>
#include <string>
using std::cout;
using std::endl;

class Library
{
	private:
		std::vector<Book*> Books;
	public:
		Library();
		~Library();
		void Run();
		void AddBook(Book* book);
		void RemoveBook(Book* book);
		void BorrowABook(Book* book);
		void ReturnABook(Book* book);
		void DisplayBooks();
};