#include "question3.h"

int main()
{
    char menu_selection;
    do {
        cout<<"Enter a word to see if it's a palindrome: ";
        string palindrome;
        cin>>palindrome;
    
        if (is_palindrome(palindrome)) {
            cout << "True (it is a palindrome)";
        }
        else {
            cout << "False (it is not a palindrome)";
        } 
        cout<<"\nEnter Q/q to quit, any other character to try again: ";
        cin>>menu_selection;
        } while (menu_selection != 'Q' && menu_selection != 'q');
    return 0;
}