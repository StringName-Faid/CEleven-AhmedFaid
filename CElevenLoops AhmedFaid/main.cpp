#include <iostream>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int numGenerator(int max, int min){
    int n = (max - min +1);
    int random = rand() % n + min;

    return random;
}

int fillContainer(int max, int min, vector<int> &container){
    container.resize(numGenerator(max, min));

    for (int& i : container){
        i = (numGenerator(max, min));
    }
}

int printContainer(vector<int> &container){
    for (const int& i : container){
        cout << i << endl;
    }
}

int main()
{
    int max, min;
    vector<int> vContainer;

    cout << "Enter max" << endl;
    cin >> max;

    cout << "Enter min" << endl;
    cin >> min;

    fillContainer(max, min, vContainer);

    printContainer(vContainer);

    return 0;
}
