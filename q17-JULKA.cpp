    #include <bits/stdc++.h>
    #include <iostream>
    #include<string>
    #include<math.h>
    using namespace std;

    void devide (char * n,char *s1, char* s2, int lena){
        int carry = 0;
        for(int i=lena;i>0;i--){
            
            s1[lena-i] = n[i]/2; 
            if(n[i]%2==0);
        }
    }

    int main(){
        int T =10;
        while(T--){
            char n[101], d[101], c[101], s1[101], s2[101];
            cin>>n>>d;
            cout<<n[0];
            // int lena = strlen(n);
            // int lend = strlen(d);
            // devide(n,s1,s2,lena);
            // int lenc = strlen(c);

        }
        return 0;
    }

