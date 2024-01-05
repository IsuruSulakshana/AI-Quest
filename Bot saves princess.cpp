#include <iostream>
#include <vector>
using namespace std;

void displayPathToPrincess(int n, vector <string> grid){
    int arr[4] = {0,0,0,0};
    string c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c = grid[i][j];
            
            if (c == "m")
            {
                arr[0] = i;
                arr[1] = j;
            }
            else if (c == "p")
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
    int rangeY = arr[2]-arr[0];
    int rangeX = arr[3]-arr[1];

    if (rangeY > 0)
    {
        for (int i = 0; i < rangeY; i++)
        {
            cout<<"DOWN\n";
        }
    }
    else if (rangeY < 0)
    {
        for (int i = 0; i < abs(rangeY); i++)
        {
            cout<<"UP\n";
        }
    }
    if (rangeX > 0)
    {
        for (int i = 0; i < rangeX; i++)
        {
            cout<<"RIGHT\n";
        }
    }
    else if (rangeX < 0)
    {
        for (int i = 0; i < abs(rangeX); i++)
        {
            cout<<"LEFT\n";
        }
    }
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathToPrincess(m,grid);

    return 0;
}