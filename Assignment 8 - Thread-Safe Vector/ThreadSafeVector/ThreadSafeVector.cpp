

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include "ConcurrentVector.h"

std::mutex mutex;

void AddElementsToVector( ConcurrentVector<float>* vector, float element ) {
    mutex.lock();
    vector->insert( element );
    mutex.unlock();
}

int main() {
    ConcurrentVector<float>* floats = new ConcurrentVector<float>();

    for( size_t i = 0; i < 500; i++ ) {
        std::thread thread1( &AddElementsToVector, floats, 500 );
        thread1.join();
    }

    for( size_t i = 0; i < 500; i++ ) {
        std::thread thread2( &AddElementsToVector, floats, 999 );
        thread2.join();
    }

    for( size_t i = 0; i < floats->size(); i++ ) {
        mutex.lock();
        std::cout << floats->Get( i ) << std::endl;
        mutex.unlock();
    }
    
    return 0;
}
