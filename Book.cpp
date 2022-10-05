#include<iostream>
using namespace std;

class  Book
{
    int Bookno,copy;
    string BookTitle;
    float Price;
    public:

    void INPUT()
    {
        cout<<"Enter Book No : ";
        cin>>Bookno;
        cout<<"\n Enter Book Title : ";
        cin>>BookTitle;
        cout<<"\n Enter Book Price : ";
        cin>>Price;
    }
    void PURCASE()
    {
        cout<<"\n Book Name : "<<BookTitle;
        cout<<"\n How many Book You buy : ";
        cin>>copy;

    }
    void TOTAL_COST()
    {
        cout<<"\n You Buy "<<copy<<"Books ..";

    }
};
int main()
{
    Book  Story;
    Story.INPUT();
    Story.PURCASE();
    Story.TOTAL_COST();
}
