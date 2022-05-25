#include<bits/stdc++.h>
using namespace std;
int subseq(int i, int a[], int n, int k, int s)
{
    if(i==n)
    {
        if(k==s)
        {
        return 1;
        }
        else
        return 0;
    }
    k+=a[i];
    int l=subseq(i+1,a,n,k,s);
    k-=a[i];
    int r=subseq(i+1,a,n,k,s);
    return l+r;
}
int main()
{
    int a[3]={3,1,2};
    int n=3; int s=3;
    cout<<subseq(0,a,n,0,s)<<endl;
    return 0;
}