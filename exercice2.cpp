#include <iostream>

using namespace std;
class shape {
	// les attributs de la classe shape 
	protected :
		float larg ;
		float lang ;
		public :
		shape(float , float la ) ;
		virtual float area()=0 ;
};

shape::shape(float l , float la) {
	this->larg=l ;
	this->lang=la ;
}
class triangle:public shape { // classe fille 1
	public :
		triangle(float x , float y):shape(x,y) { }
			float area() {
				return (larg*lang)/2 ; // calculer l'aire 
			}
		
};

class rectangle:public shape { // classe fille 1
	public :
		rectangle(float x , float y):shape(x,y){
		}
			float area() {
				return (larg*lang) ; // calculer l'aire 
			}
		
};


int main(){
	
	shape *T[2] ;
	T[0]=new triangle(3,2) ;
	T[1]=new rectangle(0,2) ;
	
	cout<<"la surface triangle :"<<T[0]->area()<<endl ;
		cout<<"la surface triangle :"<<T[1]->area()<<endl ;
		return 0 ;
}

