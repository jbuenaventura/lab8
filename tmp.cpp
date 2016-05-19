#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

double celciusTofahrenheit(double c);

double testdata[] = {
    180,  356,
    100,  212, 
    40,   104, 
    37,   98.6,
    30,   86, 
    21,   70, 
    10,   50, 
    0,    32, 
    -18,  0,  
    -40,  -40 
};

int main()
{
    //testing to display
    //
    #define TEST_MODE
    #ifdef TEST_MODE
        //row * column + offset
        printf("%lf\n", testdata[2*2+0]);
        printf("%lf\n", testdata[2*2+1]);
        printf("%lf\n", testdata[1*2+1]);
        double val = celciusTofahrenheit(testdata[5*2+0]);

        //tolerance test
        double diff = val - testdata[5*2+1];
        diff = fabs(diff);
        if(diff > 0.6)
            printf("Error: in function!!!\n");
        else
            printf("Function is great!!!\n");

        return 0;
    #endif

    double c;

    cout << "Enter celcius temp: ";
    cin >> c;
    //cout << "Fahrenheit: " << celciusTofahrenheit(c);
    printf("Fahrenheit: %lf\n", celciusTofahrenheit(c));
    printf("\n");

    return 0;
}

double celciusTofahrenheit(double c)
{
    double f = c * (9.0/5.0) + 32.0;
    return f;
}
