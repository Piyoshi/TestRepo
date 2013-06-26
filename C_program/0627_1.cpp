#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>

int main(){

    int x=10;
    char buf[x+1];

    std::cout   << x << "文字以内で文字を入力してください:";
    std::cin    >> std::setw(x+1) >> buf;
    std::cout   << buf << std::endl;

    return 0;
}
