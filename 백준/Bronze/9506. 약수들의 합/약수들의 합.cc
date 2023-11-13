
#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum=0;
    while(1){
        cin>>num;
        if(num==-1){//-1일때 종료
            return 0;
        }
        else{
            sum=0;
            for(int i=1;i<num;i++){
                if(num%i==0){
                    sum+=i;
                }
                
            }//약수 다 합해서 완전수인지 체크
            if(num==sum){ //완전수라면
                sum=0;
                cout<<num<<" "<<"="<<" ";
                for(int i=1;i<num;i++){
                    if(num%i==0){
                       sum+=i; 
                    }
                    
                    if(num%i==0 && sum != num ){
                        cout<<i<<" "<<"+"<<" ";                    
                    }
                    else if(num%i==0 && sum == num){
                        cout<<i<<"\n";
                        
                        break;
                    }
                }   
            }
            else{//완전수가 아니면
                cout<<num<<" is NOT perfect."<<"\n";
                sum=0;
                
                
            }
                
        }
            
            
    }

}
