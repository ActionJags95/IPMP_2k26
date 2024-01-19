#include<iostream>
using namespace std;
void Length_encoding(string inp){
    int n=inp.length();
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n && inp[i]==inp[i+1]){
            i++;
            count++;
        }
        cout<<inp[i]<<" "<<count<<endl;
    }
}
int main(){
    string inp;
    cout<<"Enter the string :";
    cin>>inp;
    Length_encoding(inp);
    return 0;
}