#include <iostream>

// get a number from arguments and print it
int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        //for each argument
        for (int i = 1; i < argc; i++)
        {
            // print the argument
            std::cout << argv[i] << std::endl;
        }
    }
    else
    {
        std::cout << "No arguments" << std::endl;
    }
    return 0;
}