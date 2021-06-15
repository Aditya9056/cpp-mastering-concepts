#include <iostream>
using namespace std;

void printSolution(int **solution, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; i++)
        {
            cout << solution[i][j] << " ";
        }
        cout << endl;
    }
}

void mazeHelper(int maze[][20], int n, int **solution, int x, int y)
{
    if (x == n - 1 && y == n - 1)
    {
        solution[x][y] = 1;
        printSolution(solution, n);
    }
    if (x >= n || x < 0 || y >= n || maze[x][y] == 0 || solution[x][y] == 1)
    {
        return;
    }
    solution[x][y] = 1;
    mazeHelper(maze, n, solution, x - 1, y);
    mazeHelper(maze, n, solution, x + 1, y);
    mazeHelper(maze, n, solution, x, y - 1);
    mazeHelper(maze, n, solution, x, y + 1);
    solution[x][y] = 0;
}

void ratInAMaze(int maze[][20], int n)
{
    int **solution = new int *[n];

    for (int i = 0; i < n; i++)
    {
        solution[i] = new int *[n];
    }

    mazeHelper(maze, n, solution, 0, 0);
}