
#include <iostream>

using namespace std;

int main()
{
    int cnt;

    cin>>cnt;
    int blank_a=cnt;//전반부 공백개수 제어변수
    int star_a=1;//전반부 별개수 제어변수
    int blank_b=1; //후반부 공백개수 제어변수
    int star_b=cnt;//후반부 별개수 제어변수
    
    for(int i=0;i<cnt*2-1;i++){
        
        if(i<cnt){
            for(int j=blank_a-1;j>0;j--){
                cout<<" ";
            }
            for(int k=0;k<star_a;k++){
                cout<<"*";
            }
            star_a+=2;
            blank_a--;
            cout<<"\n";
        }
        else{
            for(int j=0;j<blank_b;j++){
                cout<<" ";
            }
            for(int k=star_b*2-3;k>0;k--){
                cout<<"*";
            }
            star_b-=1;
            blank_b++;
            cout<<"\n";
        }

    }

    return 0;
}
