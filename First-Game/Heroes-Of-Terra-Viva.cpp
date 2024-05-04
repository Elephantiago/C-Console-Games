#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
using namespace std;
using namespace literals::chrono_literals;

/* The function has speed issues because srand function takes whole seconds as
seed value and as such it has to wait for
at least one second. It can be sped up
1 billion times if I find a way to feed it
time in nano seconds.
Note: don't replace thread sleep with classic sleep otherwise the code will only work
under Windows.
*/
int randomNumber(int min, int max){
	int randomValue = 1;
	this_thread::sleep_for(1010ms);
	srand ((unsigned) time(NULL));
	randomValue = min + (rand() % (max + 1));
	return randomValue;	
}


int main()
{
	for (int i = 0; i <= 10; i++){
	cout<<"Random percentage: "<<randomNumber(1, 100)<<"%.\n"<< endl;
	}
	return 0;
}
