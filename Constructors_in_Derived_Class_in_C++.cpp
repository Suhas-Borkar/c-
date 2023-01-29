/*
    * 1. We can use constructor in derived classes in c++.
    * 2. If base class constructor does not have any arguments, there is no need of any constructor in derived class.
    * 3. But if there are one or more arguments in the base class constructor, 
        *   derived class need to pass arguments to the base class constructor.
    * 4. If both base and derived classes have constructor, base class constructor is executed first. 


    * constructor in multiple inheritance 
    * ===>
            * In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration.  
            * In multiple inheritance, the constructor are executed in the order of inheritance.

    * special syntax
    * ===>
            * C++ supports an special syntax for passing argument to multiple base class.
            * The constructor of the derived class receives all the arguments at ones and them will pass the call to the respective base class.
            * The body is called after all the constructors are finished executing.
            
            * Derived-Constructor(arg1, arg2, arg3,.......):Base-Constructor(arg3, arg4){
                ......
            }Base-Constructor(arg1, arg2)

*/

