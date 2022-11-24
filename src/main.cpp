#include <iostream>

// get a number from arguments and print it
int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        std::cout << argv[1] << std::endl;
    }
    else
    {
        std::cout << "No arguments" << std::endl;
    }
    return 0;
}