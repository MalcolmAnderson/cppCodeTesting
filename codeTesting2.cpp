// codeTesting2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class RunnerInfo {
public:
	void SetTime(int timeRunSecs);
	void SetDistance(double distRunMiles);
	double GetSpeedMph() const;
private:
	int timeRun;
	double distRun;
};

void RunnerInfo::SetTime(int timeRunSecs) {
	timeRun = timeRunSecs;
	return;
}

void RunnerInfo::SetDistance(double distRunMiles) {
	distRun = distRunMiles;
	return;
}

double RunnerInfo::GetSpeedMph() const {
	cout << "timeRun = " << timeRun<<endl;
	cout << "distRun = " << distRun<<endl;
	cout << "timeRun / 3600 = " << (timeRun / 3600)<<endl;
	double percentOfAnHourRun = timeRun / 3600;
	double speedInMPH = distRun / percentOfAnHourRun;
	//return distRun / (timeRun / 3600.0);
	return speedInMPH;
}

int main()
{
	RunnerInfo runner1;
	RunnerInfo runner2;
	cout << "setup runner1"<<endl;
	runner1.SetTime(360);
	runner1.SetDistance(1.2);
	cout << endl;

	cout << "setup runner2 "<<endl;
	runner2.SetTime(200);
	runner1.SetDistance(0.5);
	cout << endl;

	cout << "Print Runner1's line" << endl;
	cout << "Runner1's speed in MPH: " << runner1.GetSpeedMph() << endl << endl;
	cout << "Print Runner2's line" << endl;
	cout << "Runner2's speed in MPH: " << runner2.GetSpeedMph() << endl << endl;
	return 0;
}
