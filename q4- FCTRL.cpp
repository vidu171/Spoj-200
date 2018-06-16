#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int sum=0;
        int div=5;
        while(n/div){
            sum+=n/div;
            div*=5;
        }
        cout<<sum<<endl;
    }
}


