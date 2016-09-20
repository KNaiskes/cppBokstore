#include<iostream>
#include<string>
#include"newbook.h"
#include<fstream>

AddBook::AddBook(std::string title,std::string author,std::string section,int pages,int stock,double price)
	:BookTitle(title),BookAuthor(author),BookSection(section),BookPagesNum(pages)
	 ,BookStock(stock),BookPrice(price){}

void AddBook::PrintInfo()
{
	std::cout<<"Title:"<<" "<<BookTitle<<std::endl;
	std::cout<<"Author:"<<" "<<BookAuthor<<std::endl;
	std::cout<<"Section:"<< " "<<BookSection<<std::endl;
	std::cout<<"Pages:"<<" "<<BookPagesNum<<std::endl;
	std::cout<<"Availability:"<<" "<<BookStock<<std::endl;
	std::cout<<"Price:"<<" "<<BookPrice<<std::endl;
	std::cout<<"Do you want to save this book ? : Y/N"<<std::endl;
}
void AddBook::SaveBook()
{
	std::fstream file;
	file.open("books.txt",std::ios::in|std::ios::ate|std::ios::app);

	if(file.is_open())
	{

		file <<std::string(80,'~');
		file <<std::endl;
		file <<"Title:"<<"  "<<BookTitle<<"  "<<"Author:"<<BookAuthor<<"  "
			<<"Section:"<<BookSection<<"  "<<"Pages:"<<BookPagesNum
			<<"  "<<"Stock:"<<BookStock<<"  "
			<<"Price:"<<BookPrice<<std::endl;

		file.close();
	}
	else{
		std::cout<<"Couldn't open the file"<<std::endl;
	}


}
void AddBook::ExistsCheck()
{
	std::string newline;
	std::fstream file;
	file.open("books.txt",std::ios::in);
	
	while(std::getline(file,newline)){
		if(newline.find("kiriakos naiskes") != std::string::npos){
			std::cout<<"It already exists!"<<std::endl;
		}
	}
}
