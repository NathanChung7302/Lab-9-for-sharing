#ifndef SELLER_HPP
#define SELLER_HPP

#include "car.hpp"
#include "buyer.hpp"

// TODO This currently represents a person who sells cars. Convert it into a
// class template where a seller<T> is a person who sells things of type T.
class seller {
private:
	int money = 0; // The amount of money the seller has earned, starts at 0

	// Pretend the seller has infinite cars to sell (just to keep things
	// simple, no std::vector<car> here to keep track of).
public:
	// Remember: Since this will be a class template, the member functions
	// must be defined directly within the header file here
	
	// A seller can sell a car to a buyer
	bool sell_to(buyer& b) {
		// Seller "generates" a car to sell (again, pretend the seller
		// has infinite cars)
		car c;
		c.value = 10000;

		if (b.buy(c)) {
			// The buyer was able to afford the car, so they
			// bought it. Increase the seller's money accordingly
			this->money += c.value;
			return true; // Successfully sold!
		}

		// Else, the buyer didn't buy it, so don't increase money
		return false; // Failed to sell a car
	}
};

#endif
