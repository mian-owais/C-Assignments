#include <iostream>
using namespace std;

int main() {
    int mid_Marks;
    int final_Marks;
    int quiz_Marks;
    int assignment_Marks;
    double obtained_marks;
    double percentage;
    string grade;

    cout << "Enter your quiz marks: ";
    cin >> quiz_Marks;
    cout << "Enter your assignment marks: ";
    cin >> assignment_Marks;
    cout << "Enter your mids marks: ";
    cin >> mid_Marks;
    cout << "Enter your final marks: ";
    cin >> final_Marks;

    if (quiz_Marks > 20 || assignment_Marks > 10 || mid_Marks > 30 || final_Marks > 40) {
        cout << "Enter the correct marks";
    } else {
        obtained_marks = quiz_Marks + assignment_Marks + mid_Marks + final_Marks;
        percentage = (obtained_marks / 100.0)* 100;

        if (percentage >= 90) {
    grade = "A Grade";
} else if (percentage >= 80) {
    grade = "B Grade";
} else if (percentage >= 70) {
    grade = "C Grade";
} else if (percentage >= 60) {
    grade = "D Grade";
} else {
    grade = "Fail";
}

        cout << "Your Obtained Marks are: " << obtained_marks << endl;
        cout << "Your percentage is: " << percentage  << "%" << endl;
        cout << "Your grade is: " << grade << endl;
    }

    return 0;
}
