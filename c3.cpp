#include<bits/stdc++.h>
using namespace std ;
int main()
{
    //do min` ;
    int n, m;
    cin >> n >> m;
    char a[n+2][m+2];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            int cnt = 0;
            if(a[i][j] == '.')
            {
            if(a[i-1][j] == '*') cnt++;
            if(a[i-1][j-1] == '*') cnt++;
            if(a[i-1][j+1] == '*') cnt++;
            if(a[i][j-1] == '*') cnt++;
            if(a[i][j+1] == '*') cnt++;
            if(a[i+1][j+1] == '*') cnt++;
            if(a[i+1][j] == '*') cnt++;
            if(a[i+1][j-1] == '*') cnt++;
            cout<< cnt <<' ';
            }
            else cout<<"*"<<' ';
        }
        cout<<endl;
    }
}
