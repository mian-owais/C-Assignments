#include <iostream>
using namespace std;
int main()
{
    string name;
    double roll_no;
    string user_name;
    string password;
    string login_entry,password_entry;
    cout<<"Registration Process"<<endl;
    cout << "Enter name: ";
    cin>>name;
    cout << "Create roll number: ";
    cin>>roll_no;
    cout << "Create user name: ";
    cin>>user_name;
    cout << "Create password: ";
    cin>>password;
    cout << "Login Process"<<endl;
    cout << "Enter your user name: ";
    cin>>login_entry;
    cout << "Enter password: ";
    cin>>password_entry;
    if (login_entry==user_name && password_entry==password){
        cout << "Welcome! Login Successful";
    }else{
      cout << "Login Failed! Try Again";
    }
}