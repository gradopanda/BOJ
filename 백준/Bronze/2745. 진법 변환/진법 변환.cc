#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    string str;//문자열
    int N;//진법
    cin>>str;
    cin>>N;
    
    int sum=0;
    for(int i=str.length()-1;i>=0;i--){//str.length-1 로 문자열 위치 찾기
        if((int)str[i]<65){//숫자면
            sum+=pow(N,str.length()-1-i)*((int)str[i]-48);

        }
        else if((int)str[i]>=65){//문자면
            sum+=pow(N,str.length()-1-i)*((int)str[i]-55);

        }
        
    }
    cout<<sum;

}
