#include "Pointer.h"

int main() {
    // Gives the array random numbers
    random_device rd;
    default_random_engine gen(rd());
    uniform_int_distribution<int> dist(-5000, 5000);

    cout << "How many numbers do you want to store?" << endl;
    size_t arr_size;
    cin >> arr_size; // User decide the size of the array

    int *arr = new int[arr_size]; // Dynamic array created
    for(int *point = arr; point < arr + arr_size; point++){
        *point = dist(gen);
    }

    const int *minPointer = arr;
    const int *maxPointer = arr;
    for(int *point = arr; point < arr + arr_size; point++){
        if(*point > *maxPointer){ // If the value in point is higher it will be given to maxPointer
            maxPointer = point;
        }
        if(*point < *minPointer){ // Same here but if the value is lower
            minPointer = point;
        }
    }

    int sum = 0;
    for(int *point = arr; point < arr + arr_size; point++){
        sum += *point; // Add every value in every element with each other
    }

    cout << "The highest number: " << *maxPointer << endl;
    cout << "The lowest number: " << *minPointer << endl;
    cout << "Sum of all numbers: " << sum << endl << endl;

    for(int *point = arr; point < arr + arr_size; point++) {
        cout << *point << " ";
        if((point - arr)%15 == 0){
            cout << endl;
        }
        if((point - arr)%200 == 0){
            cout << endl << "Type anything to continue!" << endl;
            cin.get();
        }
    }
    return 0;
}