#include <iostream>
using namespace std;

int func(int a, int b){
    int max_=0;
    int count = 1;
    for(int i = a;i<=b;i++){
        int n = i;
        while(n!=1){
            if(n%2){
                n = 3*n + 1;
            }
            else
                n /= 2;
            count++;
        }
        if(max_<count){
            max_ = count;
        }
        count = 1;
    }
    return max_;
}

int main(){
    int a,b;
    while(cin>>a>>b){
        cout<<a<<" "<<b<<" ";
        if(a>b){
            swap(a,b);
        }
        cout<<func(a,b);
        cout<<"\n";
    }
}