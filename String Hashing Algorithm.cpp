/*            
   ============================================             
   |             Coded By Bhaskar             |  
   ============================================           

        Pakdo Mera Hath Kudo Tum Unchai Se
       Jayenge Niche Nahi Aur Bhi Unchai Pe
       Jahan Pe Jeet Ki Pukaar Bhi Sunai De
      Is Baat Ki Meri Poori Zindagi Gawahi De 
*/


#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define ll                                 long long
#define ld                                 long double
#define ull                                unsigned long long
#define mp                                 make_pair
#define pb                                 push_back
#define ppb                                pop_back
#define ub                                 upper_bound
#define lb                                 lower_bound
#define nline                              "\n"
#define fi                                 first
#define se                                 second
#define INF                                9223372036854775807
#define ln()                               cout<<endl;
#define NO()                               cout<<"NO"<<endl;
#define YES()                              cout<<"YES"<<endl;
#define sz(x)                              ((ll)(x).size())
#define all(x)                             (x).begin(),(x).end()
#define p64                                pair<ll,ll>
#define v64                                vector<ll>
#define vv64                               vector<vector<ll>>
#define vp64                               vector<p64>
#define mp64                               map<ll,ll>
#define mc64                               map<char,ll>
#define ms64                               map<string,ll>
#define sq(x)                              (x)*(x)
#define mid(l,r)                           (l+(r-l)/2)
#define precision(x)                       cout<<fixed<<setprecision(x)
#define sort_arr(a,n)                      sort(a,a+n);
#define sort_vect(v)                       sort(v.begin(),v.end());
#define rev_arr(a,n)                       reverse(a,a+n);
#define rev_vect(v)                        reverse(v.begin(),v.end());
#define unique_vect(v)                     v.erase(unique(v.begin(),v.end()),v.end());
#define fastio()                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define FOR(x,a,n)                         for(ll x=a; x<n; x++)
#define FORREV(x,n,a)                      for(ll x=n-1; x>=a; x--)
#define FORIT(x,ds)                        for(auto x=ds.begin(); x!=ds.end(); x++)

#define print1(a)                          cout<<a<<endl;
#define print2(a,b)                        cout<<a<<" "<<b<<endl;
#define print3(a,b,c)                      cout<<a<<" "<<b<<" "<<c<<endl;
#define print4(a,b,c,d)                    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
#define print5(a,b,c,d,e)                  cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
#define print_arr1(a,n)                    for(ll i=0; i<n; i++){cout<<a[i]<<" ";}cout<<endl;
#define print_arr2(a,row,column)           for(ll i=0; i<row; i++){for(ll j=0; j<column; j++){cout<<a[i][j]<<" ";}cout<<endl;}
#define print_v1(v)                        for(ll i=0; i<v.size(); i++){cout<<v[i]<<" ";}cout<<endl;
#define print_v2(v)                        for(ll i=0; i<v.size(); i++){for(ll j=0; j<v[i].size(); j++){cout<<v[i][j]<<" ";}cout<<endl;}
#define print_map(mm)                      for(auto it=mm.begin(); it!=mm.end(); it++){cout<<it->first<<" "<<it->second<<endl;}
#define print_set(s)                       for(auto it=s.begin(); it!=s.end(); it++){cout<<*it<<" ";}cout<<endl;
#define print_vect_of_pair(v)              for(ll i=0; i<v.size(); i++){cout<<v[i].first<<" "<<v[i].second<<endl;}
#define print_adjacency_list(arr,n)        for(ll i=1; i<n+1; i++){cout<<"ind "<<i<<"-> ";for(ll j=0; j<arr[i].size(); j++){cout<<arr[i][j]<<" ";}cout<<endl;}

#define in1(a)                             cin>>a;
#define in2(a,b)                           cin>>a>>b;
#define in3(a,b,c)                         cin>>a>>b>>c;
#define in4(a,b,c,d)                       cin>>a>>b>>c>>d;
#define in5(a,b,c,d,e)                     cin>>a>>b>>c>>d>>e;
#define in6(a,b,c,d,e,f)                   cin>>a>>b>>c>>d>>e>>f;
#define in_arr1(a,n)                       FOR(i,0,n){cin>>a[i];}
#define in_arr2(a,n,m)                     FOR(i,0,n){FOR(j,0,m){cin>>a[i][j];}}
#define in_v1(v,n)                         FOR(i,0,n){cin>>v[i];}
#define in_v2(v,n,m)                       FOR(i,0,n){FOR(j,0,m){cin>>v[i][j];}}
#define in_vp(v,n)                         FOR(i,0,n){ll x,y;cin>>x>>y;v[i]={x,y};}

#ifndef ONLINE_JUDGE
    #define debug()                        cerr<<"[Check]"<<endl;
    #define debugln()                      cerr<<endl;
    #define debug1(a)                      cerr<<#a<<"="<<a<<endl;
    #define debug2(a,b)                    cerr<<#a<<"="<<a<<" "<<#b<<"="<<b<<endl;
    #define debug3(a,b,c)                  cerr<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<endl;
    #define debug4(a,b,c,d)                cerr<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<endl;
    #define debug5(a,b,c,d,e)              cerr<<#a<<"="<<a<<" "<<#b<<"="<<b<<" "<<#c<<"="<<c<<" "<<#d<<"="<<d<<" "<<#e<<"="<<e<<endl;    
    #define debug_arr1(a,n)                cerr<<#a<<" = [ "; for(ll i=0; i<n; i++){cerr<<a[i]<<" ";}cerr<<"]"<<endl;
    #define debug_v1(v)                    cerr<<#v<<" = [ "; for(ll i=0; i<v.size(); i++){cerr<<v[i]<<" ";}cerr<<"]"<<endl;
    #define debug_arr2(arr,row,column)     cerr<<#arr<<"="<<endl; for(ll i=0; i<row; i++){cerr<<"[ ";for(ll j=0; j<column; j++){cerr<<arr[i][j]<<" ";}cerr<<"]"<<endl;}cerr<<endl;
    #define debug_v2(v)                    cerr<<#v<<"="<<endl; for(ll i=0; i<v.size(); i++){cerr<<"[ ";for(ll j=0; j<v[i].size(); j++){cerr<<v[i][j]<<" ";}cerr<<"]"<<endl;}cerr<<endl;
    #define debug_map(mm)                  cerr<<#mm<<"="<<endl; for(auto it=mm.begin(); it!=mm.end(); it++){cerr<<"{"<<it->first<<" "<<it->second<<"}"<<endl;}cerr<<endl;
    #define debug_set(s)                   cerr<<#s<<" = [ "; for(auto it=s.begin(); it!=s.end(); it++){cerr<<*it<<" ";}cerr<<"]"<<endl;
    #define debug_vect_of_pair(v)          cerr<<#v<<"="<<endl; for(ll i=0; i<v.size(); i++){cerr<<"{"<<v[i].first<<" "<<v[i].second<<"}"<<endl;}cerr<<endl;
    #define debug_adjacency_list(arr,n)    cerr<<#arr<<"="<<endl; for(ll i=1; i<n+1; i++){cerr<<"ind="<<i<<"-> ";for(ll j=0; j<arr[i].size(); j++){cerr<<arr[i][j]<<" ";}cerr<<endl;}
#else
    #define debug()
    #define debugln()
    #define debug1(a)
    #define debug2(a,b)
    #define debug3(a,b,c)
    #define debug4(a,b,c,d)
    #define debug5(a,b,c,d,e)    
    #define debug_arr1(a,n)
    #define debug_arr2(arr,row,column)
    #define debug_v1(v)
    #define debug_v2(v)
    #define debug_map(mm)
    #define debug_set(s)
    #define debug_vect_of_pair(v)
    #define debug_adjacency_list(arr,n)
#endif

long long MOD1=1000000007;
long long MOD2=998244353;
double PI=3.141592653589793238462;
long long dx[]={+1,-1,+0,+0};                     // 4 X directions
long long dy[]={+0,+0,+1,-1};                     // 4 Y directions
long long kingX[]={+0,+0,+1,-1,-1,+1,-1,+1};      // King X Moves
long long kingY[]={-1,+1,+0,+0,+1,+1,-1,-1};      // King Y Moves
long long knightX[]={-2,-2,-1,-1, 1,1, 2,2};      // Knight X Moves
long long knightY[]={-1, 1,-2, 2,-2,2,-1,1};      // Knight Y Moves

void google(ll testCase){cout<<"Case #"<<testCase<<": ";}
void rotate_2D_matrix_90degree_clockwise(vector<vector<ll>> &a, ll n){for(ll i=0; i<n/2; i++) {for(ll j=i; j<n-i-1; j++){ll temp=a[i][j];a[i][j]=a[n-1-j][i];a[n-1-j][i]=a[n-1-i][n-1-j];a[n-1-i][n-1-j]=a[j][n-1-i];a[j][n-1-i]=temp;}}}
ll digit_count(ll n){return (floor(log10(n)+1));}
ll left_most_set_bit(ll n){ll x=log2(n);return x;}
ll count_of_set_bit(ll n){return (bitset<32>(n).count());}
ll sum_arr(ll a[], ll s, ll n){ll jodd=0;for(ll i=s; i<n; i++){jodd+=a[i];}return jodd;}
ll sum_vect(vector<ll> &v, ll s, ll n){ll jodd=0;for(ll i=s; i<n; i++){jodd+=v[i];}return jodd;}
ll gcd(ll a, ll b){if(b==0)return a;return gcd(b,a%b);}
ll lcm(ll a, ll b){return (a/gcd(a,b))*b;}
ll mod_add(ll a, ll b, ll m){a=a%m; b=b%m;return (((a+b)%m)+m)%m;}
ll mod_mul(ll a, ll b, ll m){a=a%m; b=b%m;return (((a*b)%m)+m)%m;}
ll mod_sub(ll a, ll b, ll m){a=a%m; b=b%m;return (((a-b)%m)+m)%m;}
ll smallest_divisor(ll n){if(!(n%2)){return 2;}for(ll i=3; i*i<=n; i+=2){if(!(n%i)){return i;}}return n;}
ll power_mod(ll x, ll y, ll p){ll res=1;x=x%p; if(x==0) return 0;while(y>0){if(y&1){res=(res*x)%p;}y=y>>1;x=(x*x)%p;}return res;}
ll string_to_int(string &s){stringstream geek(s);ll x=0;geek>>x;return x;}
ll next_perfect_square(ll x){if(x>=0){ll sr=sqrt(x);if(sr*sr==x){return x;}}ll nextN=floor(sqrt(x))+1;return nextN*nextN;}
ll binary_to_decimal(string n){string num=n;ll dec_value=0, base=1, len = num.length();for(ll i=len-1; i>=0; i--){if(num[i]=='1'){dec_value+=base;}base=base*2;}return dec_value;}
ll binary_exponentiation(ll a, ll b, ll m){a%=m;ll res=1;while(b>0){if(b&1) res=res*a%m;a=a*a%m;b>>=1;}return res;}
bool isPrime(ll n){if(n<=1) return false;for(ll i=2; i*i<=n; i++){if(n%i==0) return false;}return true;}
bool is_this_string_palindrome(string s){ll low=0,high=s.size()-1;while(low<=high){if(s[low++]!=s[high--]){return false;}}return true;}
bool is_power_of_two(ll n){if(n==0){return false;} return (ceil(log2(n))==floor(log2(n)));}
bool is_arr_sorted(ll *arr, ll n){for(ll i=0; i<n-1; i++){if(arr[i]>arr[i+1]){return false;}}return true;}
bool is_vect_sorted(vector<ll> &v){for(ll i=0; i<v.size()-1; i++){if(v[i]>v[i+1]){return false;}}return true;}
bool all_same_element_in_arr(ll *arr, ll n){for(ll i=0; i<n-1; i++){if(arr[i]!=arr[i+1]){return false;}}return true;}
bool all_same_element_in_vect(vector<ll> &v){for(ll i=0; i<v.size()-1; i++){if(v[i]!=v[i+1]){return false;}}return true;}
string decimal_to_binary(ll n){string s="";for(ll i=31; i>=0; i--) {ll k=n>>i;if(k&1){s+='1';}else{s+='0';}}return s;}
string int_to_string(ll num){ostringstream str1;str1<<num;string ss=str1.str();return ss;}
vector<ll> get_all_divisors(ll n){vector<ll> temp;for(ll i=1; i<=sqrt(n); i++){if(n%i==0){if(n/i==i){temp.pb(i);}else{temp.pb(i);temp.pb(n/i);}}}sort(all(temp));return temp;}
vector<ll> sieve(ll n) {ll*arr=new ll[n+1](); vector<ll> vect; for(ll i=2; i<=n; i++) if(arr[i]==0){vect.push_back(i); for(ll j=2*i; j<=n; j+=i) arr[j]=1;} return vect;}
//---------------------------------------------------------------------------------------------------------------------------------------

//======== CUSTOM FUNCTIONS() =========

struct substringHash{
    string s;
    vector<ll> pHash1, pHash2;

    ll p, m1, m2, n;
    vector<ll> p_pow1, p_pow2;

