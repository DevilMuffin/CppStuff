#include <iostream>

using namespace std;

int main() {

    int x;


    cout << "Enter a number: ";
    cin >> x;
    
    for(int i = 0; i<x; i++) {
        for(int y = 0; y<x-i; y++) {
            cout << " ";
        }
        for(int z = 0; z<i+1; z++) {
            cout << "#";
        }

        cout << "  ";

        for(int z = 0; z<i+1; z++) {
            cout << "#";
        }
        for(int y = 0; y<x-i; y++) {
            cout << " ";
        }

        cout << endl; 
    }

    return 0;
}
