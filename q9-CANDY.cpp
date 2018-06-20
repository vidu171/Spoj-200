#include<iostream>
using namespace std;

int main(){
    while(true){
        int n;
        cin>>n;
        if(n==-1){
            return 0;
        }
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int avg = sum/n;
        if(sum%n!=0){
            cout<<-1<<"\n";
        }
        else{
            int total=0;
        for(int i=0;i<n;i++){
            if(arr[i]<avg){
                total+=(avg-arr[i]);
            }
        }
        cout<<total<<"\n";
        }
    
    }
}