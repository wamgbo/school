#include <iostream>
#include <vector>
using namespace std;
typedef struct
{
    int king, queen, queen_step;
} step;
inline void illegal_move(const int &king, const int &queen, int &queen_step)
{
    bool flag = false;
    int pos_row, pos_column;
    pos_row = queen / 8;
    pos_column = queen % 8;
    for (int i = pos_column; i <= pos_column + 56; i += 8)
    {
        if (queen_step != i)
        {
            cout << "Illegal move" << endl;
            return;
        }

        if (king == i)
            flag = true;
    }
    for (int j = pos_row * 8; j <= (pos_row * 8) + 7; j++)
    {
        if (queen_step != j)
        {
            cout << "Illegal move" << endl;
            return;
        }

        if (king == j)
            flag = true;
    }
    if (flag)
        if (queen > king && queen_step < king)
        {
            cout << "Illegal move" << endl;
            return;
        }

        else if (queen < king && queen_step > king)
        {
            cout << "Illegal move" << endl;
            return;
        }
}
inline void illegal_state(const int &king, const int &queen, const int &queen_step)
{
    if (king == queen)
        cout << "Illegal state" << endl;
}
inline int Move_not_allowed(const int &king, const int &queen, const int &queen_step)
{
    vector<int> list{king - 1, king + 1, king + 8, king - 8};
    int sum = 0;
    for (auto iter : list)
    {
        if (queen_step == iter)
            return 1;
        else if (queen_step != iter)
            sum++;
    }
    if (sum == 4)
        return 2;
    else
        return 0;
}
inline void stop(const int &king, const int &queen, const int &queen_step)
{
    vector<int> list = {0, 9, 7, 14, 56, 49, 63, 54};
    for (int i = 0; i <= 6; i += 2)
    {
        if (king == list[i] && queen_step == list[i + 1])
            cout << "Stop" << endl;
    }
}
int main(void)
{
    step piece;
    while (cin >> piece.king)
    {
        cin >> piece.queen >> piece.queen_step;
        illegal_state(piece.king, piece.queen, piece.queen_step);
        illegal_move(piece.king, piece.queen, piece.queen_step);
        if (Move_not_allowed(piece.king, piece.queen, piece.queen_step) == 1)
            cout << "Move not allowed" << endl;
        else if (Move_not_allowed(piece.king, piece.queen, piece.queen_step) == 1)
            cout << "Continue" << endl;
        stop(piece.king, piece.queen, piece.queen_step);
    }
}