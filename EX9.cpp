#include<iostream>
using namespace std;

class T {
    private:
       static  int cm;
    public:
         void call(){
             cm++;
             cout<<cm<<endl;
         }

};

int T :: cm=0;

int main(){
    T a,b;
    a.call();
      a.call();
    
}
