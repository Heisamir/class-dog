#include <iostream>
#include <ctime>
using namespace std;

class Dog
{
private:
    int score = 0;
public:
    char name[10];
    int birthyear;
    void setscore()
    {
        score++;
    }
    int getscore()
    {
        return score;
    }
    void bork()
    {
        cout << "Bork!";
    }
    int calAge()
    {
        time_t now_time = time(0);
        tm* mytime = localtime(&now_time);
        int currentYear = mytime->tm_year + 1900;
        return currentYear - birthyear;
    }
};

int main()
{
    Dog myDog;
    myDog.birthyear = 2015;
    strcpy(myDog.name, "Buddy");
    cout << "Dog's name: " << myDog.name << endl;
    cout << "Dog's age: " << myDog.calAge() << endl;
    myDog.bork();
    cout << endl;
    myDog.setscore();
    cout << "Dog's score: " << myDog.getscore() << endl;
    return 0;
}
