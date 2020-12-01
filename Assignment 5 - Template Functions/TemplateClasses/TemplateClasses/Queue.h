#pragma once
#include <vector>
#include <iostream>

template <typename T>
class Queue {
	public:
		T get() {
			T item = items[ 0 ];
			items.erase( items.begin() );
			queueSize--;
			size();

			std::cout << "Dequeued: " << item << std::endl;
			std::cout << "new Queue: " << std::endl;
			for( size_t i = 0; i < queueSize; i++ ) {
				std::cout << "[" << i << "]" << items[ i ] << std::endl;
			}
			return item;
		}

		void put( T element ) {
			items.insert( items.end(), element );
			queueSize++;
			size();

			std::cout << "Queued: " << element << std::endl;
			std::cout << "new Queue: " << std::endl;
			for( size_t i = 0; i < queueSize; i++ ) {
				std::cout << "[" << i << "]" << items[ i ] << std::endl;
			}
		}

		int size() {
			std::cout << "\n Queue Size: " << queueSize << std::endl;
			return queueSize;
		}
	private:
		std::vector<T> items;
		int queueSize = 0;
};

