#include<iostream>
using namespace std;
int first_non_rep_char(string inp){
    int arr[128]={0},index=-1;
    for(int i=0;i<inp.size();i++){
        arr[inp[i]]++;
    }
    for(int i=0;i<inp.size();i++){
        if(arr[inp[i]]==1){
            index=i;
            break;
        }
    }
    return index;
}
int main(){
    string inp;
    cin>>inp;
    cout<<inp[first_non_rep_char(inp)];
    return 0;
}