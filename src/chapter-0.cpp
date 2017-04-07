// intro to c++
#include <iostream>

// example function
int hello()
{
    std::cout << "Hello, world!" << std::endl;
    return 0;
}

// exercise 0-2
int func0()
{
    std::cout << "This (\") is a quote, and this (\\) is a backslash." << std::endl;
    return 0;
}

// exercise 0-3
int tabTests()
{
    std::cout << "This is a single tab: \ttab\nThis is a double tab: \t\ttabtab" << std::endl;
    return 0;
}

// exercise test for me
int testConcatenate()
{
    std::string s = "This is a test string";
    std::string s2 = ", and here is another";
    std::string concat = s + s2 + ", and a final!";

    std::cout << concat << std::endl;
    return 0;
}

int testsForZero()
{
    hello();
    func0();
    tabTests();
    testConcatenate();

    return 0;
}