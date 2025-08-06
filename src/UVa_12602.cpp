#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long value1 = 0, value2 = 0;
        for(int i = 0;i<3;i++){
            value1 += (s[i] - 'A')*pow(26, 2-i);
        }

        for(int j = 0;j<4;j++){
            int digit = s[4+j] - '0';
            value2 += pow(10, 3-j)*digit;
        }

        if(abs(value1-value2) <=100){
            cout<<"nice";
        }
        else
            cout<<"not nice";
        cout<<"\n";
    }





}