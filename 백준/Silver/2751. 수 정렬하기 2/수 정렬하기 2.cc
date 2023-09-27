#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int a;
    cin>>N;
    int num[N];
    int temp;
    for(int i=0;i<N;i++){ //입력
        cin>>a;
        num[i]=a;
    }
    sort(num,num+N);
    for(int x=0;x<N;x++){
        cout<<num[x]<<"\n";
    }

    
    
    return 0;
}
