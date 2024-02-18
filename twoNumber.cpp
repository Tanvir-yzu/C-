#include <iostream> // Include for input and output operations
#include <cmath> // Include for mathematical functions like floor, ceil, and round
using namespace std; // Use the standard namespace

int main() {
    double A, B; // Declare two double precision floating-point variables
    cin >> A >> B; // Read two numbers from the user input and store them in A and B

    // Calculate the floor, ceil, and round values of A divided by B
    double result_floor = floor(A / B); // The largest integer less than or equal to A/B
    double result_ceil = ceil(A / B); // The smallest integer greater than or equal to A/B
    double result_round = round(A / B); // The nearest integer to A/B

    // Output the results of floor, ceil, and round operations
    cout << "floor " << A << " / " << B << " = " << result_floor << endl; // Print floor result
    cout << "ceil " << A << " / " << B << " = " << result_ceil << endl; // Print ceil result
    cout << "round " << A << " / " << B << " = " << result_round <<endl; // Print round result

    return 0; // Return 0 to indicate the program executed successfully
}