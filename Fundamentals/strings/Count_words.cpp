#include<iostream>
#include<string>

using namespace std;

int words(string str)
{
    int words = 0;
    bool inword = false;
    for(char ch: str){
        if(ch != ' '&& !inword){
            words++;
            inword = true;
        }
        else if(ch == ' ')
        {
            inword = false;
        }
    }
    return words;
}

int main() 
{
    string str;
    cout<<"Enter the word: "<<endl;
    getline(cin, str);
    cout<<"Number of words in the string: "<<words(str);
    return 0;
}