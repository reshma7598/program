#include<iostream>
using namespace std;
class Circle {
    private:
    double radius;

public:
Circle(double r): radius(r){}     //Circle Class Definition :
double calculateArea ()const {
    return 3.14159 * radius * radius;
}
double calulateCircumferance ()const{
return 3.14159 * radius;
}
};
int main(){
    Circle myCircle (6.0);
    cout<<"Area of the Circle :"<<myCircle.calculateArea ()<< endl;
    cout<<"Circumferance of the Circle :" <<myCircle.calulateCircumferance()<< endl;
return 0;
};