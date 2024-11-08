//
// Created by Sean Lee on 2024. 11. 8
//
#include <iostream>
using namespace std;

int main(void) {

    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        if(temp < x) {
            cout << temp << " ";
        }
    }

}
