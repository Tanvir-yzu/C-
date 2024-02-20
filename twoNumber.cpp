#include <iostream> // Include the I/O stream library for input and output
#include <cmath>    // Include cmath library for mathematical functions like floor, ceil, and round
using namespace std; // Use the standard namespace to avoid prefixing std:: to every standard library object

int main() {
    double A, B; // Declare two double precision floating-point variables A and B
    cout << "Testing :";
    cin >> A >> B; // Read two numbers from the user and store them in A and B

    // Calculate and store the floor division result of A/B (largest integer not greater than A/B)
    double result_floor = floor(A / B);
    // Calculate and store the ceiling division result of A/B (smallest integer not less than A/B)
    double result_ceil = ceil(A / B);
    // Calculate and store the rounded division result of A/B (nearest integer to A/B)
    double result_round = round(A / B);

    // Output the floor division result to the console
    cout << "floor " << A << " / " << B << " = " << result_floor << endl;
    // Output the ceiling division result to the console
    cout << "ceil " << A << " / " << B << " = " << result_ceil << endl;
    // Output the rounded division result to the console
    cout << "round " << A << " / " << B << " = " << result_round << endl;

    return 0; // Return 0 to indicate successful completion of the program10
}