#include "Product.h"
#include<iostream>
#include<iomanip>
Product::Product() = default;
Product::Product(const std::string& name, int code, double price, double discount) :
	productName(name),
	productCode(code),
	productPrice(price < 0 ? 0.00 : price),
	productDiscount(discount) {

};
void clearScreen() {
    std::cin.ignore();
    std::cout << "Press Enter To Continue...";
    std::cin.get();
    system(clear);
}
std::string Product::getProductName() { return productName; }
int Product::getProductCode() { return productCode; }
double Product::getProductPrice() { return productPrice; }
double Product::getProductDiscount() { return productDiscount; }

void Product::setProductName(std::string name) { productName = name; }
void Product::setProductCode(int code) { productCode = code; }
void Product::setProductPrice(double price) { productPrice = price; }
void Product::setProductDiscount(double discount) { productDiscount = discount; }

void displayMenu() {
    using std::cout;
    using std::endl;
    using std::setw;
    using std::setfill;
    using std::left;
    using std::right;
                
    cout << setfill('=') << setw(50) << "" << endl;
    cout << setfill(' ') << right << setw(36) << "SUPERMARKET BILLING SYSTEM" << endl;
    cout << setfill('=') << setw(50) << "" << endl;
    cout << left;
    cout << setw(6) << "No"
         << setw(25) << "Option"
         << setw(19) << "Description" << endl;

    cout << setfill('-') << setw(50) << "" << endl;
    cout << setfill(' ') << left;

    cout << setw(6) << "1"
         << setw(25) << "Manage Products"
         << setw(19) << "Admin functions" << endl;

    cout << setw(6) << "2"
         << setw(25) << "Purchase Product"
         << setw(19) << "Customer purchase" << endl;

    cout << setw(6) << "3"
         << setw(25) << "Exit"
         << setw(19) << "Close the program" << endl;

    cout << setfill('=') << setw(50) << "" << endl;
}

void Product:: administrator() {
    std::cout << "admin";
}
void Product:: customer() {
    std::cout << "customer";
}
