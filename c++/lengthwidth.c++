//lenth and width 
#include<iostream>
using namespace std;

class Rectangle{
private:
double length;
double width;

 public:
 Rectangle(){
 length=0.0;
 width=0.0;
 }
 void setDimensions(double len,double wid){
    length=len;
    width=wid;
 }
 double calculateArea(){
    return length*width;
 }
 void displayDimensions() {
    cout << "Length: " << length << " Width: " << width <<endl;
    }
 };
 int main() {
    Rectangle rect;
    rect.setDimensions(8.0, 6.0);
    rect.displayDimensions();
    std::cout << "Area: " << rect.calculateArea() << std::endl;

    return 0;
};

