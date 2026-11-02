 #include<iostream>
 #include<string>
using namespace std;
 class Student{
 public:
    string name;
    int age;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
 };

 int main()
 {
    Student s1;
    s1.name = "Harsha";
    s1.age = 22;
    s1.display();
    return 0;
 }