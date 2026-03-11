#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter word ";
    getline(cin,s);
    int ct =0;
    int n= s.length();
    char ch;
    vector<char>st(n);
    for(int i=0;i<=n-1;i++){
         ch= s[i];
        if( ch =='a' || ch=='e' || ch=='i' || ch=='o' || ch== 'u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
           st[ct]=s[i];
            ct++;
           }
    }
    cout<<"Number of vowels "<<ct<<endl;
    cout<<"The vowels are ";
    for(int i=0;i<n;i++){
        cout<<st[i]<<" ";
    }
}