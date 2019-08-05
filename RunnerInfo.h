#pragma once

class RunnerInfo {
public:
	void SetTime(int timeRunSecs);
	void SetDistance(double distRunMiles);
	double GetSpeedMph() const;
private:
	int timeRun;
	double distRun;
};
