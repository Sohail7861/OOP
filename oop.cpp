#include<iostream>
using namespace std;

/*
// I - CLASS & OBJECT

// Creation of Class //

class firstClass{                                        //class
    public:                                             //access specifier
        int rollno;                                     //{ attrib1
        string name;                                    //} attrib2
};

//Creation of Object

int main(){
    firstClass newOBj;                                     //object 1
    newOBj.name="Sohail";                                  //setting attribs
    newOBj.rollno=1;                                       // values  
    cout<<newOBj.name<<" "<<newOBj.rollno<<endl;           //printing attrib values


    firstClass nextOBj;                                    //object 2
    nextOBj.name="Rosh";
    nextOBj.rollno=2;
    cout<<nextOBj.name<<" "<<nextOBj.rollno;
}

--------------------------------------------------------------------------------------

// II - METHODS
//1. method inside a class
class Aclass{
    public:
        void name(){
            cout<<"Sohail";
        }
};
int main(){
    Aclass obj;
    obj.name();
}


//2. method outside a class
class Bclas{
    public:
        void age();
};
void Bclas::age(){
    cout<<"18";
};
int main(){
    Bclas obj1;
    obj1.age();
}

//3. parameters to methods
class Ccals{
    public:
        int sum(int a,int b){
            return a+b;
        }
        int prod(int a, int b);
};
int Ccals::prod(int a, int b){
    return a*b;
}
int main(){
    Ccals obj3;
    cout<<obj3.sum(2,3)<<'\n';
    cout<<obj3.prod(2,3);
}

--------------------------------------------------------------------------------------

// III - Constructors
class Dclas{
    public:
        Dclas(){
            cout<<"HELLO";
        }
};
int main(){
    Dclas D;
}

// with parameters inside class
class Eclas{
    public:
        string name;
        int rollno;
        Eclas(string x, int y){
            name=x;
            rollno=y;
        }
};
int main(){
    Eclas obj11("Sohail",18);
    cout<<obj11.name<<" "<<obj11.rollno;
}

// with parameters outside class
class EEclas{
    public:
        string name;
        int rollno;
        EEclas(string x, int y);
};
EEclas::EEclas(string x, int y){
    name=x;
    rollno=y;
}
int main(){
    EEclas obj12("Rosh",19);
    cout<<obj12.name<<" "<<obj12.rollno;
}


--------------------------------------------------------------------------------------

// IV - ACCESS SPECIFIERS
// 1. Public & Priv
class pubNpriv{
    public:
        int x;
    private:
        int y;
};
int main(){
    pubNpriv pp;
    pp.x=2; //allowed
    pp.y=3; //not allowed -> error
}

--------------------------------------------------------------------------------------

// V - ENCAPSULATION
// Accessing private attributes, using public "get" and "set" methods
class Encapsule{
    private:
        int salary;
    public :
        void setSal(int s){  //Setter
            salary=s;
        }
        int getSal(){  //Getter
            return salary;
        }
};
int main(){
    Encapsule e;
    e.setSal(120000);
    cout<<e.getSal();
}

--------------------------------------------------------------------------------------

// VI - INHERITANCE
// 1. Single level Inheritance
class A{                        //Base Class
    public:
        string brand="Volvo";
        void horn(){
            cout<<"Vroom Vroom"<<endl;
        }
};
class B : public A{             //Derived Class
    public:
        string model="GT";
};
int main(){
    B car;
    car.horn();
    cout<<car.brand<<endl<<car.model;
}

// 2. Multilevel Inheritance
class X{
    public:
        int x=10;
        void xox(){
            cout<<"xox"<<endl;
        }
};
class Y: public X{
    public:
        int y=20;
        void yoy(){
            cout<<"yoy"<<endl;
        }
};
class Z: public Y{
    public:
        int z=30;
        void zoz(){
            cout<<"zoz"<<endl;
        }
};
int main(){
    Z a;
    a.xox();
    a.yoy();
    a.zoz();
    cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;
}

// 3. Multiple
class S{
    public:
        string s="Sohail";
        void ss(){
            cout<<"Sohail M"<<endl;
        }
};
class R{
    public:
        string r="Rosh";
        void rr(){
            cout<<"Rosh S"<<endl;
        }
};
class L: public S, public R{
    public:
        void l(){
            cout<<"HeHe"<<endl;
        }
};
int main(){
    L ll;
    ll.ss();
    ll.rr();
    ll.l();
    cout<<ll.s<<" "<<ll.r;
}

--------------------------------------------------------------------------------------

// VII - POLYMORPHISM
class Animal{
    public:
        void animalSound(){
            cout<<"The animal makes a sound \n";
        }
};
class Dog: public Animal{
    public:
        void animalSound(){
            cout<<"Bow Bow \n";
        }
};
int main(){
    Animal a;
    Dog b;
    a.animalSound();
    b.animalSound();
}

--------------------------------------------------------------------------------------


//VIII - ABSTRACTION

class TestAbstraction {
    private: string x, y;

    public:
        void set(string a, string b) {      // method to set values of 
            x = a;                          // private members
            y = b;
        }
    //printing values  
    void print() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    // object of TestAbstraction
    TestAbstraction t1;
    t1.set("Scaler", "Academy");
    t1.print();

    return 0;
}

--------------------------------------------------------------------------------------
*/