#include<iostream>
using namespace std;
class Array{
    private:
        float *array;
        int num;
    public:
        Array(int num){
            this->num=num;
            array=new float[num];
        }
        ~Array(){
            delete []array;
        }
        void store(int index,float val){
            array[index]=val;
        }
        int show(float val){
            for(int i=0;i<num;i++){
                if(array[i]==val){
                    return i;
                }
            }
        }
        float highest(){
            int highest=array[0];
            for(int i=0;i<num;i++){
                if(array[i]>highest){
                    highest=array[i];
                }
            }
            return highest;
        }
        float lowest(){
            int lowest=array[0];
            for(int i=0;i<num;i++){
                if(array[i]<lowest){
                    lowest=array[i];
                }
            }
            return lowest;
        }
        float avg(){
            float sum=0;
            for(int i=0;i<num;i++){
                sum+=array[i];
            }
            return sum/num;
        }

};
int main(){
    float val;
    Array arr(5);
    arr.store(0,1.0);
    arr.store(1,2.0);
    arr.store(2,3.0);
    arr.store(3,4.0);
    arr.store(4,5.0);
    cout<<"Enter to find index : ";
    cin>>val;
    arr.show(val);
    cout<<"Value " << val << " found at index " <<arr.show(val)<<endl;
    cout<<"Highest value is : "<<arr.highest()<<endl;
    cout<<"Lowest value is : "<<arr.lowest()<<endl;
    cout<<"Average is : "<<arr.avg()<<endl;
}