#include <iostream>
using namespace std;

double findAverage(int arr[], int size)
{
    double sum = 0.0;


    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }


    double average = sum / size;

    return average;
}

int main()
 {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);


    double avg = findAverage(arr, size);


   cout << "Average value of the elements in the array: " << avg << endl;

    return 0;
}

