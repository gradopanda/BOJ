#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int N,num;
    int flag =-1; //상태 확인 변수
    stack<int> a; //stack 선언
    string str; //명령어 받을 변수
    int temp;  //결과값 임시 저장 변수
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>str;
        if(str == "push"){
            cin>>num;
            a.push(num);
        }
        else if(str == "top"){
            if(a.size()==0){ //비어있으면 -1 출력
                flag=-1;
                cout<<flag<<"\n";
            }
            else{//차있으면, 맨 위에 것 출력
                temp = a.top();
               cout<<temp<<"\n"; 
            }
            
            
        }
        else if(str == "size"){
            cout<<a.size()<<"\n";
        }
        else if(str =="empty"){
            if(a.size()==0){//비어있으면 참
                flag = 1;
                cout<<flag<<"\n";
            }
            else{ //비어있지 않으면 거짓
                flag = 0;
                cout<<flag<<"\n";
            }
            
        }
        else if(str =="pop"){
            if(a.size()==0){
                flag = -1;
                cout<<flag<<"\n";
            }
            else{
                temp = a.top();
                cout<<temp<<"\n";
                a.pop();
            }
        }
    }

    return 0;
}
