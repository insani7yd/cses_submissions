#include<bits/stdc++.h>
using namespace std;
#define pb emplace_back
#define mp make_pair
#define fs first
#define sn second
#define cor(x) (((x%mod)+mod)%mod)
#define vec(T) vector<T>
#define printv(v) for(auto i: v)cout<<i<<" ";cout<<"\n";
#define scanv(v) for(auto& i: v)cin>>i;
 
typedef long long int ll;
 
template<typename T, typename U> static inline void amin(T &x, U y){if (y < x)x = y;}  
template<typename T, typename U> static inline void amax(T &x, U y){if (x < y)x = y;} 

const int mod = 1e9+7;
 
//void precomp(){}

void solve(){
    int n;cin>>n;
    vec(int) a(n),p(n,-1);
    scanv(a);

    for(int i=1;i<n;i++){
        int pr=i-1;
        while(pr>=0){
            if(a[pr]<a[i]){
                p[i]=pr;break;
            }
            else if(a[pr]==a[i]){
                p[i]=p[pr];break;
            }
            else {
                pr=p[pr];
            }
        }
    }

    for(auto& i: p)++i;

    printv(p);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    //precomp();
    
    //int tc;cin>>tc;while(tc--)
    solve();
    
    return 0;
}