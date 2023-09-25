
#include <iostream>

using namespace std;

int main()
{
    int N;
    int cut;
    int a;
    cin>>N>>cut;
    int num[N];
    int temp;
    for(int i=0;i<N;i++){ //입력
        cin>>a;
        num[i]=a;
    }
    //정렬
    for(int j=0;j<N-1;j++){
        for(int k=0;k<N-j-1;k++){
            if(num[k]>num[k+1]){
                temp=num[k];
                num[k]=num[k+1];
                num[k+1]=temp;
            }
        }
    }
    
    cout<<num[N-cut];

    
    
    return 0;
}
