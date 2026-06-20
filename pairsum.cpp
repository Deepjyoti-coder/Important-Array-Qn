#include <iostream>
using namespace std;

void pairSum(int arr[], int n, int target) {
    int i = 0, j = n - 1;

    while (i < j) {
        int sum = arr[i] + arr[j];

        if (sum > target) {
            j--;
        }
        else if (sum < target) {
            i++;
        }
        else {
            cout << "Indices are: " << i << " , " << j << endl;
            return;
        }
    }

    cout << "No pair found!" << endl;
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;

    pairSum(arr, n, target);

    return 0;
}
