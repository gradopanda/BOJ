#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int cnt[123]={0,}; //알파벳이 쓰인 개수를 저장하는 공간, 0 초기화
    string s;
    cin>>s;
    int max=0;
    int temp;
    int flag=0;
    int count=0;
    
    for(int i=0;i<s.length();i++){ //문자개수 체크
        if((int)s[i]<97){ //문자가 대문자이면
            s[i]+=32;//소문자로 변환
            cnt[s[i]]+=1;//문자쓰인 횟수 증가
        }
        else{//소문자이면 그대로 횟수증가만
            cnt[s[i]]+=1;
        }
    }
    for(int j=97;j<123;j++){//가장 많이 쓰인 문자 찾기
        if(max<cnt[j]){
            max=cnt[j];
        }
    }
    for(int k=97;k<123;k++){
        if(max==cnt[k]){
            count++;
        }
    }
    
    
    
    
    for(int k=97;k<123;k++){
        if(count>=2){
            cout<<"?";
            break;
        }
        else if(max == cnt[k]){
                temp = k-32;
                cout<<(char) temp;
        }
    }
    
        

    
}

