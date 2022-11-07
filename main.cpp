//ref para allow us to modify elements of a vector.
#include <iostream>
#include <vector>
using namespace std;

void product (vector<double>& values, double num)
//we dont need a return value bc we are just updating a vector?
//notice the &, which makes the values para a reference one.
//this ref para allows us to change the original vector.
//num is limited to passing value however.
{
    for (int counter = 0; counter < values.size(); counter++)
        //counter tracks iterations and indexes the vector.
        //loops 4x.
    {
        //each element gets x3.5 and assigned that new value to original vec.
        //translation w/ case study index 0:
        //values[0] = values[0] * 3.5;
        //values[0] = 4.0 * 3.5; = 14.0.
       values[counter] = values[counter] * num;
    }
}

int main() {
    vector<double> sales = {4.0, 3.0, 5.0, 6.0};
    product(sales, 3.5); //3.5 will not be reference para.

    //loop to print out new vector values multiplied by 3.5.
    for(int counter = 0; counter < sales.size(); counter++)
    {
        cout << "element " << counter + 1 << ": " << sales[counter] << endl; //if prints 14, 10.5, 17.5, 21, program works.
    }
    return 0;
}
