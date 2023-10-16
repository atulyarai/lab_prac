#include <bits/stdc++.h>
using namespace std;

template <class t>
t add (t x, t y){
    return x+y;
}


class animals{

    protected:
    int k;
    public:
    int age;
    static int total;

    animals(int age){
        this->age=age;
        total++;
        cout << "called" << total << endl;
    }

    static void totalanimals(){
        cout << animals::total << endl;
    }

    void print(){
        cout << "papa class" << endl;
    }

    void operator+ (animals &age1){
        int val1=total*age1.age;
        cout << "plus h bkl  "<<  val1 << endl;
         
    }

    void operator ++(){
        cout << "age before :" << this->age << endl;
        age+=10;
        cout << "age after 10 yrs :" << this->age << endl;

    }

};

int animals::total =0;

class reptiles : public animals{
    public:
     reptiles(int age) : animals(age){
        cout << "reptilian detected " << endl;
     }

     void print(){
        cout << "beta class" << endl;
    }
};

int main(){

    animals a1(10);
    animals a2(20);
    animals a3(30);
    animals a4(40);
    animals a5(50);
    animals a6(60);
    animals::totalanimals();
    reptiles r1(70);
    reptiles r2(70);
    reptiles r3(70);
    r3+a6;
    animals::totalanimals();
    ++r3;
    string st="atulya";
    string s;
    ofstream obj1("sample.txt");
    obj1 << st << endl << "sample ";
    obj1.close();
    ifstream obj2("sample.txt");
    while (obj2){
        getline(obj2, s);
        cout << s << endl;
        s="";
    }
    obj2.close();


    cout << add<string>("atul","ya");



}
