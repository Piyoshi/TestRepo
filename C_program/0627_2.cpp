#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>

int main(){
        int i;
        std::string str;

        std::cout << "数字を入力してください：";
        std::cin >> str;

        i = atoi(str.c_str());
        std::cout << "10倍すると：" << 10*i << std::endl;
        std::cout << std::hex << i    << std::endl;

        return 0;
}
