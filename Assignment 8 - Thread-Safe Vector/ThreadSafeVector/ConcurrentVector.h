#pragma once
#include <vector>

template <typename T>
class ConcurrentVector {
public:
	void insert( T element ) {
		vector.insert( vector.end(), element );
	}
	int size() {
		return vector.size();
	}
	T Get( int i ) {
		return vector[ i ];
	}
private:
	std::vector<T> vector;
};

