#include <iostream>
#include <vector>

using namespace std;

vector<vector<string>> createGrid(int rows, int cols) {
    vector<vector<string>> array(rows, vector<string>(cols));
    return array;
}

int gameSelect() {
    int number;
    
    cout << "What game would you like to play: " << endl;
    cout << "1 - Naughts and Crosses" << endl;
    cout << "2 - Connect 4" << endl;

    cin >> number;

    return number;
}

int main() {
    auto grid = createGrid(3, 3);

    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            grid[i][j] = "-";
        }
    }

    cout << grid[2][2];

    return 0;
}