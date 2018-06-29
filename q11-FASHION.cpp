#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        cout<<endl;
        int total=0;
        for(int i=0;i<n;i++)
            total+=(a[i]*b[i]);

        cout<<total<<"\n";
    }
}