#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int x,y;
        cin>>x>>y;
        if(x==y || x==y+2){
            if(x%2==0&&y%2==0){
                cout<<x+y<<"\n";
            }
            else if(x%2!=0&&y%2!=0){
                cout<<(x+y-1)<<"\n";
            }
            else{
                cout<<"No Number\n";
            }
        }
        else{
            cout<<"No Number\n";
        }
    }
}