#include<iostream>
#include<vector>
using namespace std;
int longest_sub(vector<int> arr){
    vector<int> sub_arr;
    sub_arr.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        if(arr[i]>sub_arr.back()){
            sub_arr.push_back(arr[i]);
        }
        else{
            int k=lower_bound(sub_arr.begin(),sub_arr.end(),arr[i])-sub_arr.begin();
            sub_arr[k]=arr[i];
        }
    }
    return sub_arr.size();
}
int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    vector<int> arr(size);
    cout<<longest_sub(arr);
}