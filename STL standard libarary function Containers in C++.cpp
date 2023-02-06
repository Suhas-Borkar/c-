/*

STL =       Containers          +      Algorithms       +       Iterators
        object which store         Produce to store        object which points 
                data               data                     to an element of 
                                                                a container
*/

/*
   * containes 
        1) sequence containers
                    i) vector
                   ii) list
                  iii) deque
        2) Associative containers
                    i) direst access
                            example = set/multistate
                                      map/multimap
        3) derived containers
                    real world modelling 
                            --> stack   == last in frist out "LIFO";
                            --> queue   == frist in first out "FIFO";
                            --> priority queue  == 
*/

/*
   * When to use which
        * Sequence container
            1. vector -> random access = fast.
                        middle insertion/deletation = slow.
                        last insertion/deletation =  fast.
            
            2. list -> Random Access = slow.
                       middle insertion/deletation = fast.
                       end insertion/deletation = fast.

        * Associative Containers
            1. All Operation fast.
            2. Expect RA. 

        * Derived Containers 
            1. depand -> data structure 
            2. 
        

*/