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
//typedef long long LL ;
map< int,int > s ;
 
int p,q ;

int gcd(int a,int b){
	
	if(!b)
		return a ;
	return gcd(b,a%b) ;

}


int find_p(int p){
	
	int i=0;
	int val =1 ;
	if(p==1)return 0 ;
	while(val<p){
		val*=2 ;
		i++ ;
	}
	return i-1 ;
	
}

int logic(){
	
	if(p>q)
		return -1 ;
	int g = gcd(q,p) ;
	q/=g ;
	p/=g ;
	if(s[q]){
		
		int x = find_p(p ) ;
		return s[q]-x ;
		
		
	}
	//else if(!q%p && s[q/p])
		return -1 ;
}


int read_inp(){
	
	scanf("%d/%d",&p,&q) ;
	

}
 

int pre(){
	int val = 1 ;
	for(int i=0;i<=10;i++){
		
		s[val<<i]=i ;
		
	}
	
}



int main(){
	//FILE *fp = freopen("1.in","r",stdin) ;
	//FILE *fp1 =freopen("1.out","w",stdout) ;
	int test ;
	scanf("%d",&test) ;
	pre() ;
	for(int i=1;i<=test;i++){
		//printf("Case #%d: ",i) ;
		read_inp() ;
		cout<<logic()<<endl ;
		
	}
}
