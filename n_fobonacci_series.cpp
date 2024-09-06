#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter number : ";
   cin>>n;
   int t1=0,t2=1;
   int next =t1+t2;
   cout<<"Fibonacci Series : "<<t1<<","<<t2;
   int i=3;
   while(i<=n){
    cout<<","<<next;
    t1=t2;
    t2=next;
    next=t1+t2;
    i++;
   }
    return 0;
}