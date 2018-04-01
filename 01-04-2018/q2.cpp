#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    string str;
    int flag = 0, i = 0;
    while(num--!=0)
    {
        cin>>str;
        int len = str.length();
        for(i = 0; i < (len/2)+1; i++)
        {
            if(str[i] == str[len-i-1])
                flag++;
        }
        if(flag >= len/2 and len % 2 == 0)
            cout<<"YES EVEN"<<endl;
        else if(flag >= len/2 and len % 2 == 1)
            cout<<"YES ODD"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
