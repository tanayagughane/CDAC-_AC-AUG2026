//============================================================================
// Name        : problem1.cpp
// Author      : Tanaya Gughane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double temp;
	int StatusCode;
	cout << "Enter Temp in Degree C :";
	cin >> temp;

	if(temp<0){
		StatusCode = -1;
	} else if(temp>=0 && temp<=29){
		StatusCode = 0;
	} else if(temp>=30 && temp<=44){
		StatusCode = 1;
	}else if(temp>=45 && temp<=59){
		StatusCode = 2;
	} else                             //(temp>=60)
		StatusCode = 3;

	switch(StatusCode)

	{

	case -1:
		cout<<"Status: "<<"SENSOR_ERROR"<<endl;
		cout<<"Action: "<<"Sensor fault-check wiring"<<endl;
		break;

	case 0:
			cout<<"Status: "<<"NORMAL"<<endl;
			cout<<"Action: "<<"No action required"<<endl;
			break;

	case 1:
			cout<<"Status: "<<"WARNING"<<endl;
			cout<<"Action: "<<"Alert sent to supervisor"<<endl;
			break;

	case 2:
			cout<<"Status: "<<"CRITICAL"<<endl;
			cout<<"Action: "<<"Cooling system triggered"<<endl;
			break;

	case 3:
			cout<<"Status: "<<"SHUTDOWN"<<endl;
			cout<<"Action: "<<"Emergency shutdown initiated"<<endl;
			break;

	default:
		cout<<"Invalid Status Code";

	}

	double F = temp;
	F = (temp*9/5)+32;

	cout<<"Reading: "<<((temp>25) ? "Above Average" : "Below Average")<<endl;
	cout<<"Temperature in Fahrenheit: "<<F<<" °F";

	return 0;
}
