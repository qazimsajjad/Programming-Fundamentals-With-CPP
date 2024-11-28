 #include <iostream>
 using namespace std;
 int main() {
 	
 	int choice;     	// Stores selection value       

 	cout << "Your electronic recipe book is at your service.\n"
 		 << "You can choose from the following delicious dishes:\n"
 		 << "1  Boiled eggs\n"
 		 << "2  Fried eggs\n"
 		 << "3  Scrambled eggs\n"
 		 << "4  Coddled eggs\n\n"
 		 << "Enter your selection number: ";
 	cin >> choice;
 	
 	switch (choice) {
 		case 1:
 			cout << "Boil some eggs." << endl;
 			break;
 			
 		case 2:
			cout << "Fry some eggs." << endl;
 			break;
 			
 		case 3:
			cout << "Scramble some eggs." << endl;
 			break;
 
  		case 4:
			cout << "Coddle some eggs."  << endl;
 			break;
 			
 		default:
		cout << "You entered a wrong number - try raw eggs." << endl;
 	}
 }
