#include<iostream>
#include<list>
using namespace std;
void display(list<int> &li){
    list<int> :: iterator iter;
    for(iter=li.begin();iter!=li.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1; // Empty list with 0 elements
    list<int> list2(5); // Integer list of size 5 with no elements
    list<int> list3(6,3); // Interger list of 6 elements with each element equal to 3
    list<int> :: iterator iter;
    list1.push_back(4);
    list1.push_back(4);
    list1.push_back(4);
    list1.push_front(5);
    list1.push_front(5);
    list1.push_back(6);
    display(list1);
    iter=list1.begin(); // Iterator always to be initialised to beginning or ending of a container
    iter++;
    iter++;
    //cout<<*iter<<endl;
    //list1.insert(iter,9); // inserts the element before the element pointed by the iterator
    //list1.insert(iter,9,3); // inserts the element 3 before the element pointed by the iterator 9 times
    display(list1);
    list1.pop_front();
    list1.pop_back();
    list1.push_back(7);
    display(list1);
    //list1.remove(4); // removes all instances of element 4
    list1.sort(); // sorts the elements of the list 
    display(list1);
    return 0;
}