// TemplateClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Queue.h"
#include <iostream>
#include <string>

template<typename T, int size>
auto sortArray( T( &a )[ size ] ) {
	std::cout << "\n Sorting" << std::endl;
	for( size_t j = 0; j < size; j++ ) {
		std::cout << a[ j ] << std::endl;
	}
	
	int i, j, min;
	T temp;
	for( size_t i = 0; i < size - 1; i++ ) {
		min = i;
		for( size_t j = i + 1; j < size; j++ ) {
			if( a[ j ] < a[ min ] ) {
				temp = a[ i ];
				a[ i ] = a[ j ];
				a[ j ] = temp;
			}
		}
		std::cout << "\n Sorting" << std::endl;
		for( size_t j = 0; j < size; j++ ) {
			std::cout << a[ j ] << std::endl;
		}
	}
	std::cout << "\n Sorting Finished" << std::endl;
	for( size_t i = 0; i < size; i++ ) {
		std::cout << a[ i ] << std::endl;
	}
}

int main() {
	//Array sorting
	float floatArray[ 5 ]{ 1.1f, 20.43f, 0.95f, 2.3f, 12.3f };
	std::string stringArray[ 7 ] { "pizza", "pasta", "put", "it", "in", "a", "box" };

	sortArray( floatArray );
	sortArray( stringArray );

	//Queue
	Queue<float> newQueueu;
	newQueueu.put( 12.3f );
	newQueueu.put( 4.9f );
	newQueueu.put( 2.4f );
	newQueueu.get();
	newQueueu.get();
	newQueueu.get();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
