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

/**
 * Method: MaxSumSubArray2D
 *    Function to find the Maximum sub-array of given 2D Array.
 *
 * @param   a[][COL] - The 2D Array Matrix of integers
 *
 * @return  nothing
 */
void MaxSumSubArray2D( int **a, int rows, int columns)
{
    int MaxSum = -1;
    int MaxSumTop = 0;
    int MaxSumBottom = 0;
    int MaxSumLeft = 0;
    int MaxSumRight = 0;
    for( int i = 0; i < rows; i++)
    {
        for(int j = i; j < columns ; j++)
        {
            for(int p = 0;p < rows;p++){
                
                for(int q = p; q < columns; q++){
                    int tempSum = 0;
                    for(int r = i ; r < j ; r++){
                        for (int k = p; k < q; k++)
                            tempSum += a[r][k];
                        
                        if (MaxSum < tempSum){
                            MaxSum = tempSum;
                            MaxSumTop = p;
                            MaxSumBottom = q-1;
                            MaxSumLeft = i;
                            MaxSumRight = j-1;
                        }
                    }
                }
            }
        }
    }
    cout << "Max Sum in the array : " << MaxSum << endl;
    cout << "Max Sum (Top,left) : (" << MaxSumTop << " , " << MaxSumLeft << ")" ;
    cout << "\nMax Sum (Bottom,right) : (" << MaxSumBottom << " , " << MaxSumRight << ")" << endl;
}

