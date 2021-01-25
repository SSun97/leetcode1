#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target);
int main(void){
	int nums[4] = { 2, 7, 11, 15 };
	int target = 9;
	int* index = twoSum(nums, 4, 17);

	printf("[%d,%d]\n", index[0], index[1]);



	return 0;
}


int* twoSum(int* nums, int numsSize, int target){
	//int indices[2];
	int *indices = malloc(numsSize*sizeof(int));
	int i, j;

	for (i = 0; i < numsSize; i++) {
		for (j = i + 1; j < numsSize; j++){
			if (i != j){
				if (nums[i] + nums[j] == target){
					indices[0] = i;
					indices[1] = j;
				}
			}
		}
	}
	for (int i = 0; i<2; i++)
	{
		printf("%d", indices[i]);
	}
	return indices;
}
//int* twoSum(int* nums, int numsSize, int target, int* returnSize){
//	//you have to return a pointer to the array
//	//and returnSize will be the size of the array
//
//	*returnSize = 2;
//
//
//
//	//returnarr is array I am making of size2
//	int *returnarr = (int*)malloc(2 * (sizeof(int)));
//	for (int i = 0; i<numsSize; i++)
//	{
//		for (int j = i + 1; j<numsSize; j++)
//		{
//			if (nums[i] + nums[j] == target)
//			{
//				returnarr[0] = i;
//				returnarr[1] = j;
//			}
//		}
//	}
//
//
//	return returnarr;
//}
























//#include <stdio.h>
//
//
//
//
//int* twoSum(int* nums, int numsSize, int target);
//int main(){
//	int nums[4] = { 2, 7, 11, 15 };
//	int target = 9;
//	int* index = twoSum(nums, 4, 9, 0);
//
//	printf("[%d,%d]\n", index[0], index[1]);
//
//
//
//	return 0;
//}
//
//
//int* twoSum(int* nums, int numsSize, int target, int* returnSize){
//	static int indices[2];
//	int num1 = -1;
//	int num2 = -1;
//	int i, j;
//
//	for (i = 0; i < numsSize; i++) {
//		for (j = i + 1; j < numsSize; j++){
//			if (i != j){
//				if (nums[i] + nums[j] == target){
//					num1 = i;
//					num2 = j;
//				}
//			}
//		}
//	}
//	indices[0] = num1;
//	indices[1] = num2;
//	return indices;
//}

////solution.c: In function ‘twoSum’
//Line 23: Char 9 : warning : function returns address of local variable[-Wreturn - local - addr][solution.c]
//return indices;
//^~~~~~~
//solution.c: At top level
//Line 41 : Char 5 : error : redefinition of ‘main’[solution.c]
//int main(int argc, char *argv[]) {
//	^~~~
