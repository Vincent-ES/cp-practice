#include <iostream>
using namespace std;

int main(){
    int t;
    int i = 1;
    while(cin>>t){
        int count = 0;
        if(t == 0){
            break;
        }

        int arr[t];
        int ave = 0;
        for(int i = 0;i<t;i++){
            cin>>arr[i];
            ave +=arr[i];
        }
        ave /= t; 
        for(int j = 0;j<t;j++){
            if(arr[j]>ave){
                count += arr[j] - ave;
            }
        }        


        cout<<"Set "<<"#"<<i<<"\n";
        cout<<"The minimum number of moves is "<<count<<".";
        cout<<"\n";
        i++;
    }





}