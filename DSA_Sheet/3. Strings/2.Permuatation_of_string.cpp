#include<iostream>
#include<algorithm>
using namespace std;
void permutations(string input,int l,int r){
    if(l==r){cout<<input<<endl;}
    else{
        for(int i=l;i<=r;i++){
            swap(input[l],input[i]);
            permutations(input,l+1,r);
            swap(input[l],input[i]);
        }
    }
}
int main(){
    string input;
    cout<<"Enter the input string :";
    cin>>input;
    permutations(input,0,input.size()-1);
    return 0;
}