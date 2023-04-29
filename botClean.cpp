#include<iostream>
#include<vector>
using namespace std;

void next_move(int posr, int posc, vector <string> board) {
    int x = board.size();
    int y = board.size();
    for (size_t i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < sizeof(board[i]); j++)
        {
            char c = board[i][j];
            if (c == 'd')
            {
                if (y > i && x > j)
                {
                    y = i;
                    x = j;
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
    }

    int rangeY = y - posr;
    int rangeX = x - posc;

    if (rangeY == 0 && rangeX == 0)
    {
        cout<<"CLEAN\n";
    }
    else if (rangeX != 0)
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
    else
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
}

int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}