#include <iostream>
using namespace std;
struct inform
{
    string name;
    int id;
};
int main() {
    
    inform student;
    
    student.name="monika";
    student.id=100;
    
    cout<<student.name<<endl;
    cout<<student.id;
    

    return 0;
}
