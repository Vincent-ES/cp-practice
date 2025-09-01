#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, r;
    while(cin>>n>>r){
        
        int a[n];
        for(int j = 1;j<=n;j++){
            a[j-1] = j;
        }
        int arr[r];
        for(int i=0;i<r;i++){
            cin>>arr[i];
            a[(arr[i]-1)] = 0; 
        }
        if(n==r){
            cout<<"*"<<"\n";
            continue;
        }
        for(int k = 0;k<n;k++){
            if(a[k]==0){
                continue;
            }
            cout<<a[k]<<(k+1 == n ? "" : " ");
        }
        cout<<"\n";




    }




}