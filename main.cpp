h#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string input)
{
    int length = input.length();

    for (int i = 0; i < length / 2; i++)
    {
        if (tolower(input[i]) != tolower(input[length - 1 - i]))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string input;

    while (true)
    {
        cout << "Enter a string (q to quit): ";
        getline(cin, input);

        if (input == "q")
        {
            break;
        }

        if (isPalindrome(input))
        {
            cout << "It is a palindrome." << endl;
        }
        else
        {
            cout << "It is not a palindrome." << endl;
        }
    }

    return 0;
}
