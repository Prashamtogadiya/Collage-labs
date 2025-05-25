/*  Given an array of integers nums and an integer target, return indices of the two numbers such that they add 
    up to target. You may assume that each input would have exactly one solution, and you may not use the 
    same element twice. You can return the answer in any order.
*/

#include <stdio.h>
#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *result;

    // accocate memory to result
    result = (int *)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                // return the index of the selected element
                return result;
            }
        }
    }
    // because there is no such pair whic satisfy to target 
    *returnSize = 0;

    // de-allocate momory
    free(result);

    // in main() return 0 = that the program executed successfully
    // for UDF {retunr 0 = false} and {return 1 = true}
    // there is no diffrence between return 0 and return NULL for a pointer 
    return NULL;
}
int main(int argc, char *argv[])
{
    int *nums, target, numsSize, i, *result, returnSize;

    // defining total numbers
    scanf("%d", &numsSize);

    // allocate memory to nums
    nums = (int *)malloc(numsSize * sizeof(int)); 

    // allocate values to nums
    for (i = 0; i < numsSize; i++)
    {
        scanf("%d", (nums + i));
    }

    // scaning the target
    scanf("%d", &target);

    // calling to function
    result = twoSum(nums, numsSize, target, &returnSize);

    // print output
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }

    // de-allocate momory
    free(nums);
    free(result);
    return 0;
}