#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter number of elements ";
    cin>>n;
int arr[n];
cout<<"Enter elements";
for(int i=0;i<=n-1;i++){
    cin>>arr[i];
}
cout<<"Reversed array is ";
for(int j=n-1;j>=0;j--){
    cout<<arr[j];
}
return 0;
}