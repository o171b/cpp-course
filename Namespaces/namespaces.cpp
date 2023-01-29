#include <iostream>
using namespace std;

namespace first //to remove conflict we need to define namespace with its name
{void fun()
{
    cout<<"First";
}
}

namespace second //we define namespace second
{void fun()
{
    cout<<"second";
}
}

using namespace first; ////you can use this header aswell, but it is not recommended so avoid it
int main()
{
    fun(); //when you call the function you give the namespace and scope resolution
    second::fun(); //you can also use scope resolution
}

/*Namespaces are used for removing name conflicts, if you're writing multiple functions
with the same name, signature everything is same, they're not overloaded. In your project
you might need the same function names, so there will be name conflict.*/