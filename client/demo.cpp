#include <iostream>

using namespace std;

extern void SimpleOTClient(int, int *, int *, int);

int main() {
    std::cout << "Hello, Client!" << std::endl;

    int length = 2;
    int *b1 = new int[length];
    int *b2 = new int[length];

    b1[0] = 123;
    b1[1] = 456;

    b2[0] = 987;
    b2[1] = 654;

    int port = 12345;
    SimpleOTClient(length, b1, b2, port);
    return 0;
}