#include<iostream>
using namespace std;
class Currency{
    private:
        long pounds;
        int shillings;
        int pence;
    public:
        Currency(){}
        Currency(long pounds,int shillings,int pence){
            this->pounds=pounds;
            this->shillings=shillings;
            this->pence=pence;
        }
        double getSterling(){
            double val=(double)pence/12;
            double sterling=(double)pounds+((double)shillings/20)+(val/20);
            return sterling;
        }
};
int main(){
    Currency c(5,2,8);
    cout<<"In decimal it would be : "<<c.getSterling()<<endl;
}