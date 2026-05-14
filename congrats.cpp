#include <iostream>
using namespace std;

// Function definition
void congratulate(string name)
{
    cout << "Congratulations " << name << "!" << endl;
}

int main()
{
    string userName;

    cout << "Enter your name: ";
    cin >> userName;

    // Function call
    congratulate(userName);

    return 0;
}