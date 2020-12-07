#include <queue>
#include <thread>
#include <iostream>
#include <mutex>

int c = 0;
bool done = false;
std::queue<int> goods;
std::mutex m;
std::condition_variable cv;

void producer() {
    for( int i = 0; i < 500; ++i ) {
        goods.push( i );
        c++;
    }

    done = true;
    cv.notify_one();
}

void consumer() {
    std::unique_lock<std::mutex> lk( m );
    cv.wait( lk, [] { return done; } );

    while( !goods.empty() ) {
        goods.pop();
        c--;
    }
}

int main() {
    std::thread producerThread( producer );
    std::thread consumerThread( consumer );

    producerThread.join();
    consumerThread.join();
    std::cout << "Net: " << c << std::endl;
}