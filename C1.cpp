#include<bits/stdc++.h>
using namespace std ;
int main()
{
    map<int,int> ch;
    bool e = 0;
    int n, a; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a;
        if(ch[a] > 0) e = 1;
        ch[a]++;
    }
    if(e) cout << "YES"; else cout << "NO" ;
}
