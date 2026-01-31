//reversedStrings.cpp
// Created by GP on 1/31/2026.

#include<iostream>
#include<string>

void typeHere() {
    std::string input;
    std::cout<<"Type here -->";
    std::getline(std::cin, input);

    for (int i= input.length() - 1; i >= 0; i--) {
        std::cout<<input[i];
    }
    std::cout<<std::endl;
}
int main() {

    typeHere();

    return 0;

}