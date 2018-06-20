#include<iostream>
using namespace std;

int main(){
    while(true){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
        return 0;
        
        if(b==((a+c)/2) && (a+c)%2==0){
            cout<<"AP "<<(c+(b-a))<<"\n";
        }
        else{
            cout<<"GP "<<(c*(b/a))<<"\n";
        }
    }
}