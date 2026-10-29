#include<iostream>
#include<string>
using namespace std;
int main() {
    string name;
    int age;
    string city;
    string study;
    string gender;
    bool employed;
    float height;
    double salary;
    char grade;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout <<"Enter your age: "<<endl;
    cin>>age;
    cout<< "Enter your height: "<<endl;
    cin>>height;
    cout<<"Enter yor passed grade: "<<endl;
    cin>>grade;
    cout<<"Enter your city: "<<endl;
    cin>>city;
    cout<<"Enter your highest qualification: "<<endl;
    cin>>study;
    cout<<"Enter your gender: "<<endl;
    cin>>gender;
    cout<<"Employeed?: "<<endl;
    cin>>employed;
    cout<<"Enter your Expected ctc in rupees: "<<endl;
    cin>>salary;
    cout<<"--------------------------Student-Details-----------------------------"<<endl;
    cout<<"Name: "<<name
        <<"| Age: "<<age
        <<"| Gender: "<<gender
        <<"| Height: "<<height
        <<"| Study: "<<study
        <<"| Score: "<<grade
        <<"| Employeed: "<<employed
        <<"| Expected Salary: "<<salary;
    
    return 0;
}