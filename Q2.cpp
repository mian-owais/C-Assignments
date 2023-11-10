#include <iostream>
using namespace std;

int main() {
    char choice;
    int sum=0;
    do {
        int n;
        cout << "Enter the number: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            sum +=i;
        }
        cout <<"The sum from 1 to n is : "<< sum << endl;

        do {
            cout << "Do you want to generate another pattern? (Y/N): ";
            cin >> choice;
            if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
                cout << "Please enter 'Y' or 'N'." << endl;
            }
        } while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');
    } while (choice == 'Y' || choice == 'y');
    return 0;
}
