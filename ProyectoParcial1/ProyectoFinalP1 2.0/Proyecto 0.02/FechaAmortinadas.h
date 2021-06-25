#pragma once
class FechaAmortinadas
{
private:
	int vect[3];
public:
	FechaAmortinadas(int, int, int);
	FechaAmortinadas() = default;
	void setDay(int);
	int getDay();
	void setMonth(int);
	int getMonth();
	void setYear(int);
	int getYear();

};

