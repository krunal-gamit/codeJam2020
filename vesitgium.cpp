#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define int long long

using namespace std;

signed main()
{
    int vax; 
    
    cin>>vax;
    
    int vay=1;
    
    while(vax--)
    {
        int num;
        
        cin>>num;
        
        int arr[num][num];
        
        set <int>vag;
        
        int vap=0,vac=0,vasum=0;
        
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num;j++)
            {
                cin>>arr[i][j];
                vag.insert(arr[i][j]);
            }
            
            if(vag.size()!=num)
            {
                vap++;

            }
            vag.clear();
        }
       

       for(int i=0;i<num;i++)
        {
            vasum+=arr[i][i];
            for(int j=0;j<num;j++)
            {
                vag.insert(arr[j][i]);
            }
            if(vag.size()!=num)
            {
                vac++;
            }
            vag.clear();

        }
      

      cout<<"Case #"<<vay++<<":"<<" "<<vasum<<" "<<vap<<" "<<vac<<endl;
        //cout<<"\n";
    }
}