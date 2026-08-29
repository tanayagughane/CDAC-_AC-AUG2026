//============================================================================
// Name        : Problem4.cpp
// Author      : Tanaya Gughane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//================================================

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char*argv[]){

	if(argc < 4){

	      // usage line
		cout << "Usage : ./sensor_monitor <warn_threshold> <critical_threshold> <num_readings>" << endl;
		 // error line
		cout << "Error : Missing arguments." << endl;
		return 1;
	}

	int warnThreshold = stoi(argv[1]);
	int criticalThreshold = stoi(argv[2]);
	int numReadings = stoi(argv[3]);

	if(warnThreshold >= criticalThreshold || numReadings < 1 || numReadings > 500){
		cout<<"Error : Invalid arguments. "<<endl;
		return 1;
	}

	int normal = 0;
	int warning = 0;
	int critical = 0;
	int shutdown = 0;

	for(int i = 0; i < numReadings; i++){

	      int temp = rand() % 70;

	      if(temp < warnThreshold){
	          normal++;
	      }
	      else if(temp < criticalThreshold){
	          warning++;
	      }
	      else if(temp < 60){
	          critical++;
	      }
	      else{
	          shutdown++;
	      }
	}
	cout << "Config : Warn=" << warnThreshold
	     << " °C   Critical=" << criticalThreshold
	     << " °C   Readings=" << numReadings << endl;

	cout << "Results : Normal:" << normal
	     << "  Warning:" << warning
	     << "  Critical:" << critical
	     << "  Shutdown:" << shutdown << endl;


	return 0;

}



