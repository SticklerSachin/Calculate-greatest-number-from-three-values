#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
 cout<<"Enter Value of a: "<<endl;
 cin>>a;
 cout<< " enter the value of b"<<endl;
 cin>>b;
 cout<< " enter the value of c"<<endl;
 cin>>c;
     
     if(a>b){
        cout<<"Greater value is:"<<a<<endl;
     }
     else if(b>c){
        cout<<"Greater value is:"<<b<<endl;
     }
     else if(c>a){
        cout<<"Greater value is:"<<c<<endl;
     }
     else{
        cout<<"greater value is"<<endl;
     }
    return 0;
}
