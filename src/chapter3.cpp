//
// Created by coastal on 4/11/17.
//

#include <iomanip>
#include <ios>
#include <algorithm>
#include <iostream>
#include <vector>

using std::cin;         using std::setprecision;
using std::cout;        using std::string;
using std::endl;        using std::streamsize;

// computing student's grades
int computeFinalGrades()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    // get the midterm and final grades
    // variables fill from left to right
    // i.e.
    //      input = 10 20
    //      midterm = 10, final = 20
    // extras are discarded
    // i.e.
    //      input = 10 20 30
    //      midterm = 10, final = 20
    cout << "Please enter your midterm and final grades: ";
    double midterm, final;
    cin >> midterm >> final;

    // get the homework grades
    // string literals separated by only whitespace are automatically concatenated
    cout << "Please enter all of your homework grades, "
            "followed by end-of-file: ";

    int count = 0;
    double sum = 0;     // int assignment is translated to a double 0.0 on compilation
    double x;

    // while we can (successfully) read a word from input
    // increment count
    // add next grade to sum
    // invariant: count is 0

    while (cin >> x) {                                          // super cool, input stream data as a condition
        ++count;                                                // important: type must match assigned variable
        sum +=x;                                                //      otherwise, condition will fail
    }

    // write the result
    // first we save the significant digit precision from the stream
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)           // next we set the significant digit precision to 3
         << 0.2 * midterm + 0.4 * final + 0.4 * sum / count     // calculate the grade total for the student
         << setprecision(prec) << endl;                         // then we reset the precision to its initial value

    return 0;
}

// rewritten with vectors
int computeWithMedianHomeworkGrade()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    cout << "Please enter your midterm and final grades: ";
    double midterm, final;
    cin >> midterm >> final;

    cout << "Please enter all of your homework grades, "
            "followed by end-of-file: ";

    // Let's use a vector to hold our homework grades
    double x;
    std::vector<double> homework;

    while (cin >> x) {
        homework.push_back(x);
    }

    // We calculate the size of the homework vector, setting the type of the variable
    //      as a safe unsigned integer that can contain the full length of a
    //      vector object.
    // ??????????????????????????????????????????????????????????????????????????????????
    // question:
    //      why do I have to #include "vector" and call std::vector for the variable
    //      typedef if vector is in the std namespace?
    //
    //      using std::vector without the #include "vector" throws a bunch of errors
    // ??????????????????????????????????????????????????????????????????????????????????

    // here we create a reusable type called 'vec_sz' that can be used for holding the
    //      size of vectors for the rest of the scope
    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = homework.size();

    if (size == 0) {
        cout << endl <<"You must enter your homework grades. "
             << "Please try again" << endl;

        return 1;
    } else {
        // sort the homework values
        sort(homework.begin(), homework.end());
        vec_sz mid = size / 2;
        double median;
        // ooh baby conditional operators
        median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2
                                : homework[mid];

        // print the output
        streamsize prec = cout.precision();
        cout << "Your final grade is " << setprecision(3)
             << 0.2 * midterm + 0.4 * final + 0.4 * median
             << setprecision(prec) << endl;
    }
    return 0;
}

int exerciseThreePointTwo()
{
    cout << "Please enter a set of space separated integers: ";
    int x;
    std::vector<int> int_vec;

    while (cin >> x)
    {
        int_vec.push_back(x);
    }

    typedef std::vector<int>::size_type vec_size;
    vec_size v_size = int_vec.size();

    if (v_size == 0) {
        cout << "You need to enter some integers" << endl;

        return 1;
    } else {
        // warnings...should we type to something else?
        vec_size first_bound = v_size * 0.25;
        vec_size second_bound = v_size * 0.5;
        vec_size third_bound = v_size * 0.75;

        std::vector<vec_size> bounds;
        bounds.push_back(0);
        bounds.push_back(first_bound);
        bounds.push_back(second_bound);
        bounds.push_back(third_bound);
        bounds.push_back(v_size);
        vec_size bounds_size = bounds.size();

        for (int x = 1; x < bounds_size; ++x) {
            std::vector<int>::const_iterator first = int_vec.begin() + bounds[x-1];
            std::vector<int>::const_iterator last = int_vec.begin() + bounds[x];
            std::vector<int> current_quart(first, last);
            vec_size current_size = current_quart.size();

            cout << "Quartile " << x << " Elements:" << endl;
            for (int x = 0; x < current_size; ++x) {
                cout << "\t" << current_quart[x] << endl;
            }
        }
    }
    return 0;
}

int exerciseThreePointThree()
{
    string x = "test";
    string y = "test2";
    string z = "test";

    cout << x << " == " << y << "\t: " << (x == y) << endl;
    cout << x << " == " << z << "\t: " << (x == z) << endl;

    return 0;
}

int exerciseThreePointFour()
{
    string test = "This is a test string";
    cout << "Len (" << test.length() << "): " << test << endl;

    return 0;
}

int testsForThree()
{
    //computeFinalGrades();
    //computeWithMedianHomeworkGrade();
    //exerciseThreePointTwo();
    //exerciseThreePointThree();
    //exerciseThreePointFour();

    return 0;
}