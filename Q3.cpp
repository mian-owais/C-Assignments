#include <iostream>
using namespace std;
int main(){
    char choice;
    do{
    int num;
     cout << "Enter the integer from 1 to 10: ";
     cin>>num;
     if(num>10 || num <1){
        cout << "Your number is invalid, Please enter a valid number";
        continue;
     }

     for(int i = 1; i <= num; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << i;
        }
        cout << "\n";
    }
    do {
            cout << "Do you want to generate another pattern? (Y/N): ";
            cin >> choice;
            if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
                cout << "Please enter 'Y' or 'N'."<<endl;
            }
        } while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');
    }
    while(choice=='Y' || choice=='y');
}