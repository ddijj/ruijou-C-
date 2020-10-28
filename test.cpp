#include <cstdio>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main() {
    int a;
    int b;
    printf("hello");
    printf("Please enter x>");
    cin >> a;
    printf("Please enter y>");
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