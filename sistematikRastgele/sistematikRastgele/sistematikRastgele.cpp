
#include <cstdlib> 
#include <iostream> 
#include <time.h>
using namespace std;

int main()
{
    
    double N,n,k;

    cout << "Evren hacmi (N) giriniz : ";
    cin >> N;

    cout << endl << "Orneklem hacmi (n) giriniz : ";
    cin >> n;
   
    k = N / n;


    srand(time(NULL));

    int a = 1 + rand() % ((int)k - 1);
    cout << endl;


    for (int i = 0; i < n; i++)
    {

        cout << a + (int)k * i << " ";

    }


}
