#include <iostream>

int main()
{
		int		a, b, T, i;

		std::cin >> T;
		for(i = 0; i < T; i++){
				std::cin >> a >> b;
				std::cout << "Case #" << (i + 1) << ": " << \
								a << " + " << b << " = " << a + b << std::endl;
		}

		return 0;
}