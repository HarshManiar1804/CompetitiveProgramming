#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int count_sum_of_3_primes(int n)
{
    vector<int> primes;
    for (int p = 2; p <= n; p++)
    {
        if (is_prime(p))
        {
            primes.push_back(p);
        }
    }
    int count = 0;
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes[i] > n / 3)
        {
            break;
        }
        for (int j = i; j < primes.size(); j++)
        {
            if (primes[i] + primes[j] > n / 2)
            {
                break;
            }
            for (int k = j; k < primes.size(); k++)
            {
                if (primes[i] + primes[j] + primes[k] > n)
                {
                    break;
                }
                if (primes[i] + primes[j] + primes[k] == n)
                {
                    count++;
                }
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    int count = count_sum_of_3_primes(n);
    cout << count << endl;
    return 0;
}
