#include <iostream>
using namespace std;

namespace first
{
    int x = 10; // global variable in the first namespace
}
namespace second
{
    int x = 0;

}
int main()
{

    //using namespace first;
    using namespace second;

    // cout<<"i like pizza!"<<endl;
    /*
    This is
    a
    multyple
    commemt

    */
    // int  x =10, y=5;
    // int z = x+y;
    double gpa = 3.5;
    char grade = 'a';
    bool std = false;
    bool power = true;
    string name = "multyple";
    string day = "friday";
    const double PI = 3.1416;
    double radius = 10;
    double cirumference = 2 * PI * radius;

    // cout<< cirumference << "cm" << endl;
    // cout<<  "hello  "   <<name<<", how are you today?"<<endl;
     cout<< first::x<<endl;
    cout << x;

    return 0;
}