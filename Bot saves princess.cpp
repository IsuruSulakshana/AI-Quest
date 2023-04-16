#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < sizeof(i); j++)
        {
            cout<<j<<endl;
        }
        
    }
    
}

int main() {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}