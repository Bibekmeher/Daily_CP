#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a{3,1,5,8};
    int sum=0,i=0;
                // write your code here
            int count=a.size();
            while(count>0){
                if(count>=3){
                sum+=a[0]*a[1]*a[2];
                a.erase(a.begin()+1);
                    count--;
                    
                }
                else if(count==2){
                    sum+=a[0]*a[1];

                    a.erase(a.begin());
                    count--;
                }
                else{
                    sum+=a[0];
                    count--;
                }
            }
            cout<<sum<<endl;
return 0;
}