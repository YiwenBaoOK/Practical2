#include <iostream>
#include <string>
#include "Pie.h"
#include "ApplePie.h"
#include "RaspberryPie.h"
using namespace std;

int main(){
	ApplePie app;
	cout << app.description() << endl;
	RaspberryPie rap;
	cout << rap.description() << endl;
	return 0;
}