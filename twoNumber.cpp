#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    double result_floor = floor(A / B);
    double result_ceil = ceil(A / B);
    double result_round = round(A / B);

    cout << "floor " << A << " / " << B << " = " << result_floor << endl;
    cout << "ceil " << A << " / " << B << " = " << result_ceil << endl;
    cout << "round " << A << " / " << B << " = " << result_round <<endl;

    return 0;
}
