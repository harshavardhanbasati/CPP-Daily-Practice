#include<iostream>
#include<string>

using namespace std;

string new_string(string str){
     // string new_str = "";
    for(int i =0; i < str.length(); i++)
    {
        if(str[i] == ' '){
            str[i] = '-';
        }
    }
    return str;
}

int main()
{
    string str;
    cout<<"Enter the string: "<<endl;
    getline(cin, str);
    cout<<"Spaces replaced with hyphens: "<<new_string(str)<<endl;
    return 0;
}