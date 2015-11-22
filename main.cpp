//Author: Steven Wang    Date:20151101

#include <iostream>

#include "PutCallParity.h"

#include <cmath>

#include <string>

using namespace std;

int CheckPutCallParity(BS option, BS counterOption) {

	if (option.GetType() == "call") {
		if (abs(((option.GetPrice() - counterOption.GetPrice()) - (option.GetUnderlyingPrice() - exp(-option.Getr()*option.Gett())*option.Getk()))) < 0.0001) {
			cout << "Parity holds!" << endl;
			return 1;
		}
		else {
			cout << "Parity does not hold!" << endl;
				return 0;
		}
	}

	if (option.GetType() == "put") {
		if ((counterOption.GetPrice() - option.GetPrice()) - (counterOption.GetUnderlyingPrice() - exp(-counterOption.Getr()*counterOption.Gett())*counterOption.Getk()) < 0.0001) {
			cout << "Parity holds!" << endl;
			return 1;
		}
		else {
			cout << "Parity does not hold!" << endl;
			return 0;
		}
	}

}

int main() {

	double underlyingPrice;
	double price;
	double k;
	double t;
	double r;
	string type;

	cout << "Please input info about a call/put option:" << endl;
		
	cout << "underlying price: " << endl;
	cin >> underlyingPrice;

	cout << "option price: " << endl;
	cin >> price;

	cout << "strike: " << endl;
	cin >> k;

	cout << "time to maturity: " << endl;
	cin >> t;

	cout << "interest rate: " << endl;
	cin >> r;
	
	cout << "option type: " << endl;
	cin >> type;

	BS option(underlyingPrice, price, k, r, t, type);

	cout << "Please input info about a corresponding put/call option:" << endl;

	cout << "underlying price: " << endl;
	cin >> underlyingPrice;

	cout << "option price: " << endl;
	cin >> price;

	BS counterOption(underlyingPrice, price, k, r, t, type);

	CheckPutCallParity(option, counterOption);

	return 0;
}