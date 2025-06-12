#include <iostream>
#include <vector> // Standard library vector

#include "vector.hpp" // Your custom vector class

int main() {
	std::vector<std::string> std_vector; // Standard library vector
	vector<std::string> custom_vector; // Your custom vector class

	std_vector.push_back("World");
	custom_vector.push_back("World");

	std_vector.insert(std_vector.begin(), "Hello");
	custom_vector.insert(0, "Hello");

	// TODO Comment out the below print statement after finishing part 3
//	std::cout << "Don't forget to comment / uncomment the appropriate " <<
		//"lines after completing part 3 of the lab" << std::endl;

	// TODO Uncomment these lines after finishing part 3
	std::cout << "First element in standard vector: " << std_vector[0] <<
		std::endl;
	std::cout << "First element in your vector: " << custom_vector[0] <<
		std::endl;

	std::cout << "Second element in standard vector: " << std_vector[1] <<
		std::endl;
	std::cout << "Second element in your vector: " << custom_vector[1] <<
		std::endl;
	
	// Your vector copy constructor
	vector<std::string> new_custom_vector = custom_vector;
	
	// TODO Uncomment these lines after finishing part 3
	std::cout << "First element in your copy-constructed vector: " <<
		new_custom_vector[0] << std::endl;
	std::cout << "Second element in your copy-constructed vector: " <<
		new_custom_vector[1] << std::endl;
	

	// Your vector AOO
	new_custom_vector = custom_vector;
	
	// TODO Uncomment these lines after finishing part 3
	std::cout << "First element in your AOO-copied vector: " <<
		new_custom_vector[0] << std::endl;
	std::cout << "Second element in your AOO-copied vector: " <<
		new_custom_vector[1] << std::endl;
	// My extra credit tests
	std::cout << "\n Extra Credit: reserve()" << std::endl;

	vector<std::string> reserve_test;
	reserve_test.reserve(10); 

	std::cout << "Size after reserve(10): " << reserve_test.size() << std::endl;
	reserve_test.push_back("One");
	reserve_test.push_back("Two");
	reserve_test.push_back("Three");

	std::cout << "Size after push_backs: " << reserve_test.size() << std::endl;
	std::cout << "Element 0: " << reserve_test[0] << std::endl;
	std::cout << "Element 1: " << reserve_test[1] << std::endl;
	std::cout << "Element 2: " << reserve_test[2] << std::endl;
	

	// Test self-assignment
	custom_vector = custom_vector;
}
