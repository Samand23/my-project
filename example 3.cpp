#include <iostream>
using namespace std;

class Students{
public:
    string Name;
    string LastName;
    int Age;
    float Score;
    char Result;


void information(){

    cout << "Name - " << Name << endl;
    cout << "LastName - " << LastName << endl;
    cout << "Age - " << Age << endl;
    cout << "Score - " << Score << endl;
    cout << "Result - " << Result << endl;
}

};

int main(){

    cout << "students information" << endl;
    cout << endl;

    Students person1{"saman", "dowlatshah", 24, 17.5, 'B'};

    person1.information();

    cout << endl;

    Students person2{"mani", "katozian", 19, 19.2, 'A'};

    person2.information();

    cout << endl;

    Students person3{"bahram", "azimi", 17, 14.2, 'C'};

    person3.information();

    cout << endl;

    Students person4{"reza", "ahmadi", 15, 16.5, 'B'};

    person4.information();

    cout << endl;


    Students person5{"ali", "motahari", 22, 18, 'A'};

    person5.information();



    return 0;
}
