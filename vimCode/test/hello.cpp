#include <iostream>
#include "hello.h"

int main()
{
	// std::cout << "Julia,2021!" << std::endl;
	// bool used[201] = {false};
	// for(int i = 0; i < 201; i++) {
	// 	std::cout << used[i] << " ";
	// 	if((i + 1)  % 10 == 0) {
	// 		std::cout << std::endl;
	// 	}
	// }
	Test test("Julia", 18);
	test.show();
	return 0;
}