//
// Created by coastal on 4/7/17.
//

#include <iostream>

int nameInOut()
{
    // ask for the name
    std::cout << "Please enter your first name: ";

    // get the name
    std::string name;
    std::cin >> name;

    // greet
    std::cout << "Hello, " + name + "!";
    return 0;
}