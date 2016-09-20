#ifndef NEWBOOK_H
#define NEWBOOK_H

#include<string>
#include<iostream>

class AddBook
{
	private:
		std::string BookTitle;
		std::string BookAuthor;
		std::string BookSection;
		int BookPagesNum;
		int BookStock;
		double BookPrice;

	public:
		AddBook();
		AddBook(std::string title,std::string author,std::string section,int pages,int stock,double price);
		void PrintInfo();	
		void SaveBook();
		void ExistsCheck();
};

#endif
