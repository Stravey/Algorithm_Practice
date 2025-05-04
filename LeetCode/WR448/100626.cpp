#include <iostream>
#include <vector>

using namespace std;

int n;

vector<vector<int>> v;

vector<vector<int>> specialGrid(int N) 
{
    if(N == 0)
    {
        return {{0}};
    }

    vector<vector<int>> preGrid = specialGrid(N - 1);
    int size = 1 << N;
    vector<vector<int>> newGrid(size,vector<int>(size,0));

    // ���Ͻ�
    for(int i = 0;i < (1 << (N - 1));i++) 
    {
        for(int j = 0;j < (1 << (N - 1));j++) 
        {
            newGrid[i][j] = preGrid[i][j];
        }
    }

    // ���Ͻ�
    for(int i = 0;i < (1 << (N - 1));i++) 
    {
        for(int j = (1 << (N - 1));j < size;j++) 
        {
            newGrid[i][j] = preGrid[i][j - (1 << (N - 1))] + (1 << (2 * (N - 1)));
        }
    }

    // ���½�
    for(int i = (1 << (N - 1));i < size;i++) 
    {
        for(int j = 0;j < (1 << (N - 1));j++) 
        {
            newGrid[i][j] = preGrid[i - (1 << (N - 1))][j] + 2 * (1 << (2 * (N - 1)));
        }
    }

    // ���½�
    for(int i = (1 << (N - 1));i < size;i++) 
    {
        for(int j = (1 << (N - 1));j < size;j++) 
        {
            newGrid[i][j] = preGrid[i - (1 << (N - 1))][j - (1 << (N - 1))] + 3 * (1 << (2 * (N - 1)));
        }
    }

    return newGrid;
}

// �����ά�����ĺ���
void printGrid(const vector<vector<int>>& grid) {
    for (const auto& row : grid) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    cin >> n;
    v = specialGrid(n);
    printGrid(v);
    return 0;
}