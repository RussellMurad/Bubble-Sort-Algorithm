#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int Arr[], int N)
{
    for(int i=0; i<N-1; i++)
    {
        int flag = 0;
        for(int j=0; j<N; j++){

            if(Arr[j] > Arr[j+1])
            {
                int temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = 1;
            }

        }

        if(flag == 0)
            break;

    }
}

int main()
{
    int Arr[] = {10,5,1,2,9,6,8,3,7,4};
    BubbleSort(Arr, 10);

    for(int i=0; i<10; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}
