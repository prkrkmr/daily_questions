#include<iostream>
using namespace std;

//Addition of two arrays
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/
int main()
{
    int num;
    cin>>num;
    int i;
    int a[num], b[num], c[num];
    for(i = 0; i < num; i++)
        cin>>a[i];
    for(i = 0; i < num; i++)
        cin>>b[i];
    for(i = 0; i < num; i++)
        cout<<a[i]+b[i]<<' ';
    cout<<endl;
}
