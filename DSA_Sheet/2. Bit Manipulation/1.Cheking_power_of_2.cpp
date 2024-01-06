#include<iostream>
using namespace std;
bool Power_of_2(int n){
    while(n>0){
        if(n%2==0){return true;}
        else if(n%2==1){return false;}
        else{n/=2;}
    }
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<Power_of_2(n);
    return 0;    
}