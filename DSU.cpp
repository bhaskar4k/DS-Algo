class DSU{
private:
    vector<int> Parent;
    vector<int> Rank;

public:    
    DSU(int n) {
        Parent.resize(n);
        Rank.resize(n,0);
        for(int i=0; i<n; i++) Parent[i]=i;
    }

    int Find(int x) {
        return Parent[x]=(Parent[x]==x) ? x : Find(Parent[x]);
    }

    bool Union(int x, int y) {
        int xset=Find(x), yset=Find(y);
        if(xset!=yset){
            (Rank[xset]<Rank[yset]) ? Parent[xset]=yset : Parent[yset]=xset;
            Rank[xset]+=(Rank[xset]==Rank[yset]);
            return true;
        }
        return false;
    }
};
