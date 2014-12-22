#include <iostream>
#include <cstring>
#include <stdio.h>
#define MAX_SIZE 1024
using namespace std;

int main()
{
    char encode[MAX_SIZE];
    char decode[MAX_SIZE];
    int p[8] = {1,2,3,5,0,4,6,7};

    cout << "Введите текст: " << endl;
    cin >> decode;

    int len = strlen(decode);
    int i = 0, j = 0;

    for(i = 0; i < len; i++) {
        encode[p[i]] = decode[i];
    }

    for(i = 0; i < len; i++ ) {
        cout << encode[i];
    }

    return 0;
}
