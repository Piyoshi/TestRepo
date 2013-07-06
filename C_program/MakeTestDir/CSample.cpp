#include "CSample.h"


CSample::CSample(){

	std::string name("名前なし");
	CSample(100, name);
}

CSample::CSample(int number, std::string name){
	setNum(number);
	setName(name);
}

void CSample::setNum(int number){
	m_num = number;
}

void CSample::setName(std::string name){
	m_name = name;

}

int CSample::getNum(){
	return m_num;

}

std::string CSample::getName(){
	return m_name;
}
