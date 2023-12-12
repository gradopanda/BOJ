#include <iostream>

using namespace std;

int main(){
    int N;
    int cnt_3=0;
    cin>>N;
    while(N>=4){
        if(N%5==0){//5로 나뉘어지면 5kg 봉투로 배달하면 됨
            cout<<N/5+cnt_3;
            break;
        }
        else{//5로 나뉘어지는 수가 아니면 3 빼고 다시 5로 나누어보기
            N-=3;
            cnt_3++;
        }        
    }
    if(N==1 or N==2){
        
        cout<<"-1";
    }
    else if(N==3){
        cout<<N/5+cnt_3+1;
    }

}