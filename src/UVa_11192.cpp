#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int g;
    while(cin>>g){
        if(g==0){
            break;
        }
        string s;
        cin>>s;
        for(int i = 0; i<s.length(); i+=s.length()/g){
            string s_temp = "";
            for(int j = 0;j<s.length()/g;j++){
                s_temp += s[j+i];
            }
            reverse(s_temp.begin(), s_temp.end());
            cout<<s_temp;
        }
        cout<<"\n";



    }
}