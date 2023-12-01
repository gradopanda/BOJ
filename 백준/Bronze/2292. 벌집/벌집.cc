
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int cnt=1;//1부터 6씩 계속 커져서 N이랑 비교
    int room_cnt=1;//거쳐야하는 방의 개수(1번방부터 세면 1)
    int increase = 6;//6씩 커지기
    while(1){
        if(N<=cnt){//cnt가 N보다 같거나 커지면 종료
            break;
        }
        else{
            cnt+= increase;
            increase+=6;
            room_cnt++;
        }
    }
    cout<<room_cnt;
}
