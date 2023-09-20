#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	argv++;
	while (*argv)
	{
		std::string arg = *argv;
		std::transform(arg.begin(), arg.end(), arg.begin(), toupper);
		std::cout << arg;
		argv++;
	}
	putchar('\n');
	return (0);
}
