#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define haan cout<<"YES\n";
#define na cout<<"NO\n";
#define pb push_back
#define finish if(flag){cout<<"YES\n";}else{cout<<"NO\n";}
#define start int arr[n];for(int i=0;i<n;i++){cin>>arr[i];} 
#define N 200010
#define dis(v) for(auto &x:v){cout<<x<<" ";}cout<<"\n";
#define dis2(v) for(auto &x:v){cout<<x.first<<" "<<x.second<<"\n";}
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
int n;cin>>n;int k;cin>>k;
start
if(k==1){
	bool flag=true;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[0]){
			flag=false;
			break;
		}
	}
	if(!flag){
		cout<<-1<<"\n";
	}
	else{
		cout<<1<<"\n";
	}
}
else{
	set<int> s;
	for(auto &x:arr){
		s.insert(x);
	}
	int ans=1;
	int l=s.size();
	l-=k;
	int temp=(l+k-2)/(k-1);
	if(temp>0){
		ans+=temp;
	}
	cout<<ans<<"\n";
}	
}
}
