#include<iostream>
#include<vector>
using namespace std;
vector<int> fun(vector<int> arr1,vector<int> arr2){
    vector<int> arr3(arr1.size() + arr2.size());
    for(int i=0;i<arr1.size();i++){
        arr3[arr2.size()+i]=arr1[i];
    }
    int i=0,j=0,k=0;
    while(i<arr1.size() || j<arr2.size()){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<arr1.size()){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<arr2.size()){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    return arr3;
}
int main(){
    int size;
    cout<<"Enter the size of array-1 :";
    cin>>size;
    vector<int> arr1(size);
    cout<<"Enter the elements of array-1 :"<<endl;
    for(int i=0;i<arr1.size();i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of array-2 :";
    cin>>size;
    vector<int> arr2(size);
    cout<<"Enter the elements of array-2 :"<<endl;
    for(int i=0;i<arr2.size();i++){
        cin>>arr2[i];
    }
    vector<int> arrans=fun(arr1,arr2);
    for(int i=0;i<arrans.size();i++){
        cout<<arrans[i]<<" ";
    }
    return 0;
}