// Inverted Star Pattern
// ****
// ***
// **
// *

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    // First method n-i+1
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i+1); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Second method start outer loop in reverse
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}