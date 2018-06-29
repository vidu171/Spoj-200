    #include <bits/stdc++.h>
    #include <iostream>
    #include<string>
    #include<math.h>
    using namespace std;

    map <int , long long> h;

    long long bcoin(int n){
        if(n<12)
        return n;

        long long r = h[n];

        if(r == 0){
        r = (bcoin(n/2)+bcoin(n/3)+bcoin(n/4));
        long long total = n > r ? n : r;
        h[n] = total;
        return total;
        }
        return r;
    }


    int main(){
        while(true){
            int n;
            cin>>n;
            cout<<bcoin(n)<<"\n";     
        }
        return 0;
    }

