#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std; 

int main()
{
  int test,num;
  cin>>test;
  int ans;
  int a1,b1;
  int tests=1;
  while(tests<=test){
    cin>>num;
    vector<pair<pair<int,int>,int>> array;
    for(int i=1;i<=num;i++){
      cin>>a1>>b1;
      array.push_back(make_pair(make_pair(a1,b1),i-1));
    }
    string result(num,'.');
    int jjj=0,ccc=0;
    sort(array.begin(),array.end());
    for(int i=0;i<num;i++){
      int start=array[i].first.first;
      int end=array[i].first.second;
      int idx=array[i].second;
      if(start>=ccc){
        ccc=end;
        result[idx]='C';
      }
      else if(start>=jjj){
        jjj=end;
        result[idx]='J';
      }
      else {
        result="IMPOSSIBLE";
        break;
      }
    }
    cout<<"Case #"<<tests<<": "<<result<<endl;
    tests++;
  }
  return 0;
}