#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter number : ";
   cin>>n;
   int sum=0,rer=0;
   while(n!=0){
    rer = n%10;
    sum=sum*10+(rer);
    n=n/10;
   }
   cout<<"reverse of this number : "<<sum;
    return 0;
}