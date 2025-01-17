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
    
    //Task3
    assert(abs(to_float_hours(0, 15, 0) - 0.25) < eps);
    assert(abs(to_float_hours(2, 45, 9) - 2.7525) < eps);
    assert(abs(to_float_hours(1, 0, 36) - 1.01) < eps);
    cout << "����� task3 ������" << endl;

    //Task4
    assert(to_24_hour_clock(24) == 0);
    assert(to_24_hour_clock(48) == 0);
    assert(to_24_hour_clock(25) == 1);
    assert(to_24_hour_clock(4) == 4);
    assert(abs(to_24_hour_clock(28.5) - 4.5) < eps);
    cout << "����� task4 ������" << endl;

    //Task5
    assert(get_hours(3800) == 1);
    assert(get_minutes(3800) == 3);
    assert(get_seconds(3800) == 20);
    cout << "����� task5 ������" << endl;

    //Task6
    assert(time_to_utc(+0, 12.0) == 12.0);
    assert(time_to_utc(+1, 12.0) == 11.0);
    assert(time_to_utc(-1, 12.0) == 13.0);
    assert(time_to_utc(-11, 18.0) == 5.0);
    assert(time_to_utc(-1, 0.0) == 1.0);
    assert(time_to_utc(-1, 23.0) == 0.0);
    cout << "����� task6 ������" << endl;
    
    system("pause");
}