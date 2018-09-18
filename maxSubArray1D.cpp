#include <iostream>

using namespace std;

/**
 * Method: MaxSumSubArray
 *    Function to find the Maximum sub-array of given 1D Array.
 *
 * @param   a[] - The array of Integers
 *          size - Size of the array
 *
 * @return  nothing
 */
void MaxSumSubArray( int a[], int size)
{
    int MaxSum = -1;
    int MaxSumStart = 0, MaxSumEnd = 0;
    
    for( int i = 0; i < size; i++)
    {
        for(int j = 0; j < size ; j++)
        {
            int tempSum = 0;
            for (int k = i;k < j;k++)
                tempSum += a[k];
            if (MaxSum < tempSum){
                MaxSum = tempSum;
                MaxSumStart = i;
                MaxSumEnd =j;
            }
            
        }
    }
    cout << "Max Sum in the 1D - Array  : " << MaxSum << endl;
    cout << "Max Sum Start : " << MaxSumStart << endl ;
    cout << "Max Sum End : " << MaxSumEnd-1 << endl;
}
