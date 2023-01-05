#include<iostream>
#include<iomanip>
using namespace std;

class Time{
private:
    int hours, minuts, seconds;
public:
    Time(){
        hours = minuts = seconds = 0;
    }
    Time& SetHours(int hours){
		this->hours = hours;
		return *this;
	}
	Time& SetMinuts(int minuts){
		this->minuts = minuts;
		return *this;
	}
	Time& SetSeconds(int seconds){
		this->seconds = seconds;
		return *this;
	}
	Time operator +(Time t2){
        Time t3;
        t3.hours = hours + t2.hours;
        t3.minuts = minuts + t2.minuts;
        t3.seconds = seconds + t2.seconds;
        t3.hours += t3.minuts / 60, t3.minuts += t3.seconds / 60;
	    t3.seconds %= 60, t3.minuts %= 60, t3.hours %= 24;

	    return t3;
	}
	void dispaly(){
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minuts << ":"
             << setw(2) << setfill('0') << seconds << "\n";
    }
};
int main(){
    Time t1, t2, t3;

    t1.SetHours(3).SetMinuts(9).SetSeconds(21);
    t1.dispaly();

    t2.SetHours(3).SetMinuts(53).SetSeconds(40);
    t3 = t1 + t2;
    t3.dispaly();
    return 0;
}
