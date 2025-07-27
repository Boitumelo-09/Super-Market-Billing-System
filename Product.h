#pragma once
#include<iostream>
#ifndef PRODUCT_H
#define PRODUCT_H

#ifdef _WIN32
#define clear "cls"
#else
#define clear "clear"
#endif

class Product {
private:
	std::string productName{ " " };
	int productCode{ 0 };
	double productPrice{ 0.00 };
	double productDiscount{ 0.00 };
public:

	Product();
	Product(const std::string& name, int code, double price, double discount);

	std::string getProductName();
	int getProductCode();
	double getProductPrice();
	double getProductDiscount();

	void setProductName(std::string name);
	void setProductCode(int code);
	void setProductPrice(double price);
	void setProductDiscount(double discount);

	void administrator();
	void customer();
	
};

void clearScreen();
void clearScreenWithMessage();
void displayMenu(int &MenuChoice);


#endif // !PRODUCT_H

