#include<iostream>
using namespace std;
/*
class Element{
    private:
        int val;
    public:
        int getValue(){
            return val;
        }
        void setValue(int val){
            this->val=val;
        }
};
class Collection{
    private:
        Element e1,e2;
    public:
        void setElement(int eNum,int val){
            if(eNum==1){
                e1.setValue(val);
            }
            else{
                e2.setValue(val);
            }
        }
        int getElement(int eNum){
             if(eNum==1){
                 return e1.getValue();
            }
            else{
                return e2.getValue();
            }
    }
};
int main(){
    Collection c;
    for(int i=1;i<=2;i++){
        c.setElement(i,i+1);
    }
            for(int i=1;i<=2;i++){
                cout<<"Element # "<<i;
                cout<<" = ";
                cout<<c.getElement(i);
                cout<<endl;
        }
    }
    
class Element{
    private:
        int val;
    public:
        Element(){
            cout<<"Element constructed!"<<endl;
        }
        int getVal(){return val;}
        void setVal(int val){this->val=val;}
};
class Collection{
    private:
        Element e1,e2;
    public:
        Collection(){
            cout<<"Collection constructed!"<<endl;
        }
            void sedElement(int eNum,int val){
                if(eNum==1){
                    e1.setVal(val);
                }
                else{
                    e2.setVal(val);
                }
            }
            int getELement(int eNum){
                if(eNum==1){
                    return e1.getVal();
                }
                else{
                    return e2.getVal();
                }
                
        }
    
};
int main(){
    Collection c;
}

class Element{
    private:
        int val;
    public:
        Element(int x){
            setVal(x);
            cout<<"Element("<<x<<") constructed!"<<endl;
        }
        int getVal(){return val;}
        void setVal(int val){this->val=val;}
};
class Collection{
    private:
        Element e1,e2;
    public:
        Collection(): e2(2),e1(1){
            cout<<"Collection constructed!"<<endl;
        }
        void setElement(int eNum,int val){
            if(eNum==1){
                e1.setVal(val);
            }
            else{
                e2.setVal(val);
            }
        }
            int getElement(int eNum){
                if(eNum==1){
                   return e1.getVal(); 
                }
                else{
                    return e2.getVal();
                }
            }
        

};
int main(){
    Collection c;
}
*/
class A{
    private:
        int y;
    public:
        int x;
        A(int a,int b){
            x=a;
            y=b;
        }
        void print(){
            cout<<"x = "<<x<<"\ty = "<<y<<endl;
        }
};
class B{
    private:
        int z;
    public:
        A objA;
            B(int a,int b,int c):objA(a,b){
                z=c;
            }
            void print(){
                objA.print();
                cout<<"z = "<<z<<endl;
            }
};
int main(){
    B objB(3,4,5);
    objB.print();
    objB.objA.print();
}