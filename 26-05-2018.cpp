#include<iostream>
using namespace std;

int main(){
    int T;
    int N, C;
    cin>>T;
    int flag = 1;
    int sum;
    while(T--){
        sum = 0;
        cin>>N>>C;
        int candy;
        for(int i = 0; i < N; i++){
            cin>>candy;
            sum = sum + candy;
        }
        if(sum<=C)
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
    return 0;
}
