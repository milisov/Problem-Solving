#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    //cout<<a[0][1]<<endl;
    long long int pc=0;
    long long int nc=0;
    long long int ver=0;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                pc=pc+a[i][j];
            }else
            {
                nc=nc+a[i][j];
            }
        }
        ver=ver+max(nc,pc);
        nc=0;
        pc=0;
    }
    long long int pr=0;
    long long int nr=0;
    long long int hor=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                pr=pr+a[i][j];
                //cout<<pr<<" "<<a[i][j]<<endl;
            }else
            {
                nr=nr+a[i][j];
            }
        }
        hor=hor+max(nr,pr);
        nr=0;
        pr=0;
    }
    //cout<<hor<<endl;
    cout<<max(hor,ver)<<endl;
}
