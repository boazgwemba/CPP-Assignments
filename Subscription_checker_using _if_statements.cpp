
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int daysUntilExpiration = rand() % 12;

    if (daysUntilExpiration <= 10 && daysUntilExpiration > 5)
    {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }

    if (daysUntilExpiration <= 5 && daysUntilExpiration > 1)
    {
        cout << "Your subscription expires in " 
             << daysUntilExpiration << " days" << endl;
        cout << "Renew now and save 10%!" << endl;
    }

    if (daysUntilExpiration == 1)
    {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    }

    if (daysUntilExpiration == 0)
    {
        cout << "Your subscription has expired." << endl;
    }

    if (daysUntilExpiration > 10)
    {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
