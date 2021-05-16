#include <iostream>
using namespace std;
bool hopping(int k, int n, int steps[]);

int main()
{
    int n, k, i = 0;

    // steppers count
    cin >> n;
    int steps[n];

    // steppers value
    cout << "Steps values -> ";
    while (i < n)
    {
        cin >> steps[i];
        i++;
    }

    // hopping index
    cout << "hoping index -> ";
    cin >> k;

    // hopping in n+steps[n]
    cout << hopping(k, n, steps);

    // hop-hop
    // 5 5+n[5] or 5-n[5]
    return 0;
}

bool hopping(int k, int n, int steps[])
{

    int right, left;
    static int i = 0;

    while (i < n && i >= 0)
    {
        // cout<<"Finding";

        if (steps[k] == 0)
        {

            cout << "true";
            return true;
        }

        // Right Side Hopping
        if (k + steps[i] < n)
        {

            right = steps[k + steps[i]];

            if (right == 0)
            {

                cout << "true";
                break;
            }
            else
            {

                hopping(k + steps[i], n, steps);
            }
        }
        // Left Side Hopping
        else if (k - steps[i] >= 0)
        {

            left = steps[k - steps[i]];

            if (left == 0)
            {

                cout << "true";
                break;
            }
            else
            {

                hopping(k - steps[i], n, steps);
            }
        }
        else
        {
            cout << "false";
            break;
        }
        i++;
    }
    return false;
}