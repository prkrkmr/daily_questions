//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/monk-and-inversions-arrays-strings/
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int size;
    int i, j;
    int p,q;
    int flag;
    while(T--!=0)
    {
        cin>>size;
        int mat[size][size];
        flag  = 0;
        for(i = 0; i < size; i++)
        {
            for(j = 0; j < size; j++)
            {
                cin>>mat[i][j];
            }
        }
        for(i = 0; i < size; i++)
        {
            for(j = 0; j < size; j++)
            {
                for(p = 0; p < size; p++)
                {
                    for(q = 0; q < size; q++)
                    {
                        if(mat[i][j] > mat[p][q] and i<=p and j <=q)
                        {
                            flag++;
                        }

                    }
                }
            }
        }
    cout<<flag<<endl;
    }
    return 0;
}
