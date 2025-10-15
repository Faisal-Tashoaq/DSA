#include <iostream>
#include <vector>
#include <ctime>     // for time()

using namespace std;

// Bubble Sort Function
void bubblesort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr;

    // Seed the random number generator with current time
    srand(time(0));

    // Generate random numbers
    for (int i = 0; i < n; i++) {
        arr.push_back( rand() % 100 );  // generates numbers from 0 to 99
    }


    // Display sorted array
    cout << "array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Sort the array
    bubblesort(arr);

    // Display sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    clock_t start, end;
    start = clock();
    // Example task: a loop
    for (int i = 0; i < 1000000; i++);

    end = clock();    // record end time

    double time_taken = double(end - start) / CLOCKS_PER_SEC;
    cout << "Time taken: " << time_taken << " seconds" << endl;

    return 0;
}
