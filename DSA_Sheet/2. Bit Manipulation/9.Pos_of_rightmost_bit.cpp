#include<iostream>
using namespace std;
int position(int n){
    int count=1;
    while(!(n&1)){
        n>>=1;
        count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<position(n);
    return 0;
}