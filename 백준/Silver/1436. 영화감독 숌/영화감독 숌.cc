
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int num=0;
    int cnt=0;
    int num_check;//666체크를 위해 복사해둘 변수
    while(N != cnt){
        num++;
        num_check = num;

        while(num_check !=0 ){// 10으로 계속 나눠서 0이 될때까지

            if(num_check % 1000==666){
                cnt++;//666을 찾았을 경우
                break;
            }
            else{
                num_check/=10;//6661같은 수를 찾기 위해서 10으로 나누고 다시 체크
            }
            
        }

    }
    cout<<num;
}

