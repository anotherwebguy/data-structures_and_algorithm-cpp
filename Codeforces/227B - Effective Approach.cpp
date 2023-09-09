
////Mohit Singh

#include<bits/stdc++.h>
using namespace std;

///*********** C o n t a i n e r ***********///

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

///************ C o n s t ************///
const int       N = 1e6 + 123;
const double    PI = acos(-1);
const ll        MOD = 1000000007;               ///1e9+7
ll dx[] = { +1, 0, -1, 0, +1, +1, -1, -1};      ///first 4 for adjacent
ll dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

//knights move
ll dx8[] = { +1, +1, -1, -1, +2, +2, -2, -2}; 
ll dy8[] = { +2, -2, +2, -2, +1, -1, +1, -1};

///************ M a r c o ***********///

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define test int tc; cin>>tc; while(tc--)
#define rep(i, a, b) for(ll i = a; i < b; i++)
#define repR(i, a, b) for(ll i = a; i >= b; --i)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) x.size()
#define el <<'\n'
#define print(a) {for(auto x:a)cout<<x<<" ";cout<<endl;}
#define mem(a,b) memset(a, b, sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sqr(a) (a)*(a)

#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

///************ H a s h i n g **************///
const int LEN = 1e5 + 5, P1 = 31, P2 = 37, M = 1e9 + 7;
int pw1[LEN], pw2[LEN], inv1[LEN], inv2[LEN];

int mul(int a, int b) {
    a = ((a % M) + M) % M;
    b = ((b % M) + M) % M;
    return (a * 1LL * b) % M;
}

int add(int a, int b) {
    a = ((a % M) + M) % M;
    b = ((b % M) + M) % M;
    return (a + b) % M;
}

int fastPower(int base, int power) {
    if (!power) return 1;
    int ret = fastPower(base, power >> 1);
    ret = mul(ret, ret);
    if (power % 2) ret = mul(ret, base);
    return ret;
}

void pre() {
    pw1[0] = inv1[0] = pw2[0] = inv2[0] = 1;
    int mulInv1 = fastPower(P1, M - 2);
    int mulInv2 = fastPower(P2, M - 2);
    for (int i = 1; i < LEN; i++) {
        pw1[i] = mul(pw1[i - 1], P1);
        pw2[i] = mul(pw2[i - 1], P2);
        inv1[i] = mul(inv1[i - 1], mulInv1);
        inv2[i] = mul(inv2[i - 1], mulInv2);
    }
}

struct Hash {
    vector<pair<int, int>> prefixHash;

    Hash(string s) {
        pre();
        prefixHash = vector<pair<int, int>>(s.size(), {0, 0});
        for (int i = 0; i < s.size(); i++) {
            prefixHash[i].first = mul(s[i] - 'a' + 1, pw1[i]);
            prefixHash[i].second = mul(s[i] - 'a' + 1, pw2[i]);
            if (i)
                prefixHash[i] = {
                add(prefixHash[i].first, prefixHash[i - 1].first),
                add(prefixHash[i].second, prefixHash[i - 1].second)
            };
        }
    }

    pair<int, int> getHashVal() {
        return prefixHash.back();
    }

    pair<int, int> getRangeHashVal(int l, int r) {
        return {
            mul(add(prefixHash[r].first, -(l ? prefixHash[l - 1].first : 0)), inv1[l]),
            mul(add(prefixHash[r].second, -(l ? prefixHash[l - 1].second : 0)), inv2[l])
        };
    }
};

///************ F u n c t i o n ************///

ll powmod(ll a, ll b) { a %= MOD; if (!a) return 0; ll pr = 1; while (b > 0) {if (b & 1) {pr *= a; pr %= MOD; --b;} a *= a; a %= MOD; b /= 2;} return pr;}
ll modinverse(ll a) {return powmod(a, MOD - 2);}
bool isPrime(ll n) { if (n <= 1)return false; if (n <= 3)return true; if (n % 2 == 0 or n % 3 == 0)return false; for (ll i = 5; i * i <= n; i += 6) {if (n % i == 0 or n % (i + 2) == 0)return false;} return true;}
void seive(bool a[]) {ll mx = sqrt(N), ii, jj; for (ii = 3; ii <= mx; ii += 2)if (!a[ii])for (jj = ii * ii; jj < N; jj += 2 * ii)a[jj] = true;}
//num of divisors
void numofdiv(ll a[]) {ll mx = sqrt(N), ii, jj; for (ii = 1; ii <= mx; ii++) {for (jj = ii * ii; jj < N; jj += ii) {if (jj == ii * ii) a[jj]++; else a[jj] += 2;}}}
void sumofdiv(ll a[]) {ll mx = sqrt(N), ii, jj; for (ii = 1; ii <= mx; ii++) {for (jj = ii * ii; jj < N; jj += ii) {if (jj == ii * ii) a[jj] += ii; else a[jj] += ii + jj / ii;}}}
ll findpos(ll n){ if(ceil(log2(n)) != floor(log2(n))) return -1; ll i=1,pos=1; while(!(i&n)) { i=i<<1; ++pos; } return pos; }
ll highestPowerof2(ll N) { if (!(N & (N - 1))) return N; return 0x8000000000000000 >> (__builtin_clzll(N)); }
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b) { return (a.second < b.second); }
void getFactors(int n,map<int,int> &m){ for (ll i=1; i<=sqrt(n); i++){ if (n%i == 0){ if (n/i == i){ if(i!=1) m[i]++; }else { if(n/i!=1)m[n/i]++; if(i!=1) m[i]++; }}}}
ll calcdiv2(ll n){ string s = bitset<32>(n).to_string(); ll c=0; reverse(all(s)); for(ll i=0;i<s.size();i++){ if(s[i]=='0') c++; else break;} return c;} 

///****************** C o d e ****************///
///-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=///


void solve() {
    //code goes here
    ll n;
    cin>>n;
    unordered_map<ll,ll> a,b;
    rep(i,0,n){
    	ll x;
    	cin>>x;
    	a[x] = i+1;
    	b[x] = n-i;
    }
    ll t;
    cin>>t;
    ll res1=0,res2=0;
    rep(i,0,t){
    	ll x;
    	cin>>x;
    	res1+=a[x];
    	res2+=b[x];
    }
    cout<<res1<<" "<<res2;
}

int main() {
    fastio();
#ifndef ONLINE_JUDGE
    file();
#endif
    solve();

}

///Thank you.
