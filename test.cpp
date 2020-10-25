#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    int y = a;
    int i = 0;
    while(i<b-1)
    {
        i++;
        y = y * a;
    }
    printf("%d",y);
}