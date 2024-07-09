#include<iostream>
using namespace std;
void print(int a,int n){
if (a>n)
{
    return;
}
cout<<a<<endl;
 print(a+1,n);
}
int main(){
int a=1;
int n;
cin>>n;
print(1,n);

}