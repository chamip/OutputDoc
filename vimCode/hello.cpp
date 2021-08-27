#include <iostream>

int main()
{
	std::cout << "Julia,2021!" << std::endl;
	bool used[201] = {false};
	for(int i = 0; i < 201; i++) {
		std::cout << used[i] << " ";
		if((i + 1)  % 10 == 0) {
			std::cout << std::endl;
		}
	}
	return 0;
}
