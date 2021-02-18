#include <iostream>
#include <algorithm>

int main(void){

	long long size = 0;
	std::cin >> size;
	long long r_size = size-1;
	long long arr[r_size]={};

	for(int i = 0; i < r_size; i++){
		std::cin >> arr[i];
	}

	std::sort(arr, arr + (r_size));

	long long i = 0;
	for (i = 0; i < r_size; i++){
		if (arr[i] != i+1){
			std::cout << i+1;
			break;
		}
	}
	if (i == r_size)
		std::cout << size;
	return 0;
}