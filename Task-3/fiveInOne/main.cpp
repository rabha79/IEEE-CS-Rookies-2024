#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int asize = 100005;
void insertArray(int arr[asize], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
int maxNumber(int arr[asize], int size, int max)
{
	sort(arr, arr + size);
	max = arr[size - 1];
	return max;
}
int minNumber(int arr[asize], int size,int min)
{
	min = arr[0];
	return min;
}
int countPrime(int arr[],int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		int flag = 0;
		int dsize = arr[i] / 2;
		for (int k = 2; k < arr[i]; k++)
		{
			if (arr[i] % k == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0 && arr[i] != 1 && arr[i] !=0)
		{
			count++;
		}
	}
	return count;
}
int countPlaindrome(int arr[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		int temp = arr[i];
		int remainder=0;
		int value = arr[i];
		int sum = 0;
		while (value> 0)//125
		{
			remainder =value% 10;
			sum =(sum * 10) + remainder;
			value/= 10;
		}
		if (temp == sum)
		{
			count++;
		}
	}
	return count;
}
int maxDivisor(int arr[], int size)
{
	int max = 0;
	int temp = arr[0];
	for (int i = 0; i < size; i++)
	{
		int count = 0;
		int dsize = arr[i] / 2;
		for (int k = 1; k < arr[i]; k++)
		{
			if (arr[i] % k == 0)
			{
				count++;
			}
		}
		if (count >= max)
		{
			max = count;
			if(temp<arr[i])
			temp = arr[i];
		}
	}
	return temp;
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int size;
	cin >> size;
	int arr[asize];
	insertArray(arr, size);
	int max = arr[0];
	int min = arr[0];
	cout<<"The maximum number : " << maxNumber(arr, size, max)<<endl;
	cout<<"The minimum number : " << minNumber(arr, size, min) << endl;
	cout << "The number of prime numbers : " << countPrime(arr, size) << endl;
	cout <<"The number of palindrome numbers : "<< countPlaindrome(arr, size)<<endl;
	cout << "The number that has the maximum number of divisors : " << maxDivisor(arr, size)<<endl;

    return 0;
}
