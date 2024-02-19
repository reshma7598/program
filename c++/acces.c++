# include<iostream>
using namespace std;


class emp{
    public:
    int a;
    private:
    int b;
    protected:
    int c;
   int methd(){
b=5;
    }
    
};

class salary:emp{
int method(){
    c=5;
}

};

int main(){
    emp e;
    e.a=4;

    
 cout<<"the value of a is"<<e.a;
 return 0;

}