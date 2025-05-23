#include <iostream>

#include "buyer.hpp"
#include "seller.hpp"

// TODO Currently, this program creates a car buyer and a car seller, and
// has the car seller sell a car to the car buyer. After converting `buyer`
// and `seller` to class templates, modify the below main() function so that
// it instead creates an ice_cream buyer and an ice_cream seller, and has the
// seller sell an ice_cream to the buyer.
int main() {
	buyer b(1000000); // Buyer has a million dollars
	seller s;

	// The seller tries to sell a car to the buyer (which will work if the
	// buyer can afford it)
	bool successful_transaction = s.sell_to(b);
	if (successful_transaction) {
		std::cout << "Seller successfully sold item to buyer" <<
			std::endl;
	} else {
		std::cout << "Buyer could not afford seller's item" <<
			std::endl;
	}

	// TODO Question: What happens if you try to create a seller for
	// a data type that doesn't have a .value member variable? Such as
	// seller<int>, or seller<pokemon>, etc?
	
	// TODO Question: Suppose `s` is of type `seller<ice_cream>`, and
	// `b` is of type `buyer<car>`. What happens if you call
	// s.sell(b)?
}
