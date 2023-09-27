class DisjointSet {
public: 
    vector<int> rank, parent, size; 

    DisjointSet(int n){
        rank.resize(n+1,0); 
        parent.resize(n+1);
        size.resize(n+1); 
        for(int i=0; i<=n; i++){
            parent[i]=i; 
            size[i]=1; 
        }
    }

    int FindParent(int node) {
        if(node==parent[node]) return node;           
        return parent[node]=FindParent(parent[node]); 
    }

    void UnionByRank(int u, int v) {
        int ulp_u=FindParent(u); 
        int ulp_v=FindParent(v); 
        if(ulp_u==ulp_v) return;

        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v; 
        }else if(rank[ulp_v]<rank[ulp_u]){
            parent[ulp_v]=ulp_u; 
        }else{
            parent[ulp_v]=ulp_u; 
            rank[ulp_u]++; 
        }
    }

    void UnionBySize(int u, int v) {
        int ulp_u=FindParent(u); 
        int ulp_v=FindParent(v); 
        if(ulp_u==ulp_v) return; 

        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v; 
            size[ulp_v]+=size[ulp_u]; 
        }else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v]; 
        }
    }
};
