#include<bits/stdc++.h>
using namespace std;

void calSubArray(int arr[], int N, int sum){
    //assign curr_sum the value of 0th element
    //start the loop from 1st element 
    int curr_sum=arr[0], start = 0, i;
    for(i=1;i<=N;i++){
        //if curr_sum exceeds value of sum remove the left
        //most element and increase the value of start
        while(curr_sum>sum && start < i-1){
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum==sum){
            //if sum is equal print the values
            cout<<start+1<<" "<<i<<endl;
            return;
        }
        if(i<N)
            //otherwise add value of elements to curr_sum
            curr_sum+=arr[i];
    }
    //if no case is found print -1
    cout<<"-1"<<endl;
    return;
}

int main(){
    int T,N,i,sum;
    cin>>T;
    while(T--){
        //Enter the numbers of input and sum to check for
        cin>>N>>sum;
        int arr[N];
        for(i=0;i<N;i++)
            //enter elements of array
            cin>>arr[i];
        calSubArray(arr,N,sum);
    }
    return 0;
}
