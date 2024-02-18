#include <iostream>
using namespace std;

// Define two namespaces: first and second
namespace first
{
    int x = 10; // Global variable 'x' in the first namespace
}
namespace second
{
    int x = 0; // Global variable 'x' in the second namespace
}

int main()
{
    // Uncommenting the following line would use everything from the 'first' namespace
    //using namespace first;
    // Instead, we're using the 'second' namespace
    using namespace second;

    // Example of a single-line comment
    // cout<<"i like pizza!"<<endl;

    // Example of a multi-line comment
    /*
    This is
    a
    multiple
    comment
    */

    // Declaration and initialization of local variables
    double gpa = 3.5;
    char grade = 'a';
    bool std = false; // Example boolean variable
    bool power = true; // Another example boolean variable
    string name = "multiple"; // String variable
    string day = "friday"; // Another string variable
    const double PI = 3.1416; // Constant variable for PI
    double radius = 10; // Radius for a circle
    double circumference = 2 * PI * radius; // Calculate the circumference

    // Example of printing the circumference (commented out)
    // cout<< circumference << "cm" << endl;

    // Example of printing a greeting message (commented out)
    // cout<<  "hello  "   <<name<<", how are you today?"<<endl;

    // Print the 'x' variable from the 'first' namespace
    cout<< first::x<<endl;
    // Print the 'x' variable from the currently used namespace ('second')
    cout << x;

    return 0;
}