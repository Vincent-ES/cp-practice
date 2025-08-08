#include <iostream>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        if(s == "*")
            break;

        int correct = 0;
        int sum = 0;

        for(int i = 1;i<s.length();i++){
            if(s[i] == 'W'){
                sum+=64;
            }
            else if(s[i] == 'H'){
                sum+=32;
            }
            else if(s[i] == 'Q'){
                sum+=16;
            }
            else if(s[i] == 'E'){
                sum+=8;
            }
            else if(s[i] == 'S'){
                sum+=4;
            }
            else if(s[i] == 'T'){
                sum+=2;
            }
            else if(s[i] == 'X'){
                sum+=1;
            }

            if(s[i] == '/'){
                if(sum == 64){
                    correct++;
                }
                sum = 0;
            }
        }

        cout<<correct<<"\n";

    }





}