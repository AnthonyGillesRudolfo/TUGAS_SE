#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007
#define endl "\n";
#define ff first
#define ss second


/*
3 3
3 4 x
5 6 x
7 2 1

2 3
3 4 x
5 2 1


4 3

4 6 8 
5 7 3
x x 2
x x 1

3 4 x
5 6 x
7 8 x
9 2 1

24




2 4 6....(n-4) (n-2) n
n (n-2) (n-4) ..... 6 4 2

n+2 + (n+2) + (n+2) ..... (n+2) (n+2) (n+2)

n(n+2)/2 

*/

void solve(){
    ll n,m;cin>>n>>m;
    if(n>m)swap(n,m);
    // cout<<n<<endl;
    int ans = 0;
    int now = 1;
    if(n>=m){
        for(int i = n-1 ; i > 0 ; i--){
            // cout<<now<<endl;
            ans+=now;
            now++;
        }

        for(int i = 0 ; i < m ; i++){
            ans+=now;
            now+=2;
        }
    }
    else{
        for(int i = 0 ; i < m-1 ; i++){
            // cout<<now<<endl;
            ans+=now;
            now++;
        }

        for(int i = 0 ; i < n ; i++){
            ans+=now;
            now+=2;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}