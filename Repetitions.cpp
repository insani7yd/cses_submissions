#include<bits/stdc++.h>
using namespace std;
#define pb emplace_back
#define mp make_pair
#define fs first
#define sn second
#define cor(x) (((x%mod)+mod)%mod)
 
typedef int64_t ll;
 
template<typename T, typename U> static inline void amin(T &x, U y){if (y < x)x = y;}  
template<typename T, typename U> static inline void amax(T &x, U y){if (x < y)x = y;} 

const int mod = 1e9+7;
 
//void precomp(){}
 
void solve(){
    string s;char p;
    cin>>s;p=s[0];int l=0,lt=0;
    for(auto i: s){
        if(i==p)l++;
        else {
            p=i;amax(lt,l);
            l=1;
        }
    }

    amax(lt,l);
    cout<<lt<<"\n";
}
 
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);cout.tie(NULL);
    
    //precomp();
    
    //int tc;cin>>tc;while(tc--)
    solve();
    
    return 0;
}