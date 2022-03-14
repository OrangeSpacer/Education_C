#include <iostream>
using namespace std;

int main()
{
    char alphabet[30];
    
    
    cout << "Input word: ";
    cin >> alphabet;

    for (int i = 0; i < strlen(alphabet) - 1; i++)
    {
        for (int j = i; j < strlen(alphabet) - 1; j++)
        {
            if (alphabet[i] > alphabet[j + 1])
            {
                swap(alphabet[i], alphabet[j + 1]);
            }
        }
    }
    cout << alphabet;
}
