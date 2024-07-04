// Laboratory 4
// Tommy Yasi/toya1800

// Filnamn: TestTimer.cpp
// Skrivit av : Mikael Nilsson
// Justerad av: Per Ekeroot 2012-02-07
// Skapat datum: 2011-08-03

//===< include >===
#include "Timer.h"
#include "IntArray.h"
using namespace std;

int main() {
    Timer timer{};

    const int SIZE1 = 5000, SIZE2 = 10000, SIZE3 = 15000, SIZE4 = 20000,
    SIZE5 = 25000, SIZE6 = 30000, SIZE7 = 35000, SIZE8 = 40000;
    double sumTime = 0;

    cout << "--BUBBLESORT--" << endl;
    // Bubblesort with 5000 elements
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE1);
        array.randomizeArray();

        timer.start(); // Start time
        array.bubblesort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << fixed << setprecision(6);
    cout << "Sorting time: " << sumTime/10 << "[s] " << "Average for 10 sortings of 5000 elements." << endl;
    ofstream outFile("sortSystems.txt");
    outFile <<"bubblesort  " << SIZE1 << "   " <<sumTime/10 << endl;

    // Bubblesort with 10 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE2);
        array.randomizeArray();

        timer.start(); // Start time
        array.bubblesort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] " << "Average for 10 sortings of 10 000 elements." << endl;
    outFile <<"bubblesort  " << SIZE2 << "  " <<sumTime/10 << endl;

    // Bubblesort with 15 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE3);
        array.randomizeArray();

        timer.start(); // Start time
        array.bubblesort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 15 000 elements." << endl;
    outFile <<"bubblesort  " << SIZE3 << "  " <<sumTime/10 << endl;

    // Bubblesort with 20 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE4);
        array.randomizeArray();

        timer.start(); // Start time
        array.bubblesort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 20 000 elements." << endl;
    outFile <<"bubblesort  " << SIZE4 << "  " <<sumTime/10 << endl;

    // Bubblesort with 25 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE5);
        array.randomizeArray();

        timer.start(); // Start time
        array.bubblesort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 25 000 elements." << endl;
    outFile <<"bubblesort  " << SIZE5 << "  " <<sumTime/10 << endl;

    // Bubblesort with 30 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE6);
        array.randomizeArray();

        timer.start(); // Start time
        array.bubblesort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 30 000 elements." << endl;
    outFile <<"bubblesort  " << SIZE6 << "  " <<sumTime/10 << endl;

    // Bubblesort with 35 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE7);
        array.randomizeArray();

        timer.start(); // Start time
        array.bubblesort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 35 000 elements." << endl;
    outFile <<"bubblesort  " << SIZE7 << "  " <<sumTime/10 << endl;

    // Bubblesort with 40 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE8);
        array.randomizeArray();

        timer.start(); // Start time
        array.bubblesort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 40 000 elements." << endl << endl;
    outFile <<"bubblesort  " << SIZE8 << "  " <<sumTime/10 << endl;

    cout << "--QUICKSORT--" << endl;
    // Quicksort with 5 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE1);
        array.randomizeArray();

        timer.start(); // Start time
        array.quicksort(0, array.getMaxSize() - 1);
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 5000 elements." << endl;
    outFile <<"quicksort  " << SIZE1 << "   " <<sumTime/10 << endl;

    // Quicksort with 10 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE2);
        array.randomizeArray();

        timer.start(); // Start time
        array.quicksort(0, array.getMaxSize() - 1);
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 10 000 elements." << endl;
    outFile <<"quicksort  " << SIZE2 << "  " <<sumTime/10 << endl;

    // Quicksort with 15 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE3);
        array.randomizeArray();

        timer.start(); // Start time
        array.quicksort(0, array.getMaxSize() - 1);
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 15 000 elements." << endl;
    outFile <<"quicksort  " << SIZE3 << "  " <<sumTime/10 << endl;

    // Quicksort with 20 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE4);
        array.randomizeArray();

        timer.start(); // Start time
        array.quicksort(0, array.getMaxSize() - 1);
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 20 000 elements." << endl;
    outFile <<"quicksort  " << SIZE4 << "  " <<sumTime/10 << endl;

    // Quicksort with 25 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE5);
        array.randomizeArray();

        timer.start(); // Start time
        array.quicksort(0, array.getMaxSize() - 1);
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 25 000 elements." << endl;
    outFile <<"quicksort  " << SIZE5 << "  " <<sumTime/10 << endl;

    // Quicksort with 30 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE6);
        array.randomizeArray();

        timer.start(); // Start time
        array.quicksort(0, array.getMaxSize() - 1);
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 30 000 elements." << endl;
    outFile <<"quicksort  " << SIZE6 << "  " <<sumTime/10 << endl;

    // Quicksort with 35 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE7);
        array.randomizeArray();

        timer.start(); // Start time
        array.quicksort(0, array.getMaxSize() - 1);
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 35 000 elements." << endl;
    outFile <<"quicksort  " << SIZE7 << "  " <<sumTime/10 << endl;

    // Quicksort with 40 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE8);
        array.randomizeArray();

        timer.start(); // Start time
        array.quicksort(0, array.getMaxSize() - 1);
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 40 000 elements." << endl << endl;
    outFile <<"quicksort  " << SIZE8 << "  " <<sumTime/10 << endl;

    cout << "--SELECTIONSORT--" << endl;
    // Selectionsort with 5 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE1);
        array.randomizeArray();

        timer.start(); // Start time
        array.selectionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 5000 elements." << endl;
    outFile <<"selectionsort  " << SIZE1 << "   " <<sumTime/10 << endl;

    // Selectionsort with 10 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE2);
        array.randomizeArray();

        timer.start(); // Start time
        array.selectionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 10 000 elements." << endl;
    outFile <<"selectionsort  " << SIZE2 << "  " <<sumTime/10 << endl;

    // Selectionsort with 15 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE3);
        array.randomizeArray();

        timer.start(); // Start time
        array.selectionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 15 000 elements." << endl;
    outFile <<"selectionsort  " << SIZE3 << "  " <<sumTime/10 << endl;

    // Selectionsort with 20 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE4);
        array.randomizeArray();

        timer.start(); // Start time
        array.selectionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 20 000 elements." << endl;
    outFile <<"selectionsort  " << SIZE4 << "  " <<sumTime/10 << endl;

    // Selectionsort with 25 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE5);
        array.randomizeArray();

        timer.start(); // Start time
        array.selectionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 25 000 elements." << endl;
    outFile <<"selectionsort  " << SIZE5 << "  " <<sumTime/10 << endl;

    // Selectionsort with 30 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE6);
        array.randomizeArray();

        timer.start(); // Start time
        array.selectionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 30 000 elements." << endl;
    outFile <<"selectionsort  " << SIZE6 << "  " <<sumTime/10 << endl;

    // Selectionsort with 35 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE7);
        array.randomizeArray();

        timer.start(); // Start time
        array.selectionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 35 000 elements." << endl;
    outFile <<"selectionsort  " << SIZE7 << "  " <<sumTime/10 << endl;

    // Selectionsort with 40 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE8);
        array.randomizeArray();

        timer.start(); // Start time
        array.selectionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 40 000 elements." << endl << endl;
    outFile <<"selectionsort  " << SIZE8 << "  " <<sumTime/10 << endl;

    cout << "--INSERTIONSORT--" << endl;
    // Insertionsort with 5000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE1);
        array.randomizeArray();

        timer.start(); // Start time
        array.insertionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 5000 elements." << endl;
    outFile <<"insertionnsort  " << SIZE1 << "   " <<sumTime/10 << endl;

    // Insertionsort with 10 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE2);
        array.randomizeArray();

        timer.start(); // Start time
        array.insertionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 10 000 elements." << endl;
    outFile <<"insertionnsort  " << SIZE2 << "  " <<sumTime/10 << endl;

    // Insertionsort with 15 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE3);
        array.randomizeArray();

        timer.start(); // Start time
        array.insertionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 15 000 elements." << endl;
    outFile <<"insertionnsort  " << SIZE3 << "  " <<sumTime/10 << endl;

    // Insertionnsort with 20 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE4);
        array.randomizeArray();

        timer.start(); // Start time
        array.insertionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 20 000 elements." << endl;
    outFile <<"insertionnsort  " << SIZE4 << "  " <<sumTime/10 << endl;

    // Insertionsort with 25 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE5);
        array.randomizeArray();

        timer.start(); // Start time
        array.insertionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 25 000 elements." << endl;
    outFile <<"insertionnsort  " << SIZE5 << "  " <<sumTime/10 << endl;

    // Insertionsort with 30 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE6);
        array.randomizeArray();

        timer.start(); // Start time
        array.insertionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 30 000 elements." << endl;
    outFile <<"insertionnsort  " << SIZE6 << "  " <<sumTime/10 << endl;

    // Insertionsort with 35 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE7);
        array.randomizeArray();

        timer.start(); // Start time
        array.insertionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 35 000 elements." << endl;
    outFile <<"insertionnsort  " << SIZE7 << "  " <<sumTime/10 << endl;

    // Insertionsort with 40 000 elements
    sumTime = 0;
    for(int i=0; i < 10; i++) {
        IntArray array(SIZE8);
        array.randomizeArray();

        timer.start(); // Start time
        array.insertionsort();
        sumTime += timer.stop()/1000000; // Sum
    }
    cout << "Sorting time: " << sumTime/10 << "[s] "<< "Average for 10 sortings of 40 000 elements." << endl;
    outFile <<"insertionnsort  " << SIZE8 << "  " <<sumTime/10 << endl;
    outFile.close();

    return 0;
}
