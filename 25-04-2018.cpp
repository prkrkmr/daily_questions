#include<iostream>
#include<stdio.h>
using namespace std;

int check(char i){
    if(i == 'A' or i == 'a' or i == 'E' or i == 'e' or i == 'O' or i == 'o' or i == 'i' or i == 'I' or i == 'u' or i == 'U')
        return 1;
    else
        return 0;
}
int main(){
    int t;
    cin>>t;
    int count ;
    while(t--){
        string str;
        count = 0;
        cin>>str;
        for(int i = 0; str[i] != '\0'; i++){
            if(check(str[i]) == 1)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
