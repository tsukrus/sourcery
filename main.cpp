#include <bits/stdc++.h>

using namespace std;

int magic(int n, int l) // magical algorithm
{
    int power = pow(10, l - 1);
    if (power % 10 != 0) power++;
    int remainder = n % 10;
    int z = n / 10 + remainder * power;
    return z;
}

int main() {
    int n, length = 1;
    cin >> n;
    int input = n; // inputs N

    deque<int> v; // creates deque for N permutations
    v.push_back(n);

    deque<int> product; // creates deque for products of k * N

    while (n > 1) // determines length of N
    {
        n = n / 10;
        length++;
    }

    int magical = magic(input, length);
    
    while (magical != input) // defines all possible permutations
    {
        v.push_back(magical); // stores them
        magical = magic(magical, length);
    }

    for (int k = 1; k <= 9; k++) // stores all possible products of k * N when k ∈ [1; 9]
    {
        if(input * k <= pow(10, length)) product.push_back(input * k); 
    }

    deque<bool> successive(product.size()-1, false);
    successive.push_front(true);
        
    for (int j = 1; j < 9; j++) // checks each product if it is equal to any of the permutations
    {
        for (int i = 0; i < length; i++)
        {
            if (product[j] == v[i]) 
            {
                successive[j] == true;
                if (successive[j-1] == true)
                {
                    cout << "It is Magical!\n";
                    return 0;
                }
            }
        }
    }

    cout << "It is not Magical\n";
    return 0;
}
