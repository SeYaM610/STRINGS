#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    //cout<<s.size()<<endl;
    string r;
    int j=0;
    for(int i=0;i<=s.size();i++){
        if(s[i]!=' ' && s[i]!='\0') {
//Resizing the string first
                r.resize(j+1);
                r[j]=s[i];
                j++;

// Or push_back the char
              //r.push_back(s[i]);

        }
        else {
                //r[j]='\0';   -> "dont need to do this"

            for(int k=0;k<r.size();k++) r[k]=r[k]-32;

            cout<<r<<endl;
            r.clear();

            j=0; // -> if we dont use push_back
        }
    }
}

///OR, another easy & efficient way -

int main()
{
    while(1){
            string s;
        cin>>s;
        if(s.size()==0) break;
        int i=0;
        while(i<s.size()){
            s[i]=toupper(s[i]);
            i++;
        }
        cout<<s<<endl;
    }
}
