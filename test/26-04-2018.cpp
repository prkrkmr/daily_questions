#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, i;
    cin>>N;
    int arr[N];
    for(i = 0; i < N; i++){
        cin>>arr[i];
    }
    int T;
    cin>>T;
    int Q, x;
    while(T--){
        cin>>Q>>x;
        int count = 0;
        if(Q == 1){
            sort(arr,arr+N, greater<int>());
            for(i = 0; i < N; i++){
                if(arr[i] > x)
                    count++;
                else
                    break;
            }
        }
        else{
            sort(arr,arr+N, greater<int>());
            for(i = 0; i < N; i++){
                if(arr[i] >= x)
                    count++;
                else
                    break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
