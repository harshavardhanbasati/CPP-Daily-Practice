#include<iostream>
#include<string>

using namespace std;

int string_length(string str)
{
    int length = str.length();
    return length;
}

int main()
{
    string name;
    cout<<"Enter your name"<<endl;
    getline(cin, name);
    cout<<"The length of "<<name<<" is "<<string_length(name)<<endl;
    return 0;
}