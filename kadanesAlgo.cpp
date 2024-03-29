#include<iostream>
#include<limits.h>

using namespace std;

int main(){

    int n;
    cout<<"ENTER THE LENGTH OF THE ARRAY:";
    cin>>n;

    int a[n];

    cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int maxSum = INT_MIN;

    int currSum = 0;

    for(int i=0; i<n; i++){
        currSum += a[i];
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum = 0;
        }
    }

    cout<<"MAXIMUM SUM OF THE SUBARRAY:"<<maxSum;

    return 0;
}