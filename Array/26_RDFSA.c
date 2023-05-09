#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize){
	int startpoint = 0;
	int Newsize = 0;
	int i = 0;

	if(numsSize == 1 || numsSize == 0) return numsSize;
	Newsize = 1;
	startpoint = 1;

	for(i=0; i < numsSize - 1; i++){
		if(nums[i] == nums[i+1]){
			continue;
		} else {
			if((i + 1) == (numsSize - 1) ){
				nums[startpoint] = nums[i+1];
				Newsize++;
			} else {
				nums[startpoint] = nums[i+1];
				startpoint++;
				Newsize++;
			}
		}
	}

	for(i=startpoint + 1; i < numsSize; i++){
		nums[i] = 0;	
	}
	return Newsize;	
}
