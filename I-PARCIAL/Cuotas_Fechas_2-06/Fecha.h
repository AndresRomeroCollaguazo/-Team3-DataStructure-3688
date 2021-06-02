#pragma once
class Fecha
{
	private:
		int vect[3];
	public:
		Fecha(int, int, int);
		Fecha() = default;
		void setDay(int);
		int getDay();
		void setMonth(int);
		int getMonth();
		void setYear(int);
		int getYear();


};

