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
    std::cout << "Hello, " + name + "!" << std::endl;
    return 0;
}

// frames a user's name in * characters as a greeting
int framedName()
{
    // get the user's name
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    // make the greeting
    const std::string greeting = "Hello, " + name + "!";

    // make the bordering lines
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";
    const std::string first(second.size(), '*');

    // print to output
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}

// exercise 1-3
int validProgram()
{
    {   const std::string s = "a string";
        std::cout << s << std::endl;

    {   const std::string s = "another string";
        std::cout << s << std::endl; };}

    return 0;
}

int fixedInvalidProgram()
{
    {
        std::string s = "a string";
        {
            std::string x = ", really";
            std::cout << s << std::endl;
            std::cout << x << std::endl;
        }
    }
}

int testsForOne()
{
    nameInOut();
    framedName();
    validProgram();
    fixedInvalidProgram();

    return 0;
}
