#include<iostream>
using namespace std;
int main(){
    int *p=new int;
    *p=17;
    //cout<<*p<<endl;
    int *q=new int;
    *q=*p;
    *p=27;
    //cout<<*p<<" "<<*q<<endl;
    int *temp=q;
    q=p;
    p=temp;
    cout<<"before delete"<<endl;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;

    delete p;
    delete q;
    cout<<"after delete"<<endl;
    cout<<p<<" and "<<q<<endl;
    cout<<*p<<" and "<<*q;
    return 0;
}
