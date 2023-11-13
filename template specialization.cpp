#include <iostream>
using namespace std;
template <class H>
class ham{
    public:
        ham(H a){
            cout << a << " is not a character!" << endl;
        }
};
template<>
class ham<char>{
    public:
        ham(char a){
        cout << a << " is indeed a character!" << endl;
        }
};
int main(){
    ham<int> ho(8);
    ham<double> mo(8.5);
    ham<char> sho('f');
}

/* Template Specialization

- Way to create a class that has a different
implementation when a specific data type is passed into it.

- If we made a regular template, we pass any data type
into it, and it would handle it.

- But if we wanted to create a class which added numbers ints and floats
as it would but it would do something specific when it was passed
some characters which being the specific data type here.

- Generic template class

- Specialized template class

- This act is called template specialization:
i.e. different implementation when a specific data
type is passed into it.

*/
