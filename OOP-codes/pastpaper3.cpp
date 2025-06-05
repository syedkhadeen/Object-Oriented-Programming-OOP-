#include<iostream>
using namespace std;
class Matrix{
    private:
        int matrix[3][3];
    public:
        Matrix(int matrix[][3]){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    this->matrix[i][j]=matrix[i][j];
                }
            }
        }
        friend Matrix addMatrix(Matrix &mat1,Matrix &mat2);
        void displayMatrix(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                  cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};
Matrix addMatrix(Matrix &mat1,Matrix &mat2){
    int sum[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=mat1.matrix[i][j]+mat2.matrix[i][j];
        }
    }
    Matrix result(sum);
    return result;
}
int main(){
    int m1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Matrix mat1(m1);
    int m2[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    Matrix mat2(m2);
    Matrix resultant=addMatrix(mat1,mat2);
    cout<<"Resultant Matrix : "<<endl;
    resultant.displayMatrix();

}