#include <iostream>

extern void SimpleOTServer(bool *, int, int, const char *);

int main() {
    std::cout << "Hello, Server!" << std::endl;

    int length = 2;
    bool *b = new bool[length];
    b[0] = true;
    b[1] = true;
    int port = 12345;
    const char *ip = "127.0.0.1";
    SimpleOTServer(b,length,port,ip);
    return 0;
}
