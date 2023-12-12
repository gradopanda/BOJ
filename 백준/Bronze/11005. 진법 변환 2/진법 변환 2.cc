#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int N,B;
    string str;//진법으로 표현하기 위한 문자열
    int num;
    int vector_size;
    vector<int> num_vector;//배열 대신 벡터 선언 
    cin>>N>>B; 
    for(int i=0;N>0;i++){ 
        num_vector.push_back(N%B);
        N/=B;
    }
    
    vector_size = num_vector.size();

    for(int j=vector_size-1;j>=0;j--){
        if(num_vector[j]>=10){
            cout<<(char)(num_vector[j]+55);
        }
        else{
            cout<<num_vector[j];
        }
    }
    
    
    
    
    
}