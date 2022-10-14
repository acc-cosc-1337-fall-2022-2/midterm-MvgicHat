#include "question3.h"

bool test_config()
{
    return true;
}

bool is_palindrome(const string palindrome)
{
    int low = 0;
    int high = palindrome.length() - 1;
 
    while (low < high)
    {
        if (palindrome[low] != palindrome[high]) {
            return false;
        }
 
        low++;
        high--;
    }
 
    return true;
}