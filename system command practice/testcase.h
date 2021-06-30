
#include<iostream>
#include<string>
using namespace std;

//class with 2 fields, 1 string for system command and 1 integer for expected return code 
class TestCase {
	string command; //system function command
	int returncode; //expected return code
public:
	//constructor for the class, initialize the two fields accordingly
	TestCase(string command, int returncode) {
		this->command = command;
		this->returncode = returncode;
	}
	bool run() {
		const char* temp = command.c_str(); //convert string to const char* for system function
		int realcode = system(temp); //system function call
		if (realcode == returncode) { //if expected = actual, return true
			return true;
		}
		else { //otherwise false
			return false;
		}
	}
	int Getreal() { //return the actual return code as an integer
		const char* temp = command.c_str();
		int realcode = system(temp);
		return realcode;
	}
	int Getexp() { //return the expected return code as an integer
		return returncode;
	}

};