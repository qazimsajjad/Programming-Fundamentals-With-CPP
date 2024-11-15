#include <iostream>
#include <iomanip>      // for setw
 using namespace std;
 
 int main() {
 
 	long pop1=2425785, pop2=47, pop3=9761;
 
 	cout<<"Without setw:\n";
 	cout << "LOCATION " << "POP." << endl
 	  	 << "Portcity " << pop1 << endl
 	  	 << "Hightown " << pop2 << endl
 	  	 << "Lowville " << pop3 << endl;
 
 
  	cout<<"\nWith setw:\n";
  	cout << setw(8) << "LOCATION" << setw(12)
 		 << "POPULATION" << endl
 		 << setw(8) << "Portcity" << setw(12) << pop1 << endl
 		 << setw(8) << "Hightown" << setw(12) << pop2 << endl
 		 << setw(8) << "Lowville" << setw(12) << pop3 << endl;
  
 
 
	return 0;
 }
