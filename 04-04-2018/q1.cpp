//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-rotation-3/description/
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int arr_size, i,j, rot;
    int temp = 0;
    while(T--!=0)
    {
        temp = 0;
        cin>>arr_size>>rot;
        int arr[arr_size];
        for(i = 0; i < arr_size; i++)
            cin>>arr[i];
        int arr1[arr_size];
        for(i = 0, j = 0; i < arr_size; i++, j++)
        {
            temp = i+ rot;
            if(temp > arr_size-1)
            {
                while(temp > arr_size-1)
                    temp = temp - arr_size;
                arr1[temp] = arr[i];
            }
            else
                arr1[temp] = arr[i];
        }
        for(i = 0; i < arr_size; i++)
            cout<<arr1[i]<<" ";
        cout<<endl;
    }
    return 0;
}
