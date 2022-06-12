int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/


class ComplexNumbers {
    // Complete this class
    private:
    int real;
    int imaginary;
    
    public:
    ComplexNumbers(int real, int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    void print(){
        cout<<this->real<<" + "<<"i"<<this->imaginary<<endl;
    }
    void plus(ComplexNumbers const &c2){
        int real1=this->real+c2.real;
        int imaginary1=this->imaginary+c2.imaginary;
        this->real=real1;
        this->imaginary=imaginary1;
    }
    
    void multiply(ComplexNumbers const &c2){
        int real = this->real * c2.real - this->imaginary * c2.imaginary;
        int imaginary = this->real * c2.imaginary + this->imaginary * c2.real;
        this->real = real;
        this->imaginary = imaginary;
    }
    
