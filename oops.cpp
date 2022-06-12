#include<iostream>
using namespace std;
class Fraction{
    private:
    int numerator;
    int denominator;
    public:
    Fraction(int numerator, int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void print(){
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }
    void simplify(){
        int gcd=1;
        int j=min(this->numerator, this->denominator);
        for(int i=1; i<=j; i++){
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd=i;
            }
        }
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    }
    void add(Fraction const &f2){
        int lcm=this->denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator + y*(f2.denominator);
        numerator=num;
        denominator=lcm;
        simplify();
    }
    void multiply(Fraction const &f2){
        this->numerator=this->numerator*f2.numerator;
        this->denominator=this->denominator*f2.denominator;
        simplify();
    }
};
int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();
    f1.multiply(f2);
    f1.print();
    f2.print();
    return 0;
}
