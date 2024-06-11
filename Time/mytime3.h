// 11.10
//mytime3h -- Trida Time se spratelenymi funkcemi
#ifndef MYTIME_h_3
#define MYTIME_h_3
#include <iostream>

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t) const;
	Time operator-(const Time& t) const;
	Time operator*(double n) const;
	friend Time operator*(double m, const Time& t)
	{
		return t * m;
	}  // inline definice
	friend std::ostream& operator<<(std::ostream& os, const Time& t);
};
#endif

