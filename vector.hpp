#ifndef VECTOR_HPP
#define VECTOR_HPP

template<typename T>
class vector {
private:
	T* data = nullptr;
	int num_data = 0;
public:
	vector() = default;

	~vector() {
		// TODO Implement this function
	}

	vector(const vector<T>& other) {
		// TODO Implement this function
	}

	vector<T>& operator=(const vector<T>& other) {
		// TODO Finish implementing this function

		return *this;
	}

	void push_back(const T& value) {
		T* new_data = new T[this->num_data + 1];
		for (int i = 0; i < this->num_data; i++) {
			new_data[i] = this->data[i];
		}
		new_data[this->num_data] = value;
		delete [] this->data;
		this->data = new_data;
		this->num_data++;
	}

	int size() const {
		return this->num_data;
	}

	// TODO Implement an operator[] function. I've written the header for
	// you. The parameter is the index supplied to the square brackets when
	// indexing a vector. For example, in the context of my_vector[i], i is
	// the argument to this [] operator overload (i is `index`).
	T& operator[](int index) {
		// TODO Fix the below line of code. It's incorrect; it's just provided
		// as a placeholder to make the program compile.
		return data[0];
	}

	// The insert() function receives a value to insert and the index at which
	// to insert it in the vector. It should then insert the value at that
	// index, moving other elements over to make room for it (hint: much like
	// the push_back function, the insert function will need to create a new,
	// bigger array to make room for the new value, but as you're copying data
	// into the new array, it will need to shift over all of the values that
	// come after the newly inserted value)
	void insert(int index, const T& value) {
		// TODO Implement this function
	}
};

#endif
