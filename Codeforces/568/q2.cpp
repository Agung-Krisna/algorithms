#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
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
char A[mx],B[mx];
typedef long long int ll;
typedef pair<ll,ll> pl;

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;

bool fun(ll ind1,ll ind2){
	if (ind2<ind1)
	{
		return false;
	}
	if (ind1==-1&&ind2==-1)
	{
		return true;
	}
	if (ind1==-1||ind2==-1)
	{
		return false;
	}
	if (A[ind1]!=B[ind2])
	{
		return false;
	}
	if (ind1>0)
	{
		if (A[ind1-1]!=A[ind1])
		{
			while(ind2!=0 &&B [ind2]==B[ind2-1]){
				ind2--;
			}
			ind2;			
		}
		return fun(ind1-1,ind2-1);
	}
	return (fun(ind1-1,ind2-1) || fun(ind1,ind2-1));
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	#define mx 100005
    #else
		#define mx 1000005
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	a=b=c=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	cin>>t;
	
	while(t--){
		f=0;
		r=0;
		
		cin>>A;
		cin>>B;

		if(fun(strlen(A)-1,strlen(B)-1)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

		
	}

	return 0;
}