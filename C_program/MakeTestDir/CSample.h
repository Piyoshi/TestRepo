class CSample{
    public:
        CSample(){ CSample(100, "名無し"); };
        CSample(int number, char* name);
        void setNum(int number);
        void setName(char* name);
        int getNum();
        char* getName();
    private:
        int m_num;
        char* m_name;
};
