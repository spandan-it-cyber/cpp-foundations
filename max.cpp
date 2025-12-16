#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter number of elements ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int mv= arr[0];
    for(int j=1;j<=n-1;j++){
        if(arr[j]>mv) {mv=arr[j];}
    }
    cout<<"Maximum element is "<<mv;
    return 0;
}