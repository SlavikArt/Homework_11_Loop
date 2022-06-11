#include <iostream>

// Теперь буду стараться использовать std::

int main()
{
    int num;
    bool is_prime = true;
    
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num <= 1) 
        is_prime = false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            is_prime = false;
        }
    }
    std::string prime = is_prime ? "prime" : "not prime";

    std::cout << "Number " << num << " is " << prime << "\n";
}