/* 
for a protected member:
                            public derivation  |  private derivation   |   protected derivation.
    1.public derivation       Not Inherited    |    Not inherited      |      Not Inherited
                                               |                       |
    2.private derivation      Protected        |   Private             |     Protected
                                               |                       |
    3.protected derivation    public           |    Private            |      Protected

*/

#include <iostream>
using namespace std;

class base{
int a=10;

protected:
int b=20;

public: 
int c=30;
};


class pub : public base{

};

class pri : private base{

};

class pro : protected base{

};

int main(){
   base c;
  cout<<c.c;
//   cout<<c.b;
//   cout<<c.a;

   pub p;
//   cout<<p.c;    --> output yet
//   cout<<p.b;    --> declared protected here
//   cout<<p.a;    --> declared private here
    pri r;
//   cout<<r.c;   --> declared private here
//   cout<<r.b;   --> declared protected here
//   cout<<r.a;   --> declared private here

    pro k;
//   cout<<k.a;     --> declared protected here
//   cout<<k.b;     --> declared protected here
//   cout<<k.c;     --> declared protected here
}