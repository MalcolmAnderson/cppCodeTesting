
#include <iostream>
#include "RunnerInfo.h"
using namespace std;

void TestRunnerInfo();
void SubClassRunner();


#include <iostream>
#include <string>
using namespace std;

class GenericItem {
public:
	void SetName(string newName) {
		itemName = newName;
	};

	void SetQuantity(int newQty) {
		itemQuantity = newQty;
	};

	void PrintItem() {
		cout << itemName << " " << itemQuantity << endl;
	};

private:
	string itemName;
	int itemQuantity;
};

class ProduceItem : public GenericItem { // Derived from GenericItem
public:
	void SetExpiration(string newDate) {
		expirationDate = newDate;
	};

	string GetExpiration() {
		return expirationDate;
	};

private:
	string expirationDate;
};


int main()
{
	//TestRunnerInfo();
	//PointerMathExample();

	SubClassRunner();

	return 0;

}

void SubClassRunner() {

	GenericItem miscItem;
	ProduceItem perishItem;

	miscItem.SetName("Smith Cereal");
	miscItem.SetQuantity(9);
	miscItem.PrintItem();

	perishItem.SetName("Apples");
	perishItem.SetQuantity(40);
	perishItem.SetExpiration("May 5, 2012");
	perishItem.PrintItem();
	cout << "  (Expires: " << perishItem.GetExpiration() << ")" << endl;
	return;
}


void PointerMathExample() {
	int numbers[5];
	int* p;
	p = numbers;  *p = 10;
	p++;  *p = 20;
	p = &numbers[2];  *p = 30;
	p = numbers + 3;  *p = 40;
	p = numbers;  *(p + 4) = 50;
	for (int n = 0; n < 5; n++)
		cout << numbers[n] << ", ";
	//return 0;

}



void TestRunnerInfo() {
	RunnerInfo runner1;
	RunnerInfo runner2;
	cout << "setup runner1" << endl;
	runner1.SetTime(360);
	runner1.SetDistance(1.2);
	cout << endl;

	cout << "setup runner2 " << endl;
	runner2.SetTime(200);
	runner2.SetDistance(0.5);
	cout << endl;

	cout << "Print Runner1's line" << endl;
	cout << "Runner1's speed in MPH: " << runner1.GetSpeedMph() << endl << endl;
	cout << "Print Runner2's line" << endl;
	cout << "Runner2's speed in MPH: " << runner2.GetSpeedMph() << endl << endl;
}
