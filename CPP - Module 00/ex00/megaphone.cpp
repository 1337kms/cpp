#include <iostream>

int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
			if (islower(argv[i][j]))
				std::cout << (char)toupper(argv[i][j]);
			else
				std::cout << argv[i][j];
			j++;
		}
		i++;
	}	
	std::cout << std::endl;
	return 0;
}
