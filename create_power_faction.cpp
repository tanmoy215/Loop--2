#include<iostream>
using namespace std;
int main(){
   int n,m;
   cout<<"enter number : ";
   cin>>n;
   cout<<"enter  power : ";
   cin>>m;
   int pow=1;
   for(int i=1;i<=m;i++){
    pow = pow*n;
   }
   cout<<n<<" to the power "<<m<<" = "<<pow;
    return 0;
}