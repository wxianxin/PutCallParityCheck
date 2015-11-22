//Author: Steven Wang    Date: 20151101

#ifndef PUTCALLPARITY_H_
#define PUTCALLPARITY_H_

#include <iostream>

using namespace std;

class BS {
private:
	double underlyingPrice;
	double price;
	double k;
	double r;
	double t;
	string type;

public:
	BS(double underlyingPrice, double price, double k, double r, double t, string type);

	double GetUnderlyingPrice();

	double GetPrice();

	double Getk();

	double Getr();

	double Gett();

	string GetType();
};

#endif