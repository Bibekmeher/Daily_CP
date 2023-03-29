#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v,v1,v2;
    int size;
    cout<<"enter the size:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
       int s;
       cout<<"enter:"<<endl;
       cin>>s;
       v.push_back(s);
    }
    for(auto &it1 : v){
    cout<<it1<<" ";
   }
     int k;
     cout<<"enter the value of k:"<<endl;
     cin>>k;
     for(int i=0;i<k;i++){
       v1.push_back(v[i]);
     }
for(auto &it1 : v1){
    cout<<it1<<" ";
   }
   cout<<endl;
     reverse(v1.begin(),v1.end());\
     for(auto &it1 : v1){
    cout<<it1<<" ";
   }
   cout<<endl;
   for(int i=k;i<size;i++){
        v2.push_back(v[i]);
     }
     for(auto &it1 : v2){
    cout<<it1<<" ";
   }
   cout<<endl;
      reverse(v2.begin(),v2.end());
      for(auto &it1 : v2){
    cout<<it1<<" ";
   }
merge(v1.begin(),v1.end(),v2.begin(),v2.end());

return 0;
}