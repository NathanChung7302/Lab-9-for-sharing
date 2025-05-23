#ifndef BUYER_HPP
#define BUYER_HPP

#include <vector>

#include "car.hpp"

// TODO This currently represents a person who buys cars. Convert it into a
// class template where a buyer<T> is a person who buys things of type T.
class buyer {
private:
	int money; // The amount of money the buyer has left
	std::vector<car> cars; // All of the cars that the buyer has bought
public:
	// Remember: Since this will be a class template, the member functions
	// must be defined directly within the header file here
	buyer(int money) : money(money) {}

	bool buy(const car& c) {
		if (c.value > this->money) {
			// Can't afford :(
			return false; // Failed to buy car
		}

		// Can afford :)
		this->money -= c.value;
		this->cars.push_back(c);
		return true; // Successfully bought car
	}
};

#endif
