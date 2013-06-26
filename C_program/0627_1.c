#include <iostream>
#include <stdlib.h>

int main(){

    int x=10;
    string buf;

    std::cout   << x << "文字以内で文字を入力してください:";
    std::cin    >> std::setw(11) >> buf;
    std::cout   << buf << std::endl;

    return 0;
}
