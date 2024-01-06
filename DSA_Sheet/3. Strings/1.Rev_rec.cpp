#include<iostream>
#include<string>
using namespace std;
void reverse(string input){
    if(input.size()==0){return;}
    reverse(input.substr(1));
    cout<<input[0];
}
int main(){
    string input;
    cout<<"Enter the input string :";
    cin>>input;
    reverse(input);
    return 0;
}