#include <iostream>
#include <thread>
#include <chrono>

void hello(int x) {
	std::this_thread::sleep_for(std::chrono::seconds(x));
	std::cout << "Thread " << x << "\n";
}

int main() {
	std::thread t{ hello, 1 };
	std::thread t2{ hello, 2 };
	std::thread t3{ hello, 3 };
	t.join(); t2.join(); t3.join();
}