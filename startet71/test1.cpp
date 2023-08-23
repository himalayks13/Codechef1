#include<bits/stdc++.h>
using namespace std;

int main(){
   // int sum=0;
   // int count=0;
    int countofzero=0;
    int evennum=0;
    int secondlargest=INT_MIN;
    int largest=INT_MIN;
    int num=0;
    while(num!=-1){
        cin>>num;
        if(num==0){
            countofzero++;
        }
        if(num%2==0){
            evennum=evennum+ num;
        }
        
        if(num%2!=0 && num>largest){
            largest=num;
            secondlargest=num;
        }
        
        
        
    }
    cout<<countofzero<<" "<<evennum<<" "<<secondlargest<<endl;
}