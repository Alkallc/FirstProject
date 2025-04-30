#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double result[5];
    double highest;
    double lowest;
    double finalScore = 0;

    cout << "Welcome to testing " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "test " << i + 1 << endl;
        cin >> result[i];
        
        while (result[i] < 1 || result[i] > 10)
        {
            cout << "This is not a valid score, please enter valid input***" << endl;
            cout << "Test " << i + 1 << endl;
            cin >> result[i];
        }
    }

    highest = result[0];
    lowest = result[0];

    for (int i = 0; i < 5; i++)
    {
        if (result[i] > highest)
        {
            highest = result[i];
        }
        if (result[i] < lowest)
        {
            lowest = result[i];
        }
    }

    int removeHigh = 0;
    int removeLow = 0;

    for (int i = 0; i < 5; i++)
    {
        if (result[i] == highest && removeHigh == 0)
        {
            removeHigh = 1;
        }
        else if (result[i] == lowest && removeLow == 0)
        {
            removeLow = 1;
        }
        else
        {
            finalScore = finalScore + result[i];
        }
    }    

        cout << "Here are the results for 5 tests ran" << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;

        cout << "The highest score of " << highest << " and the lowest score of " 
        << lowest << " have been removed " << endl;

        cout << fixed << setprecision(2) << endl;
        cout << "Final averaged score is: " << (finalScore) / 3;

        return 0;
        
}