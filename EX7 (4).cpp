#include<iostream>
#include<math.h>
using namespace std;
class Vecteur{
	private:
		float x,y,w;
	public:
		Vecteur(float x=0,float y=0,float w=0) // les donées 
		{
			this->x=x;
			this->y=y;
			this->w=w;
		}
		void Afficher() // fonction d'affichage 
		{
			cout<<"("<<x<<","<<y<<","<<w<<")"<<endl;
		}
		Vecteur Somme(Vecteur A) // la sommation 
		{
			Vecteur B;
			B.x=x+A.x;
			B.y=y+A.y;
			B.w=w+A.w;
			return A;
		}
		float Produit(Vecteur C)
		{
			float p;
			p=x*C.x+y*C.y+w*C.w;
			return p;
		}
		bool Coincide(Vecteur Z)
		{
			if(x==Z.x && y==Z.y && w==Z.w);
			  return true;
			return false;
		}
		float Norme(Vecteur N)
		{
			float n;
			n= sqrt(x*x+y*y+w*w);
			return n;
		}
		
};
int main()
{
	float d;
	Vecteur M(3,4,-5) , N(10,-5,6) , O;
	M.Afficher();
	O=N.Somme(M);
	O.Afficher();
	d=M.Produit(N);
	cout<<"le produit est"<<d<<endl;
	 
	if(M.Coincide(N)==true){
		cout<<"M et N se coincide"<<endl;
	}
	
	else{
		cout<<"M et N ne se coinside pas"<<endl;
	}
	
	
}
