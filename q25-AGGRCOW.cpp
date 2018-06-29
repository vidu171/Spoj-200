    #include <bits/stdc++.h>
    #include <iostream>
    #include<string>
    #include<math.h>
    using namespace std;
    int c;
    int func(int arr[], int mid , int n){
        int cows=1,pos=arr[0];
    for (int i=1; i<n; i++)
    {
        if (arr[i]-pos>=mid)
        {
            pos=arr[i];
            cows++;
            if (cows==c)
                return 1;
        }
    }
    return 0;
    }

    int aggrcow(int arr[], int n){
        int ini = 0;    
        int last = arr[n-1];
        int max = -1;
        while(last>ini){
            // cout<<"\nini= "<<ini<<" last= "<<last;
            int mid = (ini+last)/2;
            // cout<<" mid= "<<mid<<"\n";
            if(func(arr, mid, n)){
                max = mid>max?mid:max;
                mid++;
                ini = mid;
            }
            else
                last = mid;
            }
            return max;
    }

    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n>>c;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            sort(arr, arr+n);
            cout<<aggrcow(arr, n)<<"\n";
        }
        return 0;
    }


