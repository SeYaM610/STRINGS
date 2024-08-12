#include<bits/stdc++.h>
using namespace std;


int findSubstring(string S1, string S2) {
// Use the find() function to search for S1 in S2
       //size_t found = S2.find(S1);
       int found=S2.find(S1);
// If found, return the index; otherwise, return -1
       return (found != string::npos) ? found : -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int op=0,result=findSubstring(s,x);
       // cout<<result<<endl;
        while(result==-1 && op<=5)
        {
            string r=x;
            r=r+x;
            x=r;
            n*=2;
           result=findSubstring(s,x);
            op++;
        }
       if(op<6) cout<<op<<endl;
       else cout<<-1<<endl;
    }
}
