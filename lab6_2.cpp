//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker that is a really cool name.
Fahsai: I think you are Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47.  I have a free movie tickets for you. 
Fahsai: Let's go to cinema together!!! 
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watch Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/ 
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, movie, date, ans;
    int id;

    cout << "Fahsai: Sawadee ka...Can you tell me your name? " << endl << "??????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " that is a really cool name." << endl;
    cout << "Fahsai: I think you are Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> id;
    cout << "Fahsai: I think you may be GEAR " << (id/10000000) - 12 << ".  I have a free movie tickets for you." << endl;
    cout << "Fahsai: Let's go to cinema together!!!" << endl;
    cin.ignore();
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin,date);
    cout <<"Fahsai: " << date << "....that is OK!!! I'm looking forward to watch " << movie << " with you." << endl;
    cout << name << ": ";
    getline(cin,ans);
    cout << "Fahsai: 555+ see you Next Monday. Bye Bye \\(^ ^)/";

    return 0;
}