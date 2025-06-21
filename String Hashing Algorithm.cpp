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
