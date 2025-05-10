#include <iostream>
using namespace std;

int a, b, c, d, h[4];
int p, m, g;

string check(int n)
{
    if (n % (a + b) > 0 && n % (a + b) <= a && n % (c + d) > 0 && n % (c + d) <= c)
    {
        return "both";
    }
    else if ((n % (a + b) == 0 || n % (a + b) > a) && (n % (c + d) == 0 || n % (c + d) > c))
    {
        return "none";
    }
    else
    {
        return "one";
    }
}

int main()
{
    cin >> a >> b >> c >> d;
    for (int i = 1; i <= 3; i++)
    {
        cin >> h[i];
    }
    // Èý¸öÈË
    for (int i = 1; i <= 3; i++)
    {
        cout << check(h[i]) << endl;
    }
    return 0;
}