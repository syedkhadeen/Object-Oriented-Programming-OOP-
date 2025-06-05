#include<iostream>
#include<string>
using namespace std;
class romanType{
    private:
        string romanNumeral;
        int decimalValue;
    public:
        romanType(){
            romanNumeral="";
            decimalValue=0;
        }
        void setRoman(string roman){
            romanNumeral=roman;
        }
        int getDecimal()const{
            return decimalValue;
        }
        string getRoman()const{
            return romanNumeral;
        }
        void print()const{
            cout<<"Roman Numeral : "<<romanNumeral<<endl;
            cout<<"Decimal Value : "<<decimalValue<<endl;
        }
    private:
        void convertToDecimal(){
            int len=romanNumeral.length();
            decimalValue=0;
            int prevValue=0;
            for(int i=len-1;i>=0;i--){
                char current=romanNumeral[i];
                int currentValue=getValue(current);
                if(currentValue<prevValue){
                    decimalValue-=currentValue;
                }
                else{
                    decimalValue+=currentValue;
                }
                prevValue=currentValue;
            }
        
        }
        int getValue(char romanChar){
            switch(romanChar){
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
                default:  return 0;
            }
        }
};
int main(){
     romanType roman1, roman2, roman3;

    roman1.setRoman("MCXIV");
    roman2.setRoman("CCCLIX");
    roman3.setRoman("MDCLXVI");

    roman1.print();
    cout << endl;

    roman2.print();
    cout << endl;

    roman3.print();
}