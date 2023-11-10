#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;
    int max_num, min_num;

    cout << "Enter four different numbers: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;

    // Initialize max_num and min_num with the first number (num1)
    max_num = num1;
    min_num = num1;

    // Check for the maximum number
    if (num2 > max_num) {
        max_num = num2;
    }
    if (num3 > max_num) {
        max_num = num3;
    }
    if (num4 > max_num) {
        max_num = num4;
    }

    // Check for the minimum number
    if (num2 < min_num) {
        min_num = num2;
    }
    if (num3 < min_num) {
        min_num = num3;
    }
    if (num4 < min_num) {
        min_num = num4;
    }

    cout << "The maximum number among four numbers is: " << max_num << endl;
    cout << "The minimum number among four numbers is: " << min_num << endl;

    return 0;
}
