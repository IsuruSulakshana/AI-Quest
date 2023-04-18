#include <iostream>
#include <vector>
using namespace std;

void nextMove(int n, int r, int c, vector<string> grid)
{
    int arr[4] = {r, c, 0, 0};
    string s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s = grid[i][j];
            if (s == "p")
            {
                arr[2] = i;
                arr[3] = j;
            }
            else
            {
                continue;
            }
        }
    }
    int rangeY = arr[2] - arr[0];
    int rangeX = arr[3] - arr[1];

    if (rangeX > rangeY)
    {
        if (rangeY > 0)
        {

            cout << "DOWN\n";
        }
        else if (rangeY < 0)
        {

            cout << "UP\n";
        }
    }
    else if (rangeY >= rangeX)
    {
        if (rangeX > 0)
        {

            cout << "RIGHT\n";
        }
        else if (rangeX < 0)
        {

            cout << "LEFT\n";
        }
    }
}

int main(void)
{

    int n, r, c;
    vector<string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}