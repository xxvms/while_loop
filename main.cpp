#include <iostream>

int main() {

    int x;
    std::cout << "Enter a number:\n";
    std::cin >> x;

    bool prime = true;
    int i = 2;
    while (i <= x/i)
    {
        int factor = x/i;
        if (factor * i == x)
        {
            std::cout <<"factor found: " << factor << '\n';
            prime = false;
            //break; // for optimization and increased speed if we want to know only if  number have factor,
            // if number have factor we don't have to check all factors
        }
        i += 1;
    }

    std::cout << x   << " is ";
    if (prime)
    {
        std::cout << "prime\n";
    } else
    {
        std::cout << "not prime\n";
    }

    return 0;
}