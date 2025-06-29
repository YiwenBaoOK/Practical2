#include <iostream>
#include <string>
#include "Pie.h"
#include "ApplePie.h"
#include "ApricotPie.h"
#include "RaspberryPie.h"
using namespace std;

int main(){
	//ApplePie app;
	//cout << app.description() << endl;
	//RaspberryPie rap;
	//cout << rap.description() << endl;


	Pie* piePtr = nullptr;
	cout << "Which pie would you like to have? 1 for Apple Pie. 2 for Apricot Pie. 3 for Raspberry Pie.";
	int pieChoice = 0;
		cin >> pieChoice;
		if (pieChoice == 1) {
			piePtr = new ApplePie();
			cout << piePtr->description() << endl;
		}
		else if (pieChoice == 2) {
			piePtr = new ApricotPie();
			cout << piePtr->description() << endl;
		}
		else if (pieChoice == 3) {
			piePtr = new RaspberryPie();
			cout << piePtr->description() << endl;
		}
		return 0;
	}
