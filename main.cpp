#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age,christian;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Is she a christian (1 for yes, 0 for no): ";
    cin >>christian;

    if(age < 20 && christian >= 1){
        cout << "Congratulations, " << name << "She is the one" << endl;
    }
     else{
        cout << "Sorry, " << name << "she is not the one but do not give up" << endl;
     }

    return 0;
}
