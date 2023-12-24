#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Displaying the Vector"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec1; // Zero length vector
    //display(vec1);
    vector<int> vec2(4); // Integer vector of length 4
    vector<char> name(10); // character vector of length 10
    name.push_back('a');
    vector<char> hello(name); // 10 element character vector from name
    //display(hello);
    vector<int> cont(5,2); // 5 element vector with all elements as 2
    display(cont);
    vector<int> :: iterator iter=vec1.begin();
    while(iter!=vec1.end()){
        cout<<*iter<<" ";
        iter++;
    }
    //altdisplay(vec1);
    return 0;
}