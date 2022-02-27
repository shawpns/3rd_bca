// C++ program to sort an array

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void show(int a[], int array_size)
// {
// 	for (int i = 0; i < array_size; i++)
// 		cout << a[i] << " ";
// }

// int main()
// {
// 	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
// 	int asize = sizeof(a) / sizeof(a[0]);// size of the array
// 	cout << "The array before sorting is : \n";
// 	show(a, asize);// print the array
//     sort(a, a + asize);// sort the array
// 	cout << "\n\nThe array after sorting is :\n";
// 	show(a, asize);// print the array after sorting
//     return 0;
// }





// #include<iostream>
// using namespace std;

// template<class t>
// void sort(t a[],int n)
// {
//     int i,j;t tem;
//     for(i=0;i<n;i++)
//         for(j=0;j<n-i-1;j++)
//             if(a[j]<a[j+1])
//             {
//                 tem=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=tem;
//             }
//     cout<<"\n\t--------After Sorting---------\n\n";
//     for(i=0;i<n;i++) 
//         cout<<" "<<a[i];
// }
               
// int main()
// {
//     int i,n,a[25],ch;float b[25];bool exit=false;   
//     cout<<"\n\t------SORTING USING TEMPLATE-----------\n\nEnter the number of elements: ";
//     cin>>n;

//     do{
//         cout<<"\n\t--------MENU---------\n\n\t1.Integer Sorting\n\t2.Floating point Sorting\n\t3.Exit\n\nEnter your choice:";
//         cin>>ch;
//         switch(ch)
//         {
//             case 1:
//                 cout<<"\n\t------INT TYPE-----------\n\n";
//                 cout<<"\nEnter elements:\n";
//                 for(i=0;i<n;i++)
//                     cin>>a[i];
//                 sort(a,n);
//                 break;
           
//             case 2:
//                 cout<<"\n\t------FLOAT TYPE-----------\n\n";
//                 cout<<"\nEnter elements:\n";
//                 for(i=0;i<n;i++)
//                     cin>>b[i];
//                 sort(b,n);
//                 break;
//             case 3:
               
//             default:
//                 cout<<"Exiting..... \n\t\t\t\t\t\t...bye bye\n";
//                 exit=true;
//         }
//     }while(!exit);
// return 0;   
// }



#include<iostream>
#include<vector>
using namespace std;

// template function to perform bubble sort on array, arr
// n: size of arr
template<typename T>
void BubbleSort(T arr[], int n)
{
	for(int i=0;i<n-1;++i){
		for(int j=0;j<n-i-1;++j){
			if(arr[j]>arr[j+1]){
				T temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

// Template function to print array
// n: size of arr[]
template<typename T>
void PrintArray(T arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n\n";
}

int main()
{

    int arr[] = { 1, 10, 90, 100, -1, 11, 9, 14, 3, 2, 20, 19 };
    int n = sizeof(arr) / sizeof(int);

    cout << "Array Before Sorting: " << endl;
    PrintArray(arr, n);

    BubbleSort(arr, n);

    cout << "Array After Sorting: " << endl;
    PrintArray(arr, n);
}