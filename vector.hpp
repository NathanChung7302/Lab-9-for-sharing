#ifndef VECTOR_HPP
#define VECTOR_HPP

template<typename T>
class vector {
private:
	T* data = nullptr;
	int num_data = 0;
	int capacity = 0;

	void expand_capacity() {
		capacity = (capacity == 0) ? 1 : capacity * 2;
        	T* new_data = new T[capacity];
        	for (int i = 0; i < num_data; ++i) {
			new_data[i] = data[i];
		}
        	delete[] data;
        	data = new_data;
	}

public:
	vector() = default;

	~vector() {
		// TODO Implement this function
		delete[] data;
	}

	vector(const vector<T>& other) {
		// TODO Implement this function
		this->num_data = other.num_data;
		this->capacity = other.capacity;
        	this->data = new T[this->capacity];
        	for (int i = 0; i < this->num_data; ++i) {
			this->data[i] = other.data[i];
		}
	}

	vector<T>& operator=(const vector<T>& other) {
		// TODO Finish implementing this function
		if (this != &other) {
			delete[] this->data;
            		this->num_data = other.num_data;
			this->capacity = other.capacity;
            		this->data = new T[this->capacity];
            		for (int i = 0; i < this->num_data; ++i) {
			this->data[i] = other.data[i];
			}
		}
	
		return *this;
	}

	void push_back(const T& value) {
		if (num_data == capacity) {
			expand_capacity();
		}
        
        	data[num_data++] = value;

	}

	int size() const {
		return num_data;
	}

	// TODO Implement an operator[] function. I've written the header for
	// you. The parameter is the index supplied to the square brackets when
	// indexing a vector. For example, in the context of my_vector[i], i is
	// the argument to this [] operator overload (i is `index`).
	T& operator[](int index) {
		// TODO Fix the below line of code. It's incorrect; it's just provided
		// as a placeholder to make the program compile.
		return data[index];
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
		if (index < 0 || index > num_data) return;

        	if (num_data == capacity) {
			expand_capacity();
		}
        
        	for (int i = num_data; i > index; --i) {
			data[i] = data[i - 1];
		}
        
		data[index] = value;
        	num_data++;
	}

	void reserve(int new_cap) {
		if (new_cap > capacity) {
			T* new_data = new T[new_cap];
            		for (int i = 0; i < num_data; ++i) {
				new_data[i] = data[i];
			}
            
            		delete[] data;
            		data = new_data;
            		capacity = new_cap;
		}
	}	
};

#endif
