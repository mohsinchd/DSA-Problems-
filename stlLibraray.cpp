#include <iostream>
// C++ STL ARRAY Import
// #include <array>

// Vector import 

// #include <vector>

// Deque Import

// #include <deque>
// List Import
// #include <list>

// stack Import

#include <stack>
using namespace std;

int main(){

    // Declaration of STL ARRAY

    // array <int  , 4> a = {1,2,3,4};
    // // size function measures the size of array
    // int size = a.size();

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<a[i];
    // }

    // // at function

    // cout<<"Element at 2nd index is"<<a.at(2)<<endl;
    // // Check Array Empty or Not

    // cout<<"ARRAY is::"<<a.empty()<<endl;

    // // First Element

    // cout<<"First element"<<a.front()<<endl;
    // // Last Element

    // cout<<"Last Element"<<a.back()<<endl;

    // Vector Initialization

    // vector <int> v;

    // cout<<v.capacity()<<endl;

    // v.push_back(1);

    // cout<<v.capacity()<<endl;

    // v.push_back(2);

    // cout<<v.capacity()<<endl;

    // v.push_back(3);

    // cout<<v.capacity()<<endl;

    // DEque

    // deque <int> d;

    // d.push_back(1);
    // d.push_front(2);

    // d.pop_back();

    // int size = d.size();

    // for(int i = 0; i < size ; i++){
    //     cout<<d[i]<<endl;
    // }

    // cout<<"Element At Index 1::"<<d.at(0)<<endl;

// List in STL is implemented by using Doubly Linked LIst

    // list <int> l;

    // // Copy the List to another list

    // list <int> n(l);

    // l.push_back(1);
    // l.push_front(2);

    // for(int i:l){
    //     cout<<i<<endl;
    // }

    // cout<<"size of List"<<l.size()<<endl;


    // Stack

    stack <string> s;
    
    s.push("hello");
    s.push("hello");
    s.push("hello");
    s.push("hello");

    cout<<"Size of Stack is::"<<s.size();

    for(int i:s){
        cout<<i<<endl;
    }




    
    

    return 0;
}