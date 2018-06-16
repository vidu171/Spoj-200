#include <iostream>
using namespace std;


int rev(int a){
  int temp=0;
  while(a){
    temp=(temp*10)+(a%10);
    a = a/10;
  }
  return temp;
}

int main(){
  int T;
  cin>>T;
  while(T--){
    int a;
    int b;
    cin>>a>>b;
    int revSum = rev(rev(a)+rev(b));
    cout<<revSum<<endl;
  }

}
