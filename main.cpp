#include<iostream>
#include<string>
#include"newbook.h"

int main()
{
	std::string title;
	std::string author;
	std::string category;
	int pages;
	int stock;
	double price;


	std::cout<<"Enter title:"<<std::endl;
	std::getline(std::cin,title);
	std::cout<<"Enter author:"<<std::endl;
	std::getline(std::cin,author);
	std::cout<<"Enter category"<<std::endl;
	std::getline(std::cin,category);
	std::cout<<"Enter pages:"<<std::endl;
	std::cin >> pages;
	std::cout <<"Enter stock:"<<std::endl;
	std::cin >> stock;
	std::cout<<"Enter price:"<<std::endl;
	std::cin >> price;


	AddBook newbook(title,author,category,pages,stock,price);


	newbook.PrintInfo();
	newbook.SaveBook();
	newbook.ExistsCheck();

	return 0;
}
