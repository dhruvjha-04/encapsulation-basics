#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_num, balance;

    public:
    Customer(string name, int acc_num, int balance)
    {
        this->name=name;
        this->acc_num=acc_num;
        this->balance=balance;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
        }
        else
        {
            cout<<"Invalid Amount\n";
        }
    }
    void withdraw(int amount)
    {
        if(amount<=balance&&amount>0)
        {
            balance-=amount;
        }
        else{
            cout<<"Invalid Amount\n";
        }
    }
    void diplay()
    {
        cout<<name<<" "<<acc_num<<" "<<balance<<endl;
    }
};
    int main()
    {
        Customer A1("dhruv", 542, 50000);

        A1.diplay();
    }