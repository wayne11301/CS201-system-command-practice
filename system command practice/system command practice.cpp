/*
This is a practice program for multiple filing in C++, the running OS is Windows 10
*/

#include <iostream>
#include "testcase.h"
using namespace std;

int main() {

	string output1, output2, output3; //string for output
	string realstr, expstr; //actual and expected return code as string
	int exp, real; //actual and expected return code as integer
	int passcount = 0; //pass number count

	TestCase testcase1("pause", 0); //initialize 1st test case
	bool pass1 = testcase1.run();  //run function call
	if (pass1 == true) { //determine what text to output
		output1 = "passed";
		passcount++;
	}
	else {
		exp = testcase1.Getexp();
		real = testcase1.Getreal();
		expstr = to_string(exp);
		realstr = to_string(real);
		output1 = "expected " + expstr + " but get " + realstr;
	}
	cout << "pause: " << output1 << endl;

	TestCase testcase2("aaa", 1);  //initialize 2nd test case
	bool pass2 = testcase2.run();
	if (pass2 == true) {
		output2 = "passed";
		passcount++;
	}
	else {
		exp = testcase2.Getexp();
		real = testcase2.Getreal();
		expstr = to_string(exp);
		realstr = to_string(real);
		output2 = "expected " + expstr + " but get " + realstr;
	}
	cout << "aaa: " << output2 << endl;

	TestCase testcase3("echo", 2);  //initialize 3rd test case
	bool pass3 = testcase3.run();
	if (pass3 == true) {
		output3 = "passed";
		passcount++;
	}
	else {
		exp = testcase3.Getexp();
		real = testcase3.Getreal();
		expstr = to_string(exp);
		realstr = to_string(real);
		output3 = "expected " + expstr + " but get " + realstr;
	}
	cout << "echo: " << output3 << endl << endl;

	cout << "Passes= " << passcount << endl << "Fails= " << 3 - passcount << endl;  //total pass/fails output

}