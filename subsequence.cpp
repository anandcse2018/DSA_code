#include<bits/stdc++.h>
using namespace std;
void subseq(int i, vector<int>&v, int a[], int n)
{
    if(i==n)
    {
        for(auto x:v)
            cout<<x<<" ";
    
        if(v.size()==0)
            cout<<"{}";
        cout<<endl;
        return;
    }
    v.push_back(a[i]);
    subseq(i+1,v,a,n);
    v.pop_back();
    subseq(i+1,v,a,n);
}
int main()
{
    int a[3]={3,1,2};
    int n=3;
    vector<int>v;
    subseq(0,v,a,n);
    return 0;
}