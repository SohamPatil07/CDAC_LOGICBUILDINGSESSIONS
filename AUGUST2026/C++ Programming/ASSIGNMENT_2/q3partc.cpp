#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int R, C;

    cout << "Enter number of rows: ";
    cin >> R;

    cout << "Enter number of columns: ";
    cin >> C;

    // Create an array of R pointers
    int** map = new int*[R];

    // Create C integers for each row
    for(int i = 0; i < R; i++)
    {
        map[i] = new int[C];
    }

    // Fill the map with random tile types from 0 to 4
    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            map[i][j] = rand() % 5;
        }
    }

    // Display the map
    cout << endl;
    cout << "===== GAME MAP (" << R << " x " << C << ") =====" << endl;

    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            cout << " " << map[i][j];
        }

        cout << endl;
    }

    // Display legend
    cout << "Legend: 0=Grass 1=Water 2=Mountain 3=Forest 4=Dungeon" << endl;

    // Counters for each tile type
    int grass = 0;
    int water = 0;
    int mountain = 0;
    int forest = 0;
    int dungeon = 0;

    // Count each tile
    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(map[i][j] == 0)
            {
                grass++;
            }
            else if(map[i][j] == 1)
            {
                water++;
            }
            else if(map[i][j] == 2)
            {
                mountain++;
            }
            else if(map[i][j] == 3)
            {
                forest++;
            }
            else if(map[i][j] == 4)
            {
                dungeon++;
            }
        }
    }

    // Display tile counts
    cout << endl;
    cout << "Tile Count:" << endl;
    cout << " Grass : " << grass << endl;
    cout << " Water : " << water << endl;
    cout << " Mountain : " << mountain << endl;
    cout << " Forest : " << forest << endl;
    cout << " Dungeon : " << dungeon << endl;

    // Delete every row
    for(int i = 0; i < R; i++)
    {
        delete[] map[i];
    }

    // Delete the outer array of pointers
    delete[] map;

    return 0;
}

