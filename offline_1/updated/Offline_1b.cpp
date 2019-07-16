#include <bits/stdc++.h>

#define ull         unsigned long long
#define ll          long long
#define ld          long double
#define FASTIO      ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define pf          printf
#define sf          scanf
#define pi          acos(-1.0)
#define reset(x, v) memset(x, v, sizeof(x));
#define e           1e-9
#define pause()     cin.get();
#define vecInt      vector<int>

using namespace std;

ll swapCounter;
ll comparisonCounter;

// selection sort
template <typename T>
void selectionSort(T *arr, T n)
{

    T min;
    comparisonCounter=0;
    swapCounter=0;

    for(T i=0; i<n-1; i++)
    {
        min=i;
        for(T j=i+1; j<n; j++)
        {
            comparisonCounter++;
            if(arr[j]<arr[min])
            {
                min=j;
                // cout << "hello" << endl;
            }

        }
        swap(arr[i], arr[min]);
        swapCounter++;

    }

}

// insertion sort
template <typename T>
void insertionSort(T *arr, T n)
{
    T temp,j;
    for(T i=1; i<n; i++)
    {
        temp=arr[i];
        for(j=i-1; temp<arr[j] && j>=0; j--)
        {
            arr[j+1]=arr[j];
            swapCounter++;

        }

        arr[j+1]=temp;
    }
    comparisonCounter=swapCounter;
}


// bubble sort
template <typename T>
void bubbleSort(T *arr, T n)
{
    bool flag=false;
    swapCounter=0;
    for(T i=0; i<n-1; i++)
    {
        // cout << i+1 << endl;
        for(T j=0; j<n-i-1; j++)
        {

            comparisonCounter++;
            if(arr[j] > arr[j+1])
            {

                swap(arr[j], arr[j+1]);
                flag=true;
                swapCounter++;

            }

        }
        if(!flag)
            break;
        flag=false;
    }
}


int main()
{
    // FASTIO;

    int size=1000,n;
    srand(time(NULL));

    while(1)
    {

        int arr[size];
        cout << "Enter maximum limit of elements: ";
        cin >> n;
        system("CLS");

        for(int i=0; i<size; i++)
            arr[i]=rand()%n+1;

        int l=sizeof(arr)/sizeof(arr[0]);



        clock_t start_t, end_t;
        double cpu_time;


        // Bubble sort begins
        start_t = clock();
        bubbleSort(arr, l);
        end_t = clock();
        cpu_time = ((double) (end_t-start_t))/CLOCKS_PER_SEC;

        cout << "Bubble Sort" << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << "Time taken: " << cpu_time << endl;
        cout << "Total Swap performed: " << swapCounter << endl;
        cout << "Total Comparison performed: " << comparisonCounter << endl;
        cout << endl;


        // insertion sort begins
        start_t = clock();
        insertionSort(arr, l);
        end_t = clock();
        cpu_time = ((double) (end_t-start_t))/CLOCKS_PER_SEC;

        cout << "Insertion Sort" << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << "Time taken: " << cpu_time << endl;
        cout << "Total Swap performed: " << swapCounter << endl;
        cout << "Total Comparison performed: " << comparisonCounter << endl;
        cout << endl;



        // selection sort begins
        start_t = clock();
        selectionSort(arr, l);
        end_t = clock();
        cpu_time = ((double) (end_t-start_t))/CLOCKS_PER_SEC;

        cout << "Selection Sort" << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << "Time taken: " << cpu_time << endl;
        cout << "Total Swap performed: " << swapCounter << endl;
        cout << "Total Comparison performed: " << comparisonCounter << endl;
        cout << endl;



    }




    return 0;
}


