#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter word ";
    getline(cin,s);
    string rev= "";
    int n= s.length();
    for(int i=n-1;i>=0;i--){
        rev += s[i];
    }
    if(s==rev){
        cout<<"The word is palindrome ";
    }
    else {cout<<"The word is not a palindrome ";}
    return 0;
}