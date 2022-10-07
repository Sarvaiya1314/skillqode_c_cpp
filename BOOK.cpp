#include<iostream>
using namespace std;
 class  Book
 {
        int Bookno,copy;
        string BOOKTITLE;
        float Price,totalprice ;
        public:

        void INPUT()
        {
            cout<<"Enter Book No :";
            cin>>Bookno;
            cout<<" Enter Book Title : ";
            cin>>BOOKTITLE;
            cout<<" Enter Book Price : ";
            cin>>Price;
        }
        void PURCHASE()
        {
            cout<<"Enter  Number of Copy : ";
            cin>>copy;
        }
        void totalCost()
        {
                totalprice=Price*copy;
                cout<<"\n Total Price : "<<totalprice;
        }
 };
 int main()
 {
    Book Story;
    Story.INPUT();
    Story.PURCHASE();
    Story.totalCost();
 }
