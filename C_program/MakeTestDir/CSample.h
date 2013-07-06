#include <string>
class CSample{
    public:
        CSample();
        CSample(int number, std::string name);
        void setNum(int number);
        void setName(std::string name);
        int getNum();
        std::string getName();
    private:
        int m_num;
        std::string m_name;
};
