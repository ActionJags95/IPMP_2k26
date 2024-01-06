#include<iostream>
#include<string>
using namespace std;
void occ(string input){
    int freq[256]={0};
    for(int i=0;i<input.size();i++){
        freq[input[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>1){
            cout<<"The character "<<char(i)<<" has occured "<<freq[i]<<" times"<<endl;
        }
    }
}
int main(){
    string input;
    cout<<"Enter the string :";
    getline(cin,input);
    occ(input);
    return 0;   
}