class CodeName{
    public:
    char codename;
    int score;

    Codename( codename="",int score=0){
        this->codename=codename;
        this->score=score;
    }
};

CodeName codename[5];
for(int i=0;i<5;i++){
    string codename;
    int score;
    cin>>codename>>score;
    codename[i]=Codename(codename,score);
}