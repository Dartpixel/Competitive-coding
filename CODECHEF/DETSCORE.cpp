#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        cout << (a / 10) * b << endl;
    }
    return 0;
}
