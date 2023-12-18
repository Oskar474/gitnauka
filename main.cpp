#include <iostream>



int main (){

	int a;
	a = 2137;
	std::cout << a;
//<<<<<<< HEAD
	std::cout << "odejmowanie" << a-10;
//=======
	std::cout << "mnozenie" << a*10;
//>>>>>>> feature/multiplication
	std::cout << "dzielenie:" << a/10;
	return 0;
}
