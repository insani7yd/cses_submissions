#include<bits/stdc++.h>
using namespace std;
#define pb emplace_back
#define mp make_pair
#define fs first
#define sn second
#define cor(x) (((x%mod)+mod)%mod)
 
typedef int64_t ll;
const int mod = 1e9+7;
 
template<typename T, typename U> static inline void amin(T &x, U y){if (y < x)x = y;}  
template<typename T, typename U> static inline void amax(T &x, U y){if (x < y)x = y;} 
 
//void precomp(){}
 
void solve(){
	int n,x;cin>>n>>x;
	int c[n];for(auto& i: c)cin>>i;
	sort(c,c+n);
    
    vector<int> dp(x+1,0);
    dp[0]=1;
	for(int i=1;i<x+1;i++){
		for(int j=0;j<n;j++){
			if(i<c[j])break;
			dp[i]+=dp[i-c[j]];
			dp[i]=cor(dp[i]);
		}
		dp[i]=cor(dp[i]);
	}

	cout<<cor(dp[x])<<"\n";
}
 
int main(){
	
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);cout.tie(NULL);
    //precomp();
    //int tc;cin>>tc;while(tc--)
    solve();
    
    return 0;
}