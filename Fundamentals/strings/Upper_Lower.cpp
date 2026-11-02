#include<iostream>
#include<string>

using namespace std;

void Upper_Lower_count(string str){ 
   int lower =0, upper = 0;
   for(char ch: str){
    if(ch >='a'&& ch<='z'){
        lower++;
    }
    else if(ch >= 'A'&& ch <= 'Z'){
        upper++;
    }
   }
     cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;

}

int main()
{
    string str;
    cout<<"Enter the String: "<<endl;
    getline(cin, str);
    Upper_Lower_count(str);
    return 0;
}