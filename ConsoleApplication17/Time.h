#pragma once
#include <fstream>
#include <iostream>
using namespace std;
struct Time
{
	int hour;
	int minute;
	bool is_valid() const;

	friend std::istream& operator>>(std::istream& ist, Time& time);
	friend std::ostream& operator<<(std::ostream& ost, Time& time);

private:
	static bool is_valid(int hh, int minut);
};
