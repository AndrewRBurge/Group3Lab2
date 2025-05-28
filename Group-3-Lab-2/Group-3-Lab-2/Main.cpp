
#include <iostream>
#include <cmath>
using namespace std;

#define MAXTRUCKS 5
#define ZERO 0;
#define DEFAULT "unassigned"

//test classes
class driver{
public:
	string FirstName;
	string lastName;
	int id;
};

class location {
public:
	int x;
	int y;

};

// truck class
class Truck {

	driver d;
	location TruckLoc;
public:
	int id;

	Truck() {
		d.FirstName = DEFAULT;
		d.lastName = DEFAULT;
		d.id = ZERO;
		id = ZERO;
		TruckLoc.x = ZERO;
		TruckLoc.y = ZERO;
	}

	Truck(string first, string last, int driverID, int i, int x,int y) {
	
		d.FirstName = first;
		d.lastName = last;
		d.id = driverID; 
		id = i;
		TruckLoc.x = x;
		TruckLoc.y = y;


	}

	int Setid(int i) {
		id = i;
	}



	// will calcuated this trucks distance from TruckB
	double distanceFrom(Truck TruckB) {
		double z;
		double a = pow(TruckLoc.x - TruckB.TruckLoc.x, 2);
		double b = pow(TruckLoc.y - TruckB.TruckLoc.y, 2);
		z = sqrt(a + b);
		return (z);
	}
	double distanceFrom(location location) {
		double z;
		double a = pow(TruckLoc.x - location.x, 2);
		double b = pow(TruckLoc.y - location.y, 2);
		z = sqrt(a + b);
		return (z);
	}

};



int main(){
	//Truck truck[MAXTRUCKS];
	
	Truck truck1("Liz", "Brian", 35, 178534, 2, 3);
	Truck truck2("Mike", "Smith", 69, 245817, 5, 2);

	location origin;
	origin.x = 0;
	origin.y = 0;

	cout << "The distance between the two trucks is:" << truck1.distanceFrom(truck2) << "\n";
	cout << "The distance between the truck (with ID = 178534) and the origin is:" << truck1.distanceFrom(origin) << "\n";
	cout << "The distance between the truck (with ID = 245817) and the origin is:" << truck2.distanceFrom(origin) << "\n";

	/*
The output of your code must be the three required distances as follows:
The distance between the two trucks is:?
The distance between the truck (with ID = 178534) and the origin is: ?
The distance between the truck (with ID = 245817) and the origin is: ?
	*/
}