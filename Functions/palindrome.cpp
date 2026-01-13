#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int num = n;
    int rev=0;
    while(num>0){
        int digit = num%10;
        rev = (rev*10)+digit;
        num = num / 10;
    }
    if(rev==n){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(isPalindrome(num)){
        cout<<"Number is palindrome "<<endl;
    }else{
        cout<<"Number is not palindrome "<<endl;
    }
    return 0;
}