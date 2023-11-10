#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        int width;
        int height;
        cout << "Enter the width: ";
        cin >> width;
        cout << "Enter the height: ";
        cin >> height;

        for (int i = 1; i <= height; i++) {  // Swap width and height in the loop
            for (int j = 1; j <= width; j++) {  // Swap width and height in the loop
                if (i == 1 || i == height || j == 1 || j == width) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }

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
