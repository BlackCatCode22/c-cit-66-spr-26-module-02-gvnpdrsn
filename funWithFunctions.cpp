//funWithFunctions.cpp
// Created by GP on 1/31/2026.
#include <iostream>

int getAnIntFromTheUser() {
    std::cout<<"Enter an integer: ";
    int input{};
    std::cin>>input;

    return input;
}

void sumTwoInts(int x, int y) {
    std::cout<< x << "+"<<y<<"="<< x+y <<'\n';
}

void compareTwoInts(int x, int y) {
 if (x>y) {
     std::cout<< x << " > " << y << std::endl;
 } else if (y>x) {
     std::cout<< y << " > " << x << std::endl;
 } else {
     std::cout<< x << " = " << y << std::endl;
 }
}

int main() {
   int x{getAnIntFromTheUser()};
    int y{getAnIntFromTheUser()};

    compareTwoInts(x, y);

    sumTwoInts(x, y);
    return 0;
}