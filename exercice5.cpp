#include <iostream>
using namespace std;

class Animal{ // classe mère : animal

public:
	const char* name;
	int age;
	Animal(const char* myname) : name (myname){};
	void set_value(int age_value){age = age_value;};	
};

class Zebra : public Animal{ // classe fille : zebra 
public:
	const char* origine;
	Zebra (const char* myname, const char* myorigin) : Animal (myname), origine (myorigin){};
	void display_info(){cout << "je suis: "<< name << " , mon age est: " << age << " et je suis de : "<< origine<< endl;};

};

class Dolphin : public Animal{ // classe fille : dolphin 
public:
	const char* origine;
	Dolphin (const char* myname, const char* myorigin) : Animal (myname), origine (myorigin){};
	void display_info(){cout << "je suis: "<< name << " , mon age: " << age << " je suis de : "<< origine<< endl;};

};

int main()
{	
	const char* name = "hajar";
	const char* origine = "casablanca";
	Zebra zeb(name, origine);
	zeb.set_value(23);
	zeb.display_info();
	return 0;
}
