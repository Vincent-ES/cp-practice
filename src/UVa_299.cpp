#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        int arr[num];
        for(int j=0;j<num;j++){
            cin>>arr[j];
        }

        int count = 0;
        for(int k = 0; k<num-1;k++){
            for(int r = 0;r<num-k-1;r++){
                if(arr[r]>arr[r+1]){
                    swap(arr[r], arr[r+1]);
                    count++;
                }
            }
        }

        cout<<"Optimal train swapping takes "<<count<<" swaps."<<"\n";
    }
}