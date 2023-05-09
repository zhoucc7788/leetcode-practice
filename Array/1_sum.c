/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target){
	int i, j;
	int *result=NULL;
	for(i = 0; i<numsSize-1; i++)
	{
		for(j = i+1; j<numsSize; j++)
		{
			if(*(nums+i)+*(nums+j) == target)
			{
				result=malloc(sizeof(int)*2);//这里原本的写法是这样result=(int*)malloc(sizeof(int)*2);这里的(int*)是多余的
				result[0]=i;
				result[1]=j;
				return result;	//return回去的是result的地址，如果前面没有malloc的话，函数结束后是会把result的地址里的内容清除掉的，所以malloc是必不可少的一步，它提前分配了内存，才能让这个地址指向的内容不会因为函数结束而失效
			}
		}
	}
	return result;
}

void print1(int arr[], int sz)  //通过数组接受的方式
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main(){
	int in[] = {2,7,11,15};
	int target = 9;
	int *result;//这里要定义为指针，要不然下面取返回的地址的时候是错的，一开始我在这里是写的result[2]，这样的话定义的是一个数组而不是个指针，如果下面对应的也是result，编译就会提示传入的数据类型不对，如果下面写的是*result=*twoSum(in,4,target);，很意外的这里不会报错，但结果是0,0。可能因为*result指的是result数组里的首位，然后*twoSum(in,4,target);指的是返回的地址的首位，这个赋值就成功了，而第二位默认就是0,就没有更新赋值（调试的时候发现第二位确实默认是0）
	result = twoSum(in,4,target);

	int sz=sizeof(result)/sizeof(int);
	print1(result,sz);
	

}
