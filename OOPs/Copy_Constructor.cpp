#include<iostream>
#include<string>

using namespace std;

class Student{
    public:
      string name;
      int age;
      Student(string n, int a){
        name = n;
        age = a;
      }
      Student(const Student& other){
        name = other.name;
        age = other.age;
        cout<<"Copy constructor Called"<<endl;
      }
      void display()
      {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
      }

};

int main()
{
    Student s1("Harsha", 22);
    Student s2 = s1;
    s2.display();
    return 0;
}