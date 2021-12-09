#include <iostream>
#include <string>
using namespace std;
int choice;
int r ;
int i ;
int R1,im1;
int R2,im2;
class complex {
    public :
complex(){
        cout << " veuillez entrer la partie imaginaire du premier complexe"<<endl;
        cin >> im1 ;
        cout << " veuillez entrer la partie reele du premier complexe"<<endl;
        cin >> R1 ;
        
        cout << "complex 1: "  << R1<< "+ i * " << im1 << endl;
        cout << "entrer la partie imaginaire du deuxieme complexe"<<endl;
        cin >> im2 ;
        cout << "entrer la partie reele du deuxieme complexe"<<endl;
        cin >> R2 ;
        cout << "complex 2: "  << R2<< "+ i * " << im2 << endl;
        cout << "veuillez choisir une operation du menu suivant :"<<endl;
        string menu[4];   //DÃ©claration du tableau
        menu[0] = "1. +" ;  //Remplissage de la première case du tableau
        menu[1] = "2. -";  //Remplissage de la deuxième case du tableau
        menu[2] = "3. * ";   //Remplissage de la troisème case du tableau
        menu[3] = "4. / ";   //Remplissage de la quatrième case du tableau
        
        for(int i(0); i<4; ++i)
        {
            cout << menu[i] << endl;
        }
        cin >> choice ;
       }
    void operation()
     {
     if (choice == 1 ){
            r = R1+R2 ;
            i = im1+im2 ;
         
           
           cout << "SOMME EST : " << r<< "+ i * " << i << endl;
     }
       else if (choice == 2){
           r = R1-R2 ;
           i = im1-im2 ;
        
          // la soustraction
          cout << "SOUSTRACTION EST : " << r<< "+ i * " << i << endl;
           
       }
        else if (choice == 3)
        {   r = R1*R2 - im1* im2 ;
            i = R1*im2+im1*R2 ;
            cout << "PRODUIT EST : " << r<< "+ i * " << i << endl;
        }
        
    
      else
       { r = R1*R2+im1*im2 / R1^2+im2^2;
        i = im1*R2 -R1*im2 /R1^2+im2^2;
           cout << "LA DIVISION EST : " << r<< "+ i * " << i << endl;
           
        }
    }
};
int main(){
    complex c1 ;
    c1.operation();
    return 0;
}
