
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int cnt=0;
    int i=0;
    while(i<str.length()){
        if(str[i]=='c'){ //c=,c- 찾기
            if(str[i+1]=='=' or str[i+1]=='-'){
                cnt++;
                i+=2;
            }
            else{//그냥 c인 거면
                cnt++;
                i++;
            }
            
        }
        else if(str[i]=='d'){ //dz=,d- 찾기
            if(str[i+1]=='z' and str[i+2]=='='){
                cnt++;
                i+=3;
            }
            else if(str[i+1]=='-'){
                cnt++;
                i+=2;
            }
            else{//그냥 d인거면
                cnt++;
                i++;
            }
        }
        else if(str[i]=='l' or str[i]=='n'){ //lj,nj 찾기
            if(str[i+1]=='j'){
                cnt++;
                i+=2;
            }
            else{
                cnt++;
                i++;
                
            }
            
        }
        else if(str[i]=='s' or str[i]=='z'){ //s=,z= 찾기
            if(str[i+1]=='='){
                cnt++;
                i+=2;
            }
            else{
                cnt++;
                i++;
            }
            
        }
        else{//그냥 알파벳이면
            cnt++;
            i++;
        }



    }
    cout<<cnt;
    return 0;
}
