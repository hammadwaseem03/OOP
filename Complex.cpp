#include <iostream>
using namespace std;
class Complex{
    //by default private
    float real;
    float img;
    public:
    //default constructor
    Complex(){
        real=0;
        img=0;
    }
    //parameterize constructor
    Complex(float real,float img){
        this->real=real;
        this->img=img;
    }
    //copy construntor
    Complex(const Complex & c1){
        real=c1.real;
        img=c1.img;
    }
    Complex operator + (const Complex &obj){
        Complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    void display(){
        cout<<real<<"+"<<img<<"i";
    }
};
int main(){
    Complex c1(2,3),c2,c3(3,4),result;
    
    c2=c1;
    
    result=c2+c3;
    result.display();

}
