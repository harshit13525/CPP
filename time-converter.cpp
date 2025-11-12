#include <iostream>
using namespace std;

class TimeConverter
{
private:
  int hour,minutes,seconds,totalseconds;

public:
  void StoH()
  {
    cout << endl;
    cout << "Enter the time in hour :- ";
    cin >> hour;
    cout << "Enter the time in minutes :- ";
    cin >> minutes;
    cout << "Enter the time in seconds :- ";
    cin >> seconds;
    cout <<endl<< "Total Seconds => " << hour * 3600 + minutes * 60 + seconds << endl;
  };

  void HtoS()
  {
    cout << endl;
    cout << "Enter the seconds :- ";
    cin >> totalseconds;
   int hours = totalseconds / 3600;
    minutes = (totalseconds % 3600) / 60;
    seconds = totalseconds % 60;
    cout <<endl<< "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds << endl;
  };
};

int main()
{
  while (1 > 0)
  {
    cout << endl;
    cout <<"Enter 1 for Convert Seconds in HH:MM:SS Format " << endl;
    cout << "Enter 2 for Convert HH:MM:SS in Seconds " << endl;
    cout << "Enter 0 For Exit." <<endl<< endl;

    int choice;
    cout << "Enter Your Choice :- ";
    cin >> choice;

    TimeConverter T1;

    if (choice == 1)
    {
      T1.HtoS();
    }
    else if (choice == 2)
    {
      T1.StoH();
    }
    else if (choice == 0)
    {
      cout << "Exiting....";
      break;
    }
    else
    {
      cout <<endl<< "Invalid Input :)"<<endl;
    }
  }

}