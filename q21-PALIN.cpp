    #include <bits/stdc++.h>
    using namespace std;
    int main() {
       int T;
       cin>>T;
       while(T--)
       {
          char str[1000000];
          cin>>str;
          int i,j;
          int n = strlen(str);
          int all9 = 1;
          for(int i=0;i<n;i++){
            if((str[i]-'0')!=9) all9 = 0;
          }
          if(all9){
              cout<<1;
              for(int i =1;i<n;i++)cout<<0;
              cout<<1<<"\n";
              continue;
          }
          if( n & 1){
               j = n/2+1;
               i = n/2-1;
             
          }
          else{
               i = n/2-1;
               j = n/2;

          }

           int carry = 0;
              int leftSmaller = 0;
              while(i>0 && str[i]==str[j]){
                  i--;
                  j++;
              }
              
              if(i<1 || (str[i]-'0')<(str[j]-'0')){
                leftSmaller = 1;
              }
              while(i>=0){
                  str[j] = str[i];
                  j++;
                  i--;
              }
              if(leftSmaller){
                  int mid = n/2;
                  int carry = 1;
                  if(n&1){
                      int i = mid;
                      if(str[mid]-'0'<9){
                          str[mid]++;
                      }
                      else{
                          while(i>=0 && (str[i]-'0')==9){i--;};
                              str[i]++;
                              str[n-i-1]++;
                      }
                  }
                  else{
                      int i = mid;    
                      while(i>=0 && (str[i]-'0')==9){
                              i--;
                          }
                        str[i]++;
                        str[n-i-1]++;
                      
                  }
              }
              cout<<str<<"\n";
       }
       return 0;
    }

// 0 1 2 3 4 5  = 2 , 3
// 0 1 2 3  =  2,1

    


    