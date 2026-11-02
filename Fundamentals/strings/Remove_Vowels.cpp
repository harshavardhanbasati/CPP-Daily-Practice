#include<iostream>
#include<string>

using namespace std;

string remove_V(string str){
    string new_str = "";
    for(char ch: str)
    {
        if(ch != 'a'&& ch != 'e'&& ch != 'i' && ch != 'o'&& ch!= 'u'&& ch != 'A' && ch != 'E' && ch != 'I' && ch!='O'&& ch != 'U'){
            new_str += ch;
        }
    }
    return new_str;
}

int main()
{
    string str;
    cout<<"Enter string: "<<endl;
    getline(cin, str);
    cout<<"Vowels removed String: "<< remove_V(str)<<endl;
    return 0;
}