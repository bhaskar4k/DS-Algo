#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SegmentTree{
public:
	vector<ll> seg;

	SegmentTree(ll n){
		seg.resize(4*n+1);
	}

	void build(ll ind, ll low, ll high, vector<ll> &arr){
		if(low==high){
			seg[ind]=arr[low];
			return;
		}

		ll mid=low+(high-low)/2;
		build(2*ind+1,low,mid,arr);
		build(2*ind+2,mid+1,high,arr);

		seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
	}

	void update(ll ind, ll low, ll high, ll &index, ll &val){
		if(low==high){
			seg[ind]=val;
			return;
		}

		ll mid=low+(high-low)/2;
		if(index<=mid) update(2*ind+1,low,mid,index,val);
		else update(2*ind+2,mid+1,high,index,val);

		seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
	}

	ll query(ll ind, ll low, ll high, ll &l_bound, ll &r_bound, vector<ll> &arr){
		if(high<l_bound || low>r_bound) return INT_MIN;
		if(low>=l_bound && high<=r_bound) return seg[ind];

		ll mid=low+(high-low)/2;
		ll left=query(2*ind+1,low,mid,l_bound,r_bound,arr);
		ll right=query(2*ind+2,mid+1,high,l_bound,r_bound,arr);

		return max(left,right);
	}
};

void solve(){
	ll n, q;
	cin>>n>>q;

	vector<ll> arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	SegmentTree segment_tree(n);

	segment_tree.build(0,0,n-1,arr);

	while(q--){
		ll type;
		cin>>type;
		if(type==1){
			ll l_bound,r_bound;
			cin>>l_bound>>r_bound;
			cout<<segment_tree.query(0,0,n-1,l_bound,r_bound,arr)<<endl;
		}else{
			ll index,val;
			cin>>index>>val;
			segment_tree.update(0,0,n-1,index,val);
			arr[index]=val;
		}
	}
}

int main() {
	solve();
	return 0;
}
