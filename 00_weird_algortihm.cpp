#include <iostream>

int main(void){
	long long input = 0;
	std::cin >> input;

	std::cout << input << ' ';
	while(input > 1){
		if (input%2 == 0){
			input /= 2;
		}else{
			input *= 3;
			input++;
		}
		std::cout << input << ' ';
	}

	return 0;
}