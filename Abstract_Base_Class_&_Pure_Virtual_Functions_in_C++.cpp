// // Here is an example of an abstract base class in C++:
// #include <iostream>
// using namespace std;

// class Shape
// {
// public:
//     virtual void area() = 0; // pure virtual function
// };

// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}
//     void area() { cout << "The radius of this Circle " << 3.1415926535 * radius * radius << endl; }
// };

// class Rectangle : public Shape
// {
// private:
//     double width;
//     double height;

// public:
//     Rectangle(double w, double h) : width(w), height(h) {}
//     void area() { cout << "The area of this Rectangle is " << width * height << endl; }
// };



// int main()
// {
//     double r;
//     double w;
//     double h;

//     r = 12;
//     w = 13;
//     h = 15;

//     Circle cir(r);
//     cir.area();
//     Rectangle re(w, h);
//     re.area();
// }


// Here is an example of a pure virtual function in C++:

#include <iostream>
using namespace std;

class shape {
protected:
    string name;
    public:
    shape(string na){
        name =na;
    }
    virtual void area() = 0 ; //pure virtual function  
};

class circle : public shape {
    protected:
    double radius;
    public:
    circle(double r, string na):shape(na){
        radius = r;
    };
    void area(){
        cout<<"name is "<<name<<endl;
        cout<<"The radius of this circle is "<<3.14*radius*radius<<endl;
    }
};

class square : public shape {
    protected:
    double side;
    public:
    square(double r, string na):shape(na){
        side = r;
    };
    void area(){
        cout<<"name is "<<name<<endl;
        cout<<"The area of this square is "<<side*side<<endl;
    }
};

int main(){
    string na="A_to_Z";
    double r = 2;
    double si= 19;

    circle hello(r,na);
    // hello.area();

    square soa(si, na);
    // soa.area(); 

    shape * shap[2];
    shap[0] = & hello;
    shap[1] = & soa;

    for (int i = 0; i < 2; i++)
    {
        shap[i]->area();
    }
    


};