#include <iostream>
using namespace std;

class BankAccount{
    private:
    string accountHolder;
    float balance;
    public:
    BankAccount():accountHolder("Unknown"),balance(0){};
    BankAccount(string accH,float b):accountHolder(accH),balance(b){};
    float get_balance(){
        return balance;
    }
    void set_balance(float b){
        balance=b;
    }
    string get_name(){
        return accountHolder;
    }
    void set_name(float b){
        accountHolder=b;
    }
};

class SavingsAccount:public BankAccount{
    private:
    float interst;
    public:
    SavingsAccount(string acch,float balanc,float i):BankAccount(acch,balanc),interst(i){};
    void set_interst(float i){
        interst=i;
    }
    void AddInterst(){
        cout<<"The Balance Before Interset is "<<get_balance()<<endl;
        set_balance((get_balance()*(interst+1)));
        cout<<"The Balance After Interset is "<<get_balance()<<endl;
    }
};



int main(){
SavingsAccount user1("ibrahim",9000,0.3);
user1.AddInterst();
}