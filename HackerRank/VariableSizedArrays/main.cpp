#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q, n;
    cin >> n >> q;

    vector<vector<int>> array(n);
    for (auto& innerVector : array) {
        int k;
        cin >> k;
        innerVector.resize(k);
        for (int j = 0; j < innerVector.size(); j++) {
            int elem;
            cin >> elem;
            innerVector[j] = elem;
        }
        //array.push_back(innerVector);

    }


    for (int m = 0; m < q; m++) {
        int i, j;
        cin >> i >> j;
        cout << array[i][j] << endl;

    }


    return 0;
}