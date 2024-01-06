#include<iostream>
#include<climits>
#include<stack>
using namespace std;
char first_non_rep(string input){
    int freq[256]={-1};
    for(int i=0;i<input.size();i++){
        if(freq[input[i]]==-1){freq[input[i]]=i;}
        else{freq[input[i]]=-3;}
    }
    int res=INT_MAX;
    for(int i=0;i<256;i++){
        if(freq[i]>=0){res=min(i,res);}
    }
    return (res==INT_MAX)?'#':input[res];
}
int main(){
    string input;
    cout<<"Enter the string :";
    cin>>input;
    cout<<first_non_rep(input);
    return 0;
}