#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
     string name;
     int age;
     Student(){
        cout<<"Student Managememt System"<<endl;
     }
     Student(string n, int a){
        name = n;
        age = a;
     }

     void display()
     {
        cout<<name<<" "<<age<<endl;
     }

};

int main()
{
    Student s;
    Student s1("Harsha", 22);
    s1.display();
    return 0;
}