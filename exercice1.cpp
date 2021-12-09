#include <iostream>
using namespace std;
class MyClass {
    string nom ; //par defaut privee
public:
    MyClass() ;
    ~MyClass() ;
};
MyClass :: MyClass()
{
    cout<< "entrer votre nom " <<endl;
    cin >> nom ;
    cout << "bonjour monsieur: " << nom << endl;
}
MyClass :: ~MyClass()
{
    cout << "aurevoir monsieur: " << nom << endl;
}
int main(void) {
    MyClass e1 ;

    return 0;}
