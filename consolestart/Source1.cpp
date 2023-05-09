#include <iostream>

int main() {
	int num;
	int guess;
	int tries;

	srand(time(NULL));
	num = (rand() % 100) + 1;

	std::cout << "******** Numbre Guessing game *******\n";
	do {
	std::cout << "enter a guess between (1-100):"; 
	stt:cin >> guess;
	tries++;

	if (guess > num) {
		std::cout << "Too high \n";
	}
	else if (guess < num) {
		std::cout << "Too low\n";
	}
	else {
		std::cout << "Correct and your tries is :"; << tries << "\n";
	}
	} while (guess != num);

	return 0;
}