# include<iostream>
using namespace std;

int plusFuncInt(int a,int b){
    return a + b;
}
double plusFuncDouble(double a,double b){
    return a+b;
}
int main(){
    int mynum1= plusFuncInt(8, 55);
    int mynum2= plusFuncDouble(4.3, 9.96);
    cout<<"int:"<<mynum1 <<"\n";
    cout<<"double:"<<mynum2;
    return 0;
}
