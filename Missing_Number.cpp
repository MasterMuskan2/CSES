/*सब सुख लहै तुम्हारी सरना ।
तुम रक्षक काहू को डरना ॥*/

#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<list>
#include<iterator>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<random>
#include<map>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#include<math.h>
#include<cstring>
#include<chrono>
#include<string>

using namespace std;

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.precision(20)
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int> >
#define vlll vector<vector<ll> >
#define pi pair<int,int>
#define pll pair<ll,ll>
#define vs vector<string>
#define vss vector<vector<string> >   
#define vc vector<char>
#define vcc vector<vector<char> >
#define umap map<ll,ll>
#define yes cout<<"YES"<<endl 
#define no cout<<"NO"<<endl
#define pr(x) cout<<x<<endl 
#define sz(arr) arr.size() 
#define rep(i,a,b) for(ll i=(ll)a;i<(ll)b;i++)
#define read(n,arr) for(ll i=0;i<n;i++) cin>>arr[i]
#define readm(m,n,arr) rep(i,0,m){rep(j,0,n){cin>>arr[i][j];}}
#define srt(v) sort(begin(v),end(v))
#define srtr(v) sort(rbegin(v),rend(v))
#define rev(v) reverse(all(v))
#define all(v) (v).begin(),(v).end()
#define debug(x) rep(i,0,sz(x)) {cout<<x[i]<<" ";}{cout<<endl;}
#define debugp(x) rep(i,0,sz(x)){cout<<x[i].first<<" "<<x[i].second<<endl;}
#define pb(x) push_back(x)
#define rt(x) return x;

int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
int dr1[8]={-1,-1,0,1,1,1,0,-1};
int dc1[8]={0,1,1,1,0,-1,-1,-1};

const double pie=3.14159265358979323846264338327950;
const ll mod=1e9+7;

ll inv(ll i) {if(i==1) return 1; return (mod-((mod/i)*inv(mod%i))%mod)%mod;}
ll mod_mul(ll a, ll b) {a=a%mod;b=b%mod;return(((a*b)%mod)+mod)%mod;}
ll mod_add(ll a, ll b) {a=a%mod;b=b%mod;return(((a+b)%mod)+mod)%mod;} 
ll ceil_div(ll a, ll b) {return a%b==0?a/b:a/b+1;}
ll pwr(ll a, ll b) {a%=mod;ll res=1;while(b>0){if(b&1)res=res*a%mod;a=a*a%mod;b>>=1;}return res;}
ll gcd(ll a,ll b){if(b==0)return a;else return gcd(b,a%b);}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
ll sumOfDigits(ll n){ll sum=0;while(n){sum+=n%10;n/=10;}return sum;}
ll getFact(ll n){if(n==0 || n==1) return 1;return n*(1LL)*getFact(n-1)%mod;}
ll getLen(ll n){ll cnt=0;while(n){cnt++;n/=10;}return cnt;}
bool isSubstring(string s1,string s2){if (s2.find(s1)!=string::npos) return 1;else return 0;}
bool getPal(ll n){fast;string x=to_string(n);string t=x;reverse(t.begin(),t.end());rt(x==t);}
bool isPal(string &s){string t=s;reverse(t.begin(),t.end());rt(t==s);}
bool isSorted(vll &arr){rep(i,1,sz(arr)){if(arr[i]<arr[i-1]) rt(0);}rt(1);}
bool isPrime(ll n){if(n==2) rt(1); if(n<=1 || n%2==0) rt(0); for(ll i=3;i*i<=n;i+=2){if(n%i==0) rt(0);}rt(1);}
bool isPerfSq(ll n){ll x=sqrt(n);if(x*x==n) rt(1);rt(0);}

ll SIZE=1e6;
bool sieve[1000001];
void createSieve(){
    sieve[0]=0,sieve[1]=0;
    for(ll i=2;i<=1e6;i++){
        sieve[i]=1;
    }
    for(ll i=2;i*i<=SIZE;i++){
        if(sieve[i]==1){
            for(ll j=i*i;j<=SIZE;j+=i){
                sieve[j]=0;
            }
        }
    }
}

ll modPow(ll a,ll b){ll p=1;ll q=a;while(b>0){if(b%2==1) p=(p*q)%mod;q=(q*q)%mod;b/=2;}rt(p%mod);}

/*My code starts from here*/ 

void MasterMuskan(){
    /*
        Don't cry in a corner, if you want something, mehnat kar, best ban, aur chheen le.
        
        Hard work always pays off. Great things takes time.
        I am not lucky, but I will defeat my luck for sure. I don't want to get stuck in this shit job.
    */
    
    fast;
    ll n;
    cin>>n;
    vll arr(n-1);
    read(n-1,arr);
    ll res=n*(n+1)>>1;
    for(auto it:arr) res-=it;
    pr(res);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // createSieve();
    ll t=1;
    // cin>>t;
    while(t--){
        MasterMuskan();
    }
    // MasterMuskan();
    return 0;
}

/*My code ends here*/