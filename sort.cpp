#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> bubbleSort(vector<int> array) {
    int length = array.size();
    bool swapped;

    for (int i = 0; i < length; i++) {
        swapped = false;
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    return array;
}

int main() {
    int numbers[30] = {
        42, 17, 83, 5, 29, 91, 64, 38, 73, 12,
        6, 55, 88, 20, 47, 31, 79, 3, 99, 14,
        67, 25, 8, 61, 34, 90, 18, 70, 2, 53
    };

    

    vector<int> numbersVec(numbers, numbers + 30);
    vector<int> sortedNums = bubbleSort(numbersVec);

    cout << "Sorted Numbers: ";
    for (int num : sortedNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
