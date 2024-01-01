#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
long long int idx(vector<int> arr){
    int i=0;
    for(i;i<INT_MAX;i++){
        if(arr[pow(2,i)]==1){
            break;
        }
    }
    int k=lower_bound(arr[pow(2,i-1)],arr[pow(2,i)],1);
    return k;
}
int main(){
    vector<int> arr(INT_MAX);
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<INT_MAX;i++){
        cin>>arr[i];
    }
    cout<<idx(arr);
    return 0;
}