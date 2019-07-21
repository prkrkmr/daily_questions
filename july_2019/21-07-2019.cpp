#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n, int d){
    int i, temp;
    for(int j=0; j < d; j++){
        temp=arr[0];
        for(i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    int d;
    cout<<"Enter d\n";
    cin>>d;
    int i;
    int arr[n];
    for(i=0; i < n; i++)
        cin>>arr[i];
    rotate(arr,n,d);
    return 0;

}

