#include<iostream>
using namespace std;
int atoii(string inp){
    int sign=1,res=0,k=0;
    if(inp[0]=='-'){
        sign=-1;
        k++;
    }
    for(int i=k;i<inp.length();i++){
        res=res*10+(inp[i]-'0');
    }
    return res*sign;
}
int main(){
    string inp;
    cout<<"Enter the input :";
    cin>>inp;
    cout<<atoii(inp);
    return 0;
}