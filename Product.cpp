#include "Product.h"
#include <string>
#include<iostream>
#include<iomanip>
Product::Product() = default;
Product::Product(const std::string& name, int code, double price, double discount) :
	productName(name),
	productCode(code),
	productPrice(price < 0 ? 0.00 : price),
	productDiscount(discount) {

};

std::string Product::getProductName() { return productName; }
int Product::getProductCode() { return productCode; }
double Product::getProductPrice() { return productPrice; }
double Product::getProductDiscount() { return productDiscount; }

void Product::setProductName(std::string name) { productName = name; }
void Product::setProductCode(int code) { productCode = code; }
void Product::setProductPrice(double price) { productPrice = price; }
void Product::setProductDiscount(double discount) { productDiscount = discount; }

void Product::displayMenu() {
    int menuOption;
	using std::cout;
    using std::endl;
    using std::setw;
    using std::setfill;
    using std::left;
    using std::right;
    using std::fixed;
    using std::setprecision;

cout << setfill('.') << setw(40) << "" << endl;
    cout << setfill(' ') << setw(25) << right << "PRODUCT MENU" << endl;
    cout << setfill('.') << setw(40) << "" << endl;
    cout << setfill(' ') << left;
    cout << setw(5) << "#" 
         << setw(20) << "Options" 
         << setw(15) << "Descriptions" << endl;
    cout << setfill('-') << setw(40) << "" << endl;
    cout << setfill(' ') << left;
    cout << setw(5) << "1" 
         << setw(20) << "Manage Products" 
         << setw(15) << "Product Administration" << endl;
    cout << setw(5) << "2" 
         << setw(20) << "Purchase Product" 
         << setw(15) << "Customer Affairs" << endl;
    cout << setw(5) << "3" 
         << setw(20) << "Exit" 
         << setw(15) << "Close Menu" << endl;
    cout << setfill('.') << setw(40) << "" << endl;
    std::cout << "Option:";
    std::cin >> menuOption;
    switch (menuOption) {
    case 1:
        // Code for option 1
        break;
    case 2:
        // Code for option 2
        break;
    case 3:
        // Code for option 3
        break;
    default:
        std::cout << "invalid response";
        exit(EXIT_FAILURE);
        break;
    }
}