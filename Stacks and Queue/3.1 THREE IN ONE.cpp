// Approaches for **3.1 THREE IN ONE**

Approach 1:
//We can consider the fixed size array each of n/3 size.
//this is easy to implement
//INEFFICIENT USE OF ARRAY SPACE

Approach 2:
//Flexible size 
**Implementing k stacks in a array**

`#include <bits/stdc++.h>
using namespace std;

//let's consider the array size as 100
#define n 100
int nextval[100];
int top[10];
class kstacks{
public:               
    //original array 
    int arr[100];
    int flag=0;
    // to check is stack empty
    bool isempty(int i){
        return top[i]==-1;
    }

    //TO check is stack full
    bool isfull(){
        return flag==-1;
    }
    //Function to push an element
    void push(int data, int st){
        if(isfull()){
            cout<<"Overflow"<<endl;
            return;
        }
        //flag give's the index where to store data
        int i=flag;
        //increment the flag
        flag=nextval[i];
        //now update the nextval
        nextval[i]=top[st];
        //update top
        top[st]=i;
        arr[i]=data;
    }
    //Function to pop an element

    int pop(int st){
        if(isempty(st)){
            cout<<"Underflow";
            return -1;
        }
        int i=top[st];
        top[st]=nextval[i];
        nextval[i]=flag;
        flag=i;
        int val=arr[i];

        return val;
    }
};
int main() {
    for (int i = 0; i < n-1; i++)
    {
        nextval[i]=i+1;
    }
    nextval[99]=-1;
    //storing top of each stack
    for(int i=0;i<10;i++){
        top[i]=-1;
    }
    kstacks add;
    add.push(2,2);
    add.push(1,2);
    add.push(10,9);
    cout<<add.pop(2);
    return 0;
}
`