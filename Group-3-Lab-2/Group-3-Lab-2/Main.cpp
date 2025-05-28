
#include <iostream>
#include <cmath>
using namespace std;


//test classes
class driver{

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

	int Setid(int i) {
		id = i;
	}

	// will calcuated this trucks distance from TruckB
	int distanceFrom(Truck TruckB) {
		int z;
		int a = pow(TruckLoc.x - TruckB.TruckLoc.x, 2);
		int b = pow(TruckLoc.y - TruckB.TruckLoc.y, 2);
		z = sqrt(a + b);
		return (z);
	}
	int distanceFrom(location location) {
		int z;
		int a = pow(TruckLoc.x - location.x, 2);
		int b = pow(TruckLoc.y - location.y, 2);
		z = sqrt(a + b);
		return (z);
	}

};



void main(){
	Truck truck[2];
	
	truck[1].id = 77;
	cout << "The distance between the two trucks is:";
	cout << "The distance between the truck (with ID = 178534) and the origin is:";
	cout << "The distance between the truck (with ID = 245817) and the origin is:";

	/*
The output of your code must be the three required distances as follows:
The distance between the two trucks is:?
The distance between the truck (with ID = 178534) and the origin is: ?
The distance between the truck (with ID = 245817) and the origin is: ?
	
	
	
	*/
}