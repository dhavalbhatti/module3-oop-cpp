#include <iostream>
using namespace std;

class Cricketer
{
public:
    void Totalruns(double a, double b, double c)
    {
        cout << "Total runs are " << a + b + c << endl;
    }
    void Averageruns(double a, double b, double c)
    {
        cout << "Average runs are " << (a + b + c) / 3 << endl;
    }
    void Bestscore(double a, double b, double c)
    {
        if (a > b && a > c)
        {
            cout << "Best score is " << a << endl;
        }
        else if (b > a && b > c)
        {
            cout << "Best score is " << b << endl;
        }
        else
        {
            cout << "Best score is " << c << endl;
        }
    }
};

class Batsman : public Cricketer
{
public:
    void Match1(double a)
    {
        cout << "Match 1 runs: " << a << endl;
    }
    void Match2(double b)
    {
        cout << "Match 2 runs: " << b << endl;
    }
    void Match3(double c)
    {
        cout << "Match 3 runs: " << c << endl;
    }
};

int main()
{
    Batsman obj;
    double a, b, c;
    cout << "Enter runs of match 1: " << endl;
    cin >> a;
    obj.Match1(a);
    cout << "Enter runs of match 2: " << endl;
    cin >> b;
    obj.Match2(b);
    cout << "Enter runs of match 3: " << endl;
    cin >> c;
    obj.Match3(c);
    obj.Totalruns(a, b, c);
    obj.Averageruns(a, b, c);
    obj.Bestscore(a, b, c);
    return 0;
}