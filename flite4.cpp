#include<iostream>
using namespace std;
class Flight
{
    int Flightnomber;
    string Destionation;
    float Distance,fuel;
    public: 
    void FlightNomber()
    {
        cout<<"enter the flight number :";
        cin>>Flightnomber;
    }
     void FlightDestination()
    {
        cout<<"enter the destination:";
        cin>>Destionation;
    }
     void FlightDistance()
    {
        cout<<"enter the Distance :";
        cin>>Distance;
    }
    void CALFUEL()
    {
    if(Distance<=1000)
        {
            fuel = 500;
        }
    else if(Distance>1000&&Distance<=2000)
        {
            fuel = 1100;
        }
    else
        {
             fuel = 2200;
        }
    }
    void FeedInfo()
    {
    cout<<" \n  flight number :"<<Flightnomber;
    cout<<" \n  flight destination :"<<Destionation;
    cout<<" \n  flight distance :"<<Distance;
    cout<<" \n  flight cost :"<<fuel;
    }
};
int main()
{
    Flight Flight1;
    Flight1.FlightNomber();
    Flight1.FlightDestination();
    Flight1.FlightDistance();
    Flight1.CALFUEL();
    Flight1.FeedInfo();
    
}

