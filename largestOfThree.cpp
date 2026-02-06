// largestOfThree.cpp
// Created by GP on 2/6/2026.

#include <iostream>

int getThreeInt () {
std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

void compareThreeInts(int x,int y,int z){
 if (x > y && x > z) {
     std::cout << "The largest of three is: " << x << std::endl;
 } else if (y > x && y > z) {
     std::cout << "The largest of three is: " << y << std::endl;
 } else if (z > x && z > y) {
     std::cout << "The largest of three is: " << z << std::endl;
 }
}

int main () {
    int x{ getThreeInt() };
    int y{ getThreeInt() };
    int z{ getThreeInt() };

    compareThreeInts(x,y,z);

    return 0;
}