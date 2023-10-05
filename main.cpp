#include <iostream>
#include "extra-task-1.h"
#include <assert.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	
    double eps = DBL_EPSILON;
	//Task1
    assert(abs(seconds_difference(1800.0, 3600.0) - 1800.0) < eps);
    assert(abs(seconds_difference(3600.0, 1800.0) + 1800.0) < eps);
    assert(abs(seconds_difference(1800.0, 2160.0) - 360.0) < eps);
    assert(abs(seconds_difference(1800.0, 1800.0) - 0.0) < eps);
    cout << "����� task1 ������" << endl;

    //Task2
    assert(abs(hours_difference(1800.0, 3600.0) - 0.5) < eps);
    assert(abs(hours_difference(3600.0, 1800.0) + 0.5) < eps);
    assert(abs(hours_difference(1800.0, 2160.0) - 0.1) < eps);
    assert(abs(hours_difference(1800.0, 1800.0) - 0.0) < eps);
    cout << "����� task2 ������" << endl;
    



	system("pause");
}