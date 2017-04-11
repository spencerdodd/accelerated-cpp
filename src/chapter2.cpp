//
// Created by coastal on 4/7/17.
//
#include <iostream>

// rewritten greeting
int reWrittenGreeting()
{
    // ask for a name
    std::cout << "Please enter your first name: ";

    // read the name
    std::string name;
    std::cin >> name;

    // build the message we respond with
    const std::string greeting = "Hello, " + name + "!";

    // =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
    // now our new code
    // =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    // number of blanks surrounding the greeting
    const int pad = 1;

    // total number of rows to write
    const int rows = pad * 2 + 3;

    // separate output from input
    std::cout << std::endl;

    // track rows written so far
    int r = 0;

    // invariant: we have written r rows so far
    while (r != rows) {
        // write a row of output
        // make sure that our cols variable (characters in a column) is of a type
        // that won't overflow
        const std::string::size_type cols = greeting.size() + pad * 2 + 2;

        std::string::size_type c = 0;

        while (c != cols) {
            // write a line
            if (r == 0 || r == rows - 1 || c == 0 or c == cols - 1) {
                // write a border character
                std::cout << "*";
            } else {
                // write a non-border character
                if (r == pad + 1 && c == pad + 1) {
                    std::cout << greeting;
                    c += greeting.size() - 1;
                } else {
                    std::cout << " ";
                }
            }
            // increment c
            ++c;
        }
        std::cout << std::endl;
        ++r;                            // could have written r = r + 1;
    }

    return 0;
}


// declare standard library usages
using std::cin;         using std::endl;
using std::cout;        using std::string;

int reReWrittenGreeting()
{
    // ask for a name
    cout << "Please enter your first name: ";

    // read the name
    string name;
    cin >> name;

    // build the message we respond with
    const string greeting = "Hello, " + name + "!";

    // =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
    // now our new code
    // =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    // number of blanks surrounding the greeting
    const int pad = 1;

    // total number of rows to write
    const int rows = pad * 2 + 3;

    // total number of columns to write
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    // separate output from input
    cout << endl;

    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;

        while (c != cols) {

            // collapsed test structure
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {

                // on the border
                if (    r == 0 || r == rows - 1 ||
                        c == 0 || c == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }

                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}

int exerciseTwoPointTwo()
{
    // ask for a name
    cout << "Please enter your first name: ";

    // read the name
    string name;
    cin >> name;

    // build the message we respond with
    const string greeting = "Hello, " + name + "!";

    // =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
    // now our new code
    // =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    // number of blanks surrounding the greeting
    const int horizontalPad = 3;
    const int verticalPad = 1;

    // total number of rows to write
    const int rows = verticalPad * 2 + 3;

    // total number of columns to write
    const string::size_type cols = greeting.size() + horizontalPad * 2 + 2;

    // separate output from input
    cout << endl;

    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;

        while (c != cols) {

            // collapsed test structure
            if (r == verticalPad + 1 && c == horizontalPad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {

                // on the border
                if (    r == 0 || r == rows - 1 ||
                        c == 0 || c == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }

                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}

int exerciseTwoPointThree()
{
    // ask for a name
    std::cout << "Please enter your first name: ";

    // read the name
    string name;
    cin >> name;

    // build the message we respond with
    const string greeting = "Hello, " + name + "!";

    // get the padding size
    cout << "Enter the padding size: ";
    int pad;
    cin >> pad;

    // total number of rows to write
    const int rows = pad * 2 + 3;

    // total number of columns to write
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    // separate output from input
    cout << endl;

    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;

        while (c != cols) {

            // collapsed test structure
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else {

                // on the border
                if (    r == 0 || r == rows - 1 ||
                        c == 0 || c == cols - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }

                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}

int testsForTwo()
{
    reWrittenGreeting();
    reReWrittenGreeting();
    exerciseTwoPointTwo();
    exerciseTwoPointThree();

    // rest omitted because there are too many exercises

    return 0;
}