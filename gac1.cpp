#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include<string>
#include<string.h>
#include<set>
#include<map>
#include<fcntl.h>
#include<stack>
#include<queue>
#include<iostream>


using namespace std ;
typedef int64_t  LL ;

int main(){
FILE *fp = freopen("1.in","r",stdin) ;
FILE *fp1 =freopen("1.out","w",stdout) ;
	int test ;
	scanf("%d",&test) ;
	for(int i=1;i<=test;i++){
		printf("Case #%d: ",i) ;
		int n ;
		cin>>n ;
		vector<LL> v1 ;
		vector<LL> v2 ;
		for(int i=1;i<=n;i++){
			int tmp ;
			cin>>tmp ;
			v1.push_back(tmp) ;
		}
		for(int i=1;i<=n;i++){
			int tmp ;
			cin>>tmp ;
			v2.push_back(tmp) ;
		}
		sort(v1.begin(),v1.end()) ;
		sort(v2.begin(),v2.end()) ;
		LL ans = 0 ;
		for(int i=0;i<n;i++){
			ans+=(LL)(v1[i]*v2[n-1-i]) ;
			//cout<<ans<<endl ;
		}
		cout<<ans<<endl ;
		
		
	}
}
