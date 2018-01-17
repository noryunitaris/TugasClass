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
	
}
