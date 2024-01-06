#include<iostream>
#include<vector>
#include<string>
using namespace std;
void rev_words(string input){
    vector<string> temp;
    string str="";
    for(int i=0;i<input.size();i++){
        if(input[i]==' '){
            temp.push_back(str);
            str="";
        }
        else{
            str+=input[i];
        }
    }
    temp.push_back(str);
    vector<string> :: iterator iter=temp.end()-1;
    for(iter;iter>=temp.begin();iter--){
        cout<<*iter<<" ";
    }
    cout<<endl;
}
int main(){
    string input;
    cout<<"Enter the input string :";
    getline(cin,input);
    rev_words(input);
    return 0;
}
