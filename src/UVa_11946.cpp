#include <iostream>
#include <map>
using namespace std;

int main(){
    map<char, char> a = {
        {'0', 'O'},{'1', 'I'},{'2', 'Z'},{'3', 'E'},
        {'4', 'A'},{'5', 'S'},{'6', 'G'},{'7', 'T'},
        {'8', 'B'},{'9', 'P'}


    };
    int t;
    cin>>t;
    string ss;
    getline(cin, ss);

    for(int i = 0;i<t;i++){
        string s;
        while(getline(cin, s) && s != ""){
            for(int j = 0;j<s.length();j++){
                if(s[j]<='9' && s[j]>='0'){
                    cout<<a[s[j]];
                }
                else
                    cout<<s[j];
            }
            cout<<"\n";
        }
        if(i!=t-1)
            cout<<"\n";
    }
    

}