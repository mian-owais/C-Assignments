#include <iostream>
using namespace std;

int main(){
    int birth_year=2004;
    float weight=61;
    bool middle_name=false;
    int age=2023-birth_year;
    float height_in_meters = 168.0 / 100.0;
    float bmi=(weight)/(height_in_meters * height_in_meters);
    cout <<"My birth year is: "<< birth_year<<endl;
    cout <<"My weight is: "<< weight<<endl;
    cout <<"Middle name: "<<( middle_name ? "true":"false" )<<endl;
    cout <<"My Age is: "<<age<<endl;
    cout <<"My BMI is: "<<bmi<<endl;
    return 0;
}