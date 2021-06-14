#include <iostream>

int readInput()
{
    int inputValue;
    std::cout << "Please enter a value : ";
    std::cin >> inputValue;
    
    return inputValue;
}

void displayValue(int outputValue)
{
    std::cout << "\n You entered -> " << outputValue << " <-" << std::endl;    
}

int main()
{
    int x{0};
    x=readInput();
    displayValue(x);

    return 0;
}
