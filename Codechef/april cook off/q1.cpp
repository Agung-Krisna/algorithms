#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
#define INF LLONG_MAX

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

using namespace std;
typedef long double ld;
ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("../../input","r",stdin);
    freopen("../../output","w",stdout);
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	priority_queue<ll> Q;
	
	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>n>>a>>b>>x>>y>>z;
		rep(i,0,n){
			cin>>c;
			Q.push(c);
		}
		p=ceil((z-b)/(y*1.0));
		p--;
		a+=p*x;
		f=1;
		while(a<z&&f!=0){
			f=Q.top();
			a+=f;
			r++;
			Q.pop();
			Q.push(f/2);
		}
		if(a>=z){
			cout<<r<<"\n";
		}else{
			cout<<"RIP\n";
		}
	}

	return 0;
}