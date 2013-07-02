#include "CSample.h"

CSample::CSample(int number, char* name){
    setNum(number);
    setName(name);
}

void CSample::setNum(int number){
    m_num = number;
}

void CSample::setName(char* name){
    m_name = name;

}

int CSample::getNum(){
    return m_num;

}

char* CSample::getName(){
        return m_name;
}
