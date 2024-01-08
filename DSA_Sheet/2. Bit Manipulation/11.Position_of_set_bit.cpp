#include<iostream>
using namespace std;
bool Power_of_2(int n){
    while(n>1){
        if(n%2==1){return false;}
        else{n/=2;}
    }
    return true;
}
int position_of_setbit(int n){
    if(!(Power_of_2(n))){return -1;}
    else{
        int count=1;
        while(!(n&1)){
            n>>=1;
            count++;
        }
        return count;
    }
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<position_of_setbit(n);
    return 0;
}