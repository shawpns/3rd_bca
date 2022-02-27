// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, mark[5];
//     float sum = 0, avg, perc;
//     cout << "Enter Marks obtained in 5 Subjects: ";
//     for (i = 0; i < 5; i++)
//     {
//         cin >> mark[i];
//         sum = sum + mark[i];
//     }
//     avg = sum / 5;
//     perc = (sum / 500) * 100;
//     cout << "\nAverage Marks = " << avg;
//     cout << "\nPercentage Marks = " << perc << "%";
//     cout << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float num, arr[10], sum = 0, avg, perc;
    cout << "Enter Number of Subjects: ";
    cin >> n;
    cout << "\nEnter Total Marks: ";
    cin >> num;
    cout << "\nEnter Marks obtained in " << n << " Subjects: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    avg = sum / n;
    perc = (sum / num) * 100;
    cout << "\nAverage Marks = " << avg;
    cout << "\nPercentage Marks = " << perc << "%";
    cout << endl;
    return 0;
}