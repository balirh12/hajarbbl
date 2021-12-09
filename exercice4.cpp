#include <iostream>
using namespace std;
#include<cstring>

class myclass{ // classe mère : myclass
	protected :
		char nom[20] ;
		public :
		void display(char*n) {
		
		cout<<"entrez votre nom"<<endl ;//par l'utilisateur 
		cin>>nom ;
		cout<<"bonjour"<<nom<<endl	;	
			
		}
		
	
	
	
};

class myclass1:public myclass { // classe fille : myclass1 
	public :
		void display() {
			cout<<"entrez votre nom"<<endl ;
			cin>>nom ;
			cout<<"bonsoir"<<nom<<endl ;
		}
};



int main() {
	
	
	myclass1 e1 ;
	e1.display() ;
	
	return 0 ;
} ;
