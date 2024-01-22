#include<iostream>
using namespace std;
class twostacks{
    private:
        int *arr;
        int size;
        int top1,top2;
    public:
        twostacks(int n){
            size=n;
            arr=new int[n];
            top1=n/2-1;
            top2=n/2;
        }
        void push1(int n){
            if(top1>=0){
                arr[top1]=n;
                top1--;
            }
            else{
                cout<<"Stack Overflow for stack 1"<<endl;
            }
        }
        void push2(int n){
            if(top2<=size-1){
                arr[top2]=n;
                top2++;
            }
            else{
                cout<<"Stack Overflow for stack 2"<<endl;
            }
        }
        int pop1(){
            if(top1<size/2){
                int x=arr[++top1];
                return x;
            }
            else{
                cout<<"Stack Underflow for stack 1"<<endl;
            }
            
        }
        int pop2(){
            if(top2>=size/2){
                int x=arr[--top2];
                return x;
            }
            else{
                cout<<"Stack Underflow for stack 2"<<endl;
            }
        }
        void print(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }     
};
int main(){
    twostacks ts(6); 
    ts.push1(1);
    ts.push1(2);
    ts.push1(3);
    ts.push2(5);
    ts.push2(4);
    cout<<ts.pop1()<<endl;
    cout<<ts.pop2()<<endl;
    ts.print();
    return 0;
}