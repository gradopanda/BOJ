
#include <iostream>

using namespace std;

int main()
{
    int a;
    int num[5];
    int avg;
    int mid;
    int temp;
    int sum=0;
    for(int i=0;i<5;i++){ //입력
        cin>>a;
        num[i]=a;
        sum+=a;
    }
    avg = sum/5; //평균값
    //정렬
    for(int j=0;j<4;j++){
        for(int k=0;k<5-j-1;k++){
            if(num[k]>num[k+1]){
                temp=num[k];
                num[k]=num[k+1];
                num[k+1]=temp;
            }
        }
    }
    mid = num[2];//중앙값
    cout<<avg<<"\n"<<mid;
    
    
    return 0;
}
