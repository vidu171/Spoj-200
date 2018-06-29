#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int total = 0;
    int row=1;
    for(int j=1;j<=n;j++){
        int rootn = sqrt(j);
        for(int i=1;i<=rootn;i++){
            if(j%i==0){
                total++;
            }
        } 
    }
    cout<<total;
    return 0;
}