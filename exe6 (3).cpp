#include <iostream>
#include <string>
using namespace std;
class Personne{
private:
string nom ;
string prenom;
int datedenaissance;
public:
Personne(string n,string p,int d  ):nom{n},prenom{p},datedenaissance{d}{

}
 virtual void afficher()
 {
     cout<<"Nom: "<<nom<<endl<<"Prenom: "<<prenom<<endl<<"date de naissance: "<<datedenaissance<<endl;
 }
};
class Employe : Personne
{
    private:
    double salaire;
    public:
    Employe(string n,string p,int d,double s):Personne(n,p,d){ 
        salaire = s;
    }
  void afficher(){
        Personne::afficher();
         cout<<"salaire : "<< salaire <<endl;
    }
};
class Chef : Employe{
    private :
    string service ;
    public:
    Chef(string n,string p ,int d ,double s ,string ser):Employe(n,p,d,s){
       service=ser;


    }
  void  afficher(){
Employe::afficher();
cout<<"service  : "<< service <<endl;
    }
};
class Directeur : Chef{
private:
     string societe;
     public:
     Directeur(string n,string p ,int d ,double s ,string ser,string soc):Chef(n,p,d,s,ser){
         societe=soc;
     }
   void  afficher(){
         Chef::afficher();
         cout<<"societe : "<< societe <<endl;
     }
};
int main(){
    Directeur dir("hajar","balirh",2002,100000,"oui","oui");
    dir.afficher();
    return 0;
}
