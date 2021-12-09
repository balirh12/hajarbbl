#include <iostream>
using namespace std;
class Media {//creation de class mere Media
public:
//les methodes 
virtual void imprime();
virtual char *id();
protected:
string titre;
};
class Livre: public Media {//sous classe de Media 
public:
Livre() {}//les methode
private:
string auteur, editeur, isbn;//les variables
};
class Audio: public Media {//sous classe de media
public:
Audio(){}//methode 
};
class CD: public Audio{//sous classe de audio: cd
    private:
    string owner,distrubution;
    int numero , serie;
    public:
    CD(){}

};
class Cassette: public Audio{//sous classe de audio cassette 
    private://les methode  et les variables 
    string owner,distrubution,;
    int numero , serie;
    public:
    Cassette(){}

};
class Disque: public Audio{//sous classe audio :Disque
    private://les methode  et les variables
    string owner,distrubution;
    int numero , serie;
    public:
    Disque(){}

};
class presse: public Media {//sous classe de Media
     private://les methode  et les variables
    string type_de_presse,company ;
    
    public:
  presse(){}
};
class Magazin: public Presse{//sous classe de Presse
private://les methode  et les variables
int id;
string type,entete;
public:
Magazin(){}
};
class journal :public presse{//sous classe de presse
    private://les methode  et les variables
    int id ;
    string journaliste ,chef ,edition;
    public:
    journal(){}
}
