#include <iostream>
#include <string>

using namespace std;
class bajuwanita{
		public :
			int jumlhbaju;
			string allsize;
			void Harga(string total);
};

void bajuwanita::Harga(string total){
	
	cout<< " Harga :"<< total<< endl;
}
int main (){
	bajuwanita blus, shackdress, longdress;
	
	blus.jumlhbaju = 5;
	blus.allsize = "P :70, LB :(6-10), LD :(87-93)";
	shackdress.jumlhbaju = 11;
	shackdress.allsize = "P :(90-94), LB :(6-10), LD :(87-93)";
	longdress.jumlhbaju = 8;
	longdress.allsize = "P :110, LB :(6-10), LD :(87-93)";
	
	cout << "Blus : "<<endl;
	cout << "Jumlah Baju: "<<blus.jumlhbaju<<" kodi"<<endl;
	cout << "Allsize : "<<blus.allsize<<endl;
	
	blus.Harga("Rp.150.000");
	
	cout << ""<<endl;
	
	cout << "Shackdress: "<<endl;
	cout << "Jumlah Baju: "<<shackdress.jumlhbaju<<" kodi"<<endl;
	cout << "Allsize : "<<shackdress.allsize<<endl;
	
	shackdress.Harga("Rp.300.000");
	
	cout << ""<<endl;
	
	cout << "Longdress : "<<endl;
	cout << "Jumlah Baju: "<<longdress.jumlhbaju<<" kodi"<<endl;
	cout << "Allsize : "<<longdress.allsize<<endl;
	
	longdress.Harga("Rp.500.000");	
}
