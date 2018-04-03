//https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/little-monk-and-good-string/
#include<iostream>
using namespace std;

bool isVowel(char c)
{
    if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
        return true;
    else
        return false;
}
int main()
{
    string str;
    int i, count = 0, j = 0;
    cin>>str;
    count = 0; j = 0;
    int large_count= 0;
    for(i = 0; i < str.length(); i++)
    {
        if(isVowel(str[i]) == true)
        {
            count++;
            if(count>large_count)
                large_count = count;
        }
        else
            count = 0;
    }
    cout<<large_count<<endl;
    return 0;
}
