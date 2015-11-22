//Author: Steven Wang    Date: 20151101

#include <iostream>

#include "PutCallParity.h"

using namespace std;

BS::BS(double underlyingPrice, double price, double k, double r, double t, string type)
{
	this->underlyingPrice = underlyingPrice;
	this->price = price;
	this->k = k;
	this->r = r;
	this->t = t;
	this->type = type;
}

double BS::GetUnderlyingPrice()
{
	return this->underlyingPrice;
}

double BS::GetPrice()
{
	return this->price;
}

double BS::Getk()
{
	return this->k;
}

double BS::Getr()
{
	return this->r;
}

double BS::Gett()
{
	return this->t;
}

string BS::GetType()
{
	return this->type;
}
