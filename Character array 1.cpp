//Store list of strings in an array: 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[100][100];
    // eat the extra enter you hit after giving size of array:
    cin.get();
    for(int i=0;i<n;i++){
    // Taking input char elements 
        cin.getline(arr[i],1000);
    }
    for(int i=0;i<n;i++){
    // Printing them out
        cout<<arr[i]<<" ";
    }
return 0;
}
