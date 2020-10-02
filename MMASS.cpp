#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define maX(a,b)		((a)>(b)?(a):(b))
#define miN(a,b)		((a)<(b)?(a):(b))

#ifdef ONLINE_JUDGE
#define MAX 2000005
#else
#define MAX 100000
#endif

char s[MAX];
int test;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,n,m,k,l,y,z,sum=0,x;
	scanf("%s",s);
	n=strlen(s);
	stack<int> a;
	for(int i=0;i<n;i++){
		if(s[i]>='2'&&s[i]<='9'){
			x=a.top()*(s[i]-'0');
			a.pop();
			a.push(x);
		}else if(s[i]=='(')	a.push(-1);
		else if(s[i]==')'){
			x=0;
			while(a.top()!=-1){
				x+=a.top();
				a.pop();
			}
			a.pop();
			a.push(x);
		}else{
			if(s[i]=='C')	x=12;
			else if(s[i]=='H')	x=1;
			else			x=16;
			a.push(x);
		}
	}
	x=0;
	while(!a.empty()){
		x+=a.top();
		a.pop();
	}
	printf("%d\n",x);
	return 0;
}
