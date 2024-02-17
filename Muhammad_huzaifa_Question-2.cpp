#include <iostream>
using namespace std;
int main(){
    int principle_amount;
    int interest_rate;
    int time;
    int simple_interest;
    cout<<"Enter the priciple amount ";
    cin>>principle_amount;
    cout<<"Enter the the interest rate ";
    cin>>interest_rate;
    cout<<"Enter the time in years ";
    cin>>time;
    simple_interest=(principle_amount*interest_rate*time)/100;
    cout<<"The simple interest is "<<simple_interest;



}