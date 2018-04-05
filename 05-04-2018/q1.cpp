//https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/monk-and-modulo-based-sorting/
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int arr_size, mod;
    int i, j, temp;
    while(T--)
    {
        cin>>arr_size>>mod;
        int arr[arr_size];
        for(i = 0; i < arr_size; i++)
            cin>>arr[i];
        for (i = 1; i < arr_size; ++i)
        {
            j = i;
            while (j > 0 && arr[j]%mod < arr[j-1]%mod) 
            {
                swap(arr[j], arr[j-1]);
                j--;
            }
        }
        for(i = 0; i < arr_size; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}

