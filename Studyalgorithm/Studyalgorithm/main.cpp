﻿#include <iostream>
using namespace std;
<<<<<<< HEAD

void main()
{
	//1. 출력값은?
	{
		int a;
		int* p;
		p = &a; 
		a = 2;
		printf("%d\n", *p); //2
	}

	//2. 출력값은? 
	{
		int num1 = 1;
		int num2 = 2;
		int* ptr;
		ptr = &num1;
		*ptr += 1;
		ptr = &num2;
		*ptr += 2;
		printf("%d\n", num1); //2
		printf("%d\n", num2); //4
	}

	//3. 출력값은? 	
	{
		int Arr[5] = { 0 };
		int* pArr = Arr;
		printf("%d \n", sizeof(Arr) + sizeof(pArr)); //20+8
	}

	//4. 출력값은? 	
	{
		int num = 1;
		int* pnum = nullptr;
		pnum = &num;
		cout << *&num + *&*pnum << endl; // 2
	}

	//5. 출력값은? 	
	{
		int arr[] = { 1,2,3 };
		int* pn = nullptr;
		pn = arr;
		*pn += 10;
		pn++;
		cout << *pn << endl; // nullptr -> 1 -> 11 -> 2
	}

	//6. 출력값은? 	
	{
		int array[5] = { 10, 20, 30, 40, 50 };
		int* p = array + 2; //30

		++* p++; // 40
		printf("%d \n", *p);			//값은 어떻게 될까요? // 40
		printf("%d \n", array[2]); // 31
		printf("%d \n", array[3]); // 40

		printf("%d \n\n", ++*p++);		//값은 어떻게 될까요? // 41
	}

	//7. 출력값은?
	{
		int arr1[5] = { 11164,2,3,4,5 };
		char* p2 = (char*)arr1;

		printf("%d\n", *p2++); //1
		printf("%d\n", *p2++); //0
		printf("%d\n", *p2++); //0
		printf("%d\n", *p2++); //0
		printf("%d\n", *p2++); //2
	}

	//8. 포인터 p 를 사용하여 배열의 값을 모두 더하세요.
	{
		int arr[5] = { 1,2,3,4,5 };
		int* p = arr;
		int sum = 0;
		sum += *p++;
		sum += *p++;
		sum += *p++;
		sum += *p++;
		sum += *p;
		cout << sum;
	}
=======
>>>>>>> 813223c510ef183aeec2e9162cc552e817a9b4a2



<<<<<<< HEAD
=======
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

}

>>>>>>> 813223c510ef183aeec2e9162cc552e817a9b4a2
