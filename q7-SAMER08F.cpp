#include<iostream>
using namespace std;

int main(){
    while(true){
        int a;
        cin>>a;
        if(a==0)
        return 0;
        int sum=0;
        while(a!=0){
            sum+=(a*a);
            a=a-1;
        }
        cout<<sum<<"\n";
    }
}