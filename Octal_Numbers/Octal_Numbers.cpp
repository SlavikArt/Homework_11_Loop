#include <iostream>

int main()
{
    int a, b, c, d, e, f, g, h, amount = 0;
    
    for (int i = 0; i <= 99999999; i++)
    {
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        d = i / 1000 % 10;
        e = i / 10000 % 10;
        f = i / 100000 % 10;
        g = i / 1000000 % 10;
        h = i / 10000000 % 10;

        if (a != b && a != c && a!= d && a != e && a != f && a != g && a != h
            && b != c && b != d && b != e && b != f && b != g && b != h
            && c != d && c != e && c != f && c != g && c != h
            && d != e && d != f && d != g && d != h
            && e != f && e != g && e != h
            && f != g && f != h
            && g != h 
            && i % 12345 == 0)
        {
            printf("%08d\n", i);
            amount++;
        }
    }
    std::cout << "\nAmount: " << amount << "\n";
}
