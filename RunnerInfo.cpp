#include "RunnerInfo.h"

#include <iostream>
using namespace std;



void RunnerInfo::SetTime(int timeRunSecs) {
	timeRun = timeRunSecs;
	return;
}

void RunnerInfo::SetDistance(double distRunMiles) {
	distRun = distRunMiles;
	return;
}

double RunnerInfo::GetSpeedMph() const {
	cout << "timeRun = " << timeRun << endl;
	cout << "distRun = " << distRun << endl;
	cout << "timeRun / 3600 = " << ((double)timeRun / 3600) << endl;
	double percentOfAnHourRun = (double)timeRun / 3600;
	double speedInMPH = distRun / percentOfAnHourRun;
	//return distRun / (timeRun / 3600.0);
	return speedInMPH;
}