    substringHash(string &s_, bool randomise=true){
        this->p=37;
        this->s=s_;
        this->n=s.size();
        
        //randomises the two modulo by default
        if(randomise){
            //Setup
            mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
            uniform_int_distribution<ll> distrib(1e8,1e9+100);
            this->m1=distrib(rng);
            this->m2=distrib(rng);
        } else {
            this->m1=1000005737;
            this->m2=1000000181;
        }

        initialise_p_pow();

        initialisePrefixHash(pHash1,m1);
        initialisePrefixHash(pHash2,m2);
    }

    void initialisePrefixHash(vector<ll> &pHash, ll m){
        pHash=vector<ll>(n,0);
        ll hash_value=0, ctr=0;

        for(char c: s){
            hash_value=(hash_value*p+(c-'0'+1))%m;
            pHash[ctr]=hash_value;
            ctr++;
        }
    }

    void initialise_p_pow(){
        p_pow1=vector<ll>(n+1, 1);
        p_pow2=vector<ll>(n+1, 1);

        for(ll i=1; i<n+1; i++){
            p_pow1[i]=(p_pow1[i-1]*p)%m1;
        }
        
        for(ll i=1; i<n+1; i++){
            p_pow2[i]=(p_pow2[i-1]*p)%m2;
        }
    }

    ll computeHash(ll l, ll r, vector<ll> &pHash, ll m, vector<ll> &p_pow){
        ll res=pHash[r];
        if(l!=0) res-=((pHash[l-1]%m)*(p_pow[r-l+1]%m))%m;
        return (res%m+m)%m;
    }

    pair<ll,ll> getHash(ll l, ll r){
        return {computeHash(l,r,pHash1,m1,p_pow1), computeHash(l,r,pHash2,m2,p_pow2)};
    }

    pair<ll,ll> combineHash(pair<ll,ll> h1, pair<ll,ll> h2, ll x){
        pair<ll,ll> res=h1;
        res.first+=h2.first*p_pow1[x]%m1;
        res.second+=h2.second*p_pow2[x]%m2;
        res.first%=m1;
        res.second%=m2;
        return res;
    }
};

//=====================================

//========= SOLVE() ===================

void bhaskar(){
    ll n,k;
    in2(n,k)
    string s;
    in1(s)
    string r=s;
    reverse(all(r));

    string ans1="", ans2="";

    char c='0';
    FOR(i,0,n/k){
        FOR(j,0,k){
            ans1+=c;
        }
        if(c=='0') c='1';
        else c='0';
    }

    c='1';
    FOR(i,0,n/k){
        FOR(j,0,k){
            ans2+=c;
        }
        if(c=='0') c='1';
        else c='0';
    }

    debug2(ans1,ans2)

    substringHash h1(s, false);
    substringHash h2(r, false);
    substringHash a1(ans1, false);
    substringHash a2(ans2, false);

    // 1110001 00011 - s/h1
    // 11000 1000111 - r/h2
    // 00011 1000111 - ans1/a1
    // 11100 0111000 - ans2/a2

    if(h1.getHash(0,n-1)==a1.getHash(0,n-1) || h1.getHash(0,n-1)==a2.getHash(0,n-1)){
        print1(n)
        return;
    }

    FOR(i,1,n){
        p64 prefHash=h1.getHash(i,n-1);
        p64 suffHash=h2.getHash(n-i,n-1);

        if(a1.getHash(0,n-i-1)==prefHash && a1.getHash(n-i,n-1)==suffHash){
            print1(i)
            return;
        }
        if(a2.getHash(0,n-i-1)==prefHash && a2.getHash(n-i,n-1)==suffHash){
            print1(i)
            return;
        }
    }

    print1(-1);
}

//=====================================

//========= MAIN() ====================

int main(){
    fastio();
    auto start=chrono::high_resolution_clock::now();

    #ifndef ONLINE_JUDGE
        freopen("DEBUG.in", "w", stderr);
    #endif

    //pre_compute();

    ll testCase=1;
    cin>>testCase;
    FOR(i,1,testCase+1){
        //google(i);
        bhaskar();
    }

    auto stop=chrono::high_resolution_clock::now();
    chrono::duration<double> diff=stop-start;

    #ifndef ONLINE_JUDGE
        cerr<<fixed<<setprecision(3)<<left;
        cerr<<"[ Time taken "<<setw(3)<<diff.count()<<" Second. ]";
    #endif

    return 0;
}

//=====================================
