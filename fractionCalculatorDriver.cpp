//Jeremiah Ibarra
//Fraction Calculator

#include <iostream>
using namespace std;
#include <iostream>
#include <string>

class fraction
{
public:
    fraction();
    double setNume(double);
    double setDen(double);
    double getNume();
    double getDen();
    double getDec();
    friend ostream& operator<<(ostream& os, const fraction& x);
    fraction operator+(const fraction& f)
    {
        fraction fraction;
        fraction.nume = this->nume + f.nume;
        fraction.den = this->den + f.den;
        return fraction;
    }
    fraction operator-(const fraction& f)
    {
        fraction fraction;
        fraction.nume = this->nume - f.nume;
        fraction.den = this->den - f.den;
        return fraction;
    }
    fraction operator*(const fraction& f)
    {
        fraction fraction;
        fraction.nume = this->nume * f.nume;
        fraction.den = this->den * f.den;
        return fraction;
    }
    fraction operator/(const fraction& f)
    {
        fraction fraction;
        fraction.nume = this->nume / f.nume;
        fraction.den = this->den / f.den;
        return fraction;
    }
    bool operator== (const fraction& c) {
        if (nume == c.nume && den == c.den)
            return true;
        return false;
    }



private:
    double nume;
    double den;

};
ostream& operator<<(ostream& os, const fraction& x)
{

    os << x.nume << '/' << x.den;
    return os;
}

double getFraction1();
double getFraction2();
double runProgram();
int numeResult = 0;
int denResult = 0;
int findGCD(int, int);
bool startOver = true;

fraction frac1;
fraction frac2;

int main()
{

    do {
        runProgram();
    } while (startOver == true);

    return 0;

}

fraction::fraction()
{
    double nume = 0;
    double den = 0;
}

double fraction::setNume(double n)
{
    nume = n;

    return nume;
}
double fraction::setDen(double d)
{
    den = d;

    return den;
}
double fraction::getNume()
{
    return nume;
}
double fraction::getDen()
{
    return den;
}

double fraction::getDec()
{
    return nume / den;
}
int findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

void lowestFraction(int num1, int num2) {
    int denom;
    denom = findGCD(num1, num2);
    num1 /= denom;
    num2 /= denom;
    numeResult = num1;
    denResult = num2;
}

double runProgram()
{
    double a1, b1, a2, b2;
    char c1, c2;
    string op;

    cout << "Please enter an expression in the form" << "\n" << "         a/b operator c/d" << "\n";

    cin >> a1 >> c1 >> b1 >> op >> a2 >> c2 >> b2;

    frac1.setNume(a1);
    frac1.setDen(b1);
    frac2.setNume(a2);
    frac2.setDen(b2);
    for (int i = 0; i < 1; i++)
    {
        if (i < 1)
        {
            if (op == "+")
            {
                double n3, d3;
                cout << "Adding..." << "\n";
                n3 = frac1.getNume() * frac2.getDen() + frac1.getDen() * frac2.getNume();
                d3 = frac1.getDen() * frac2.getDen();
                lowestFraction(n3, d3);
                if (denResult == 1)
                {
                    cout << "The result is " << numeResult << "\n" << "\n";
                }
                if (denResult == 0)
                {
                    cout << "The result is undefined " << "\n" << "\n";
                }
                else
                {
                    cout << "The result is " << numeResult << "/" << denResult << "\n" << "\n";
                }
            }
            if (op == "-")
            {
                double n3, d3;
                cout << "Subtracting..." << "\n";
                n3 = frac1.getNume() * frac2.getDen() - frac1.getDen() * frac2.getNume();
                d3 = frac1.getDen() * frac2.getDen();
                lowestFraction(n3, d3);
                if (denResult == 1)
                {
                    cout << "The result is " << numeResult << "\n" << "\n";
                }
                if (denResult == 0)
                {
                    cout << "The result is undefined " << "\n" << "\n";
                }
                else
                {
                    cout << "The result is " << numeResult << "/" << denResult << "\n" << "\n";
                }

            }
            if (op == "*")
            {
                double n3, d3;
                cout << "Multiplying..." << "\n";
                n3 = frac1.getNume() * frac2.getNume();
                d3 = frac1.getDen() * frac2.getDen();
                lowestFraction(n3, d3);
                if (denResult == 1)
                {
                    cout << "The result is " << numeResult << "\n" << "\n";
                }
                if (denResult == 0)
                {
                    cout << "The result is undefined " << "\n" << "\n";
                }
                else
                {
                    cout << "The result is " << numeResult << "/" << denResult << "\n" << "\n";
                }


            }
            if (op == "/")
            {
                double n3, d3;
                cout << "Dividing..." << "\n";
                n3 = frac1.getNume() * frac2.getDen();
                d3 = frac1.getDen() * frac2.getNume();
                lowestFraction(n3, d3);
                if (denResult == 1)
                {
                    cout << "The result is " << numeResult << "\n" << "\n";
                }
                if (denResult == 0)
                {
                    cout << "The result is undefined " << "\n" << "\n";
                }
                else
                {
                    cout << "The result is " << numeResult << "/" << denResult << "\n" << "\n";
                }

            }
            if (op == "<")
            {
                cout << "Verifying..." << "\n";
                if (frac1.getDec() < frac2.getDec())
                {
                    cout << "The result is true" << "\n" << "\n";
                }
                else
                {
                    cout << "The result is false" << "\n" << "\n";
                }

            }
            if (op == ">")
            {
                cout << "Verifying..." << "\n";
                if (frac1.getDec() > frac2.getDec())
                {
                    cout << "The result is true" << "\n" << "\n";
                }
                else
                {
                    cout << "The result is false" << "\n" << "\n";
                }

            }
            if (op == "<=")
            {
                cout << "Verifying..." << "\n";
                if (frac1.getDec() <= frac2.getDec())
                {
                    cout << "The result is true" << "\n" << "\n";
                }
                else
                {
                    cout << "The result is false" << "\n" << "\n";
                }

            }
            if (op == ">=")
            {
                cout << "Verifying..." << "\n";
                if (frac1.getDec() >= frac2.getDec())
                {
                    cout << "The result is true" << "\n" << "\n";
                }
                else
                {
                    cout << "The result is false" << "\n" << "\n";
                }

            }
            if (op == "=")
            {
                cout << "Verifying..." << "\n";
                if (frac1 == frac2)
                {
                    cout << "The result is true" << "\n" << "\n";
                }
                else
                {
                    cout << "The result is false" << "\n" << "\n";
                }
            }
        }//end of 1st if
        if (i < 2)
        {
            string answer = "";
            cout << "Again (Y or N)? ";
            cin >> answer;
            cout << "\n";

            if (answer == "Y" || answer == "y" || answer == "Yes" || answer == "yes" || answer == "YES")
            {
                startOver = true;

            }
            else if (answer == "N" || answer == "n" || answer == "No" || answer == "no" || answer == "NO")
            {
                cout << "GoodBye";
                startOver = false;
            }
            else
            {
                cout << "wrong entry" << "\n" << "\n";
                startOver = true;
            }
        }//end of 2nd if
    }//end of for loop

    return 0;
}
