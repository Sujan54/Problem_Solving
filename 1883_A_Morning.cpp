#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test_case; cin>>test_case;

    while(test_case--){
        string s;  cin>>s;

        int ans=0, cur = 1;
        for(auto i:s){
            int num = i-'0';
            if(num==0) num=10;
            ans+= abs(cur - num) + 1;
            cur = num;

        }
        cout<<ans<<'\n';
    }
}