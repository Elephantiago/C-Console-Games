#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
using namespace std;
using namespace literals::chrono_literals;

/* There was complication with generating multiple random numbers in one run as every run there was the same number because the time was still the same when the second seed was required for srand function. Ideally you would solve it with sleep function, but C++ requires different sleep functions for Windows, Mac and Linux and as such the code would break on any other platform. My solution was adding chrono and thread libraries to simulate the sleep function with minimum required sleep time of 1000ms as anything below that can result in repeating numbers.

 It's probably not an ideal solution, but it sets the ground for the basis of the game. This is the first commit. Second one will come when I wake up.*/
int main()
{
	int randomValue = 1;
	for (int i = 0; i <= 10; i++){
	srand ((unsigned) time(NULL));
	randomValue = 1 + (rand() % 101);
	cout<<"Random percentage: "<<randomValue<<"%.\n"<< endl;
	this_thread::sleep_for(1110ms);
	}
	return 0;
}