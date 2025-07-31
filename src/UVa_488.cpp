#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i = 0;i<t;i++){
        int a,f;
        cin>>a>>f;
        for(int j = 0;j<f;j++){
            
            for(int k = 1;k<=a;k++){
                for(int r = 1;r<=k;r++){
                    cout<<k;
                }
                cout<<"\n";
            }

            for(int k = a-1;k>=1;k--){
                for(int r = k;r>=1;r--){
                    cout<<k;
                }
                cout<<"\n";
            }
            cout<<"\n";
        }

    }



}