#include<iostream>
using namespace std;

int trapWater(int *height, int n){
    int leftMax[20000], rightMax[20000];
    leftMax[0] = height[0];
    rightMax[n-1] = height[n-1];
    for(int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1],height[i-1]);
    }
    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1],height[i+1]);
    }

    int waterTrapped = 0;
    for(int i=0; i<n; i++){
        int currTrapped = min(leftMax[i],rightMax[i])-height[i];
        if(currTrapped>0){
            waterTrapped+=currTrapped;
        }
    }
    return waterTrapped;
}

int main(){
    int heights[]={4,2,0,3,2,5};
    int n = sizeof(heights) / sizeof(int);
    cout<<trapWater(heights,n);
}