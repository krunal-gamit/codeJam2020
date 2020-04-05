#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    
    int c=1;
    
    while(t--){
        string st;
        cin>>st;
        int rt1=0;
        int x1=st[0]-'0';
        int y1;
        string a1="";
        if(x1==0) a1+="0";
        else{rt1=x1;while(x1--){a1+="(";}a1+=st[0];}
        for(int i=1;i<st.length();i++)
        {
            x1=st[i]-'0';   y1=st[i-1]-'0';
           
            if(x1>y1)
            {
                int z=x1-y1;  rt1+=z;
                while(z--) {a1+="(";}
                a1+=st[i];
            }
            else if(x1<y1)
            {
                int z=y1-x1;  rt1=rt1-z;
                while(z--) {a1+=")";}
                a1+=st[i];
            }
            else a1+=st[i];
        }
        while(rt1--)
            a1+=")";
        cout<<"Case #"<<c++<<": "<<a1<<endl;

    }
}