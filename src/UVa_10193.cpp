#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int BtoD(string num){
    int num_d = 0;
    reverse(num.begin(), num.end());
    for(int i = 0; i<num.length();i++){
        if(num[i] == '1'){
            num_d += pow(2, i);
        }
    }
    return num_d;
}

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n;i++){
        string str_a, str_b;
        cin>>str_a>>str_b;

        int num_a = BtoD(str_a), num_b = BtoD(str_b);
        if(num_a>num_b){
            swap(num_a, num_b);
        }
        if(num_b%num_a == 0){
            cout<<"Pair #"<<i+1<<": All you need is love!"<<"\n";
            continue;
        }
        bool check = true;
        for(int j = 2;2*j<=num_a;j++){
            if(num_a%j == 0 && num_b%j == 0){
                check = false;
                cout<<"Pair #"<<i+1<<": All you need is love!";
                break;
            }
        }
        if(check){
            cout<<"Pair #"<<i+1<<": Love is not all you need!";
        }
        cout<<"\n";

    }
}