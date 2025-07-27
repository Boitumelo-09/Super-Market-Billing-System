#include "Product.h"
#include<iostream>
    
Product::Product() = default;
Product::Product(const std::string& name, int code, double price, double discount) :
	productName(name),
	productCode(code),
	productPrice(price < 0 ? 0.00 : price),
	productDiscount(discount) {

};
void clearScreen() {
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

void displayMenu(int &menuChoice) {
    std::cout << "\t\t\t\t==================================================\n";
    std::cout << "\t\t\t\t          SUPERMARKET BILLING SYSTEM             \n";
    std::cout << "\t\t\t\t==================================================\n";
    std::cout << "\t\t\t\tNo   Option                 Description\n";
    std::cout << "\t\t\t\t--------------------------------------------------\n";
    std::cout << "\t\t\t\t1    Manage Products        Admin functions\n";
    std::cout << "\t\t\t\t2    Purchase Product       Customer purchase\n";
    std::cout << "\t\t\t\t3    Exit                   Close the program\n";
    std::cout << "\t\t\t\t==================================================\n";
    std::cout << "\t\t\tOption : "; std::cin >> menuChoice;
}
void clearScreenWithMessage() {
    std::cin.ignore();
    std::cout << "\n\t\t\t\tPress Enter To Continue...";
    std::cin.get();
    system(clear);
}

void Product:: administrator() {
    std::cout << "admin";
}
void Product:: customer() {
    std::cout << "customer";
}
