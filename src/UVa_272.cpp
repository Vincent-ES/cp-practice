#include <iostream>
#include <string>
using namespace std;
int main(){

    string a;
    bool left = true;
    while(getline(cin, a)){
        for(int i = 0;i<a.length();i++){
            if(a[i] == '"'){
                if(left){
                    cout<<"``";
                    left = false;
                }
                else{
                    cout<<"''";
                    left = true;
                }
            }
            else{
                cout<<a[i];
            }
        }
        cout<<"\n";
    }

}