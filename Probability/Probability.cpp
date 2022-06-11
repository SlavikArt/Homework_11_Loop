#include <iostream>

int random(int min, int max)
{
    int k = max - min + 1;
    return rand() % k + min;
}

int main()
{
    while (true)
    {
        srand(time(0));

        int percent_positive = 0;
        int percent_negative = 0;
        int percent_zero = 0;

        int percent_even = 0;
        int percent_odd = 0;

        for (int i = 1; i <= 100; i++)
        {
            int num = random(-100, 100);

            if (num > 0)
            {
                percent_positive++;
            }
            else if (num < 0)
            {
                percent_negative++;
            }
            else
            {
                percent_zero++;
            }

            if (num % 2 == 0)
            {
                percent_even++;
            }
            else
            {
                percent_odd++;
            }
        }

        std::cout << "Percent of positive: " << percent_positive << "\n";
        std::cout << "Percent of negative: " << percent_negative << "\n";
        std::cout << "Percent of zero: " << percent_zero << "\n";
        std::cout << "Percent of even: " << percent_even << "\n";
        std::cout << "Percent of odd: " << percent_odd << "\n";

        system("pause");
        system("cls");
    }
}
