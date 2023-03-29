// use the concept of red black tree
// time complexity of all operation : O(logn)



#include<bits/stdc++.h>
using namespace std;
void print(map<string,int> &m){
    // cout<<"size :"<<m.size()<<endl;
    // cout<<"max size:"<<m.max_size()<<endl;
    // cout<<m.empty()<<endl;
    for(auto &it :m){
        cout<<it.first<<" ->"<<it.second<<endl;
    }

}
int main()
{
    map<string,int>m;
    m["maths"]=94; // this is one of the way to insert element to the map
    m["oops"]=93;
    m["eco"]=97;
    m["dsa"]=90;
    m["de"]=88;
    m.insert({"oopslab",95}); // this is another way to insert an element in the map
   // map<string,int>::iterator it;
  print(m);
  // auto it=m.find("ds"); // this is a way to find a key and its respective value is their or not
  // find basically returns a iterator  
   //cout<<(*it).first<<"->"<<(*it).second<<endl;
   // when we enable to find it itertor return  m.end()+1
   cout<<"--------- updated one!!"<<endl;
   m.erase("eco"); // use to delete any iterator in map
   // if we erase m.end() element from the map ,it will throw a segemenation fault
   print(m);
   cout<<"--------- updated one!!"<<endl;
   m.clear();
   print(m);
return 0;
}