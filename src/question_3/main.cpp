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
        cout<<"\nEnter any character to repeat this program, or enter Q to quit: ";
        cin>>menu_selection;
        } while (menu_selection != 'Q' && menu_selection != 'q');
 
    return 0;
}