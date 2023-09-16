#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 15, 1, 20, 4};

    std::sort(std::begin(arr), std::end(arr));

    for (int i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}
