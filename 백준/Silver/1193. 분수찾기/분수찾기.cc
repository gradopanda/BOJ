#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    
    int cnt=1;
    while(N>cnt){//N에서 1,2,3,4,5,...를 순서대로 빼가며 마지막 남은 나머지 확인
        N-=cnt;
        cnt++;
    }
    
    if(cnt%2==0){//짝수줄이면
        
        cout<<N<<"/"<<cnt+1-N;
    }
    else{
        cout<<cnt+1-N<<"/"<<N;
    }
    
}