#include <bits/stdc++.h>
#define forinc(a,b,c) for(int a=b;a<=c;++a)

using namespace std;

int n;
int a[101],f[101];

main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    forinc(i,1,n)
    {
        cin >> a[i];
    }
    if(a[1]==0) f[1]=1;
    else f[1]=0;
    if(a[2]==0) f[2]=f[1]+1;
    else f[2]=f[1];
    if(a[3]==0) f[3]=f[2]+1;
    else f[3]==f[2];
    forinc(i,4,n)
    {
        if(a[i]==0) f[i]=f[i-1]+1;
        else if(f[i]=f[i-1]-1) f[i]=f[i-1]+1;

    }
    cout << f[n];
}
