#include <iostream>

using namespace std; 

class AirlinePassenger { 
 public: 
 	char name[50]; 
 	int age; 
 	string flightNumber;
 	string departureTime;
 	string source; 
 	
 	void storeData() {
 		cout << "Enter Name: " << endl;
 		cin.getline(name,sizeof(name));
 		cout << "Enter age: " << endl;
 		cin >> age;
 		cout << "Flight Number: " << endl;
 		cin >> flightNumber;
 		cout << "Departure Time: " << endl;
 		cin >> departureTime;
 		cout << "Source: " << endl;
 		cin >> source;
 		cout << "Data has been stored";
	 }
 	
 	void showInfo() {
 		cout << "age: " << age<< endl;
 		cout << "name: " << name<< endl;
 		cout << "flight number: " << flightNumber<< endl;
 		cout << "departure time: " << departureTime<< endl;
 		cout << "source: " << source<< endl;	
	 }
};

int main() {
	AirlinePassenger pass1;
	pass1.storeData();
	pass1.showInfo();
}
