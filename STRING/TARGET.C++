#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 5, 7, 8};
    int tar = 7;
    int first = 0;
    int last = 3;
    while (first < last) {
        int sum = arr[first] + arr[last];
        if (sum < tar) {
            first++;
        } else if (sum > tar) {
            last--;
        } else {
            cout << first << " " << last << endl;
            return 0;
        }
    }
    cout << "Target not found!" << endl;
    return 0;
}
