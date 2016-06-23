#include <iostream>
using namespace std;
 
int euclid(int a,int s,int b) {
    return (a-s)/b;
}
 
int main() {
    int a,b,sisa;
    cout<<"first number : ";cin>>a;
    cout<<"second number : ";cin>>b;
    if (a > b) {sisa = a%b;} else {sisa = b%a;}
 
    while(sisa > 0) {
        cout<<a<<" = "<<b<<"."<<euclid(a,sisa,b)<<" + "<<sisa<<endl;
        a = b;
        b = sisa;
        sisa = a%b;
    }
    cout<<a<<" = "<<b<<"."<<euclid(a,sisa,b)<<" + "<<sisa<<endl;
    cout<<"PBB : "<<b<<endl;
}
