#include <iostream>
#include <utility>
#include <atomic>

using namespace std;
struct MyArray {
	int z[50];
};
int main(void)
{
	atomic<MyArray> myArray;
	std::cout << std::boolalpha << "is lock free \n" << atomic_is_lock_free(&myArray) << std::endl;
}
