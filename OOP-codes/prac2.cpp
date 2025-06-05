#include<iostream>
using namespace std;
class LineType{
    private:
        double a,b,c;
    public:
        LineType(double a,double b,double c):a(a),b(b),c(c){}
        bool operator == (LineType &other){
            if(a==other.a &&b==other.b && c==other.c){
                return true;
            }
            else{
                return false;
            }
        }
        bool operator || (LineType &other){
            double slope1=-1*(a/b);
            double slope2=-1*(other.a/other.b);
            if(slope1==slope2){
                return true;
            }
            else    
                return false;
        }
        bool operator+(){
            if(a==0){
                return true;
            }
        }
        bool operator &&(LineType &other){
        double slope1 = -1 * (a / b);
        double slope2 = -1 * (other.a / other.b);
        return ((a == 0 && other.b == 0) || (b == 0 && other.a == 0) || (slope1 * slope2 == -1));
        }
        bool operator - (){
            if(b==0){
                return true;
            }
            else
                return false;
        }


};
    int main() {
    LineType line1(2, 3, 4);
    LineType line2(4, 6, 8);
    LineType line3(3, 2, 5);
    LineType line4(0, 5, 7);

    // Testing equality
    std::cout << "Are line1 and line2 equal? " << (line1 == line2) << std::endl;

    // Testing parallelism
    std::cout << "Are line1 and line3 parallel? " << (line1 || line3) << std::endl;

    // Testing perpendicularity
    std::cout << "Are line1 and line3 perpendicular? " << (line1 && line3) << std::endl;

    // Testing if line4 is vertical
    std::cout << "Is line4 vertical? " << +line4 << std::endl;

    // Testing if line4 is horizontal
    std::cout << "Is line4 horizontal? " << -line4 << std::endl;

    return 0;
}
