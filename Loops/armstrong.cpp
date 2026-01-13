// WAPtoinputanumberandcheckwhetherthenumberisanArmstrongnumberornot.

#include<iostream>
using namespace std;

int main(){
    int num;
    int arm = 0;
    cout << "Enter a number : ";
    cin >> num;
    int temp = num;
    while(temp > 0){
        int digit = temp % 10;
        arm = arm + (digit * digit * digit);
        temp = temp / 10;
    }
    if(num == arm){
        cout << "Number is armstrong";
    }else{
        cout << "Number is not armstrong";;
    }
}