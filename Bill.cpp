//Made by MANMEET SINGH NARULA, MCA - D2111 , LOVELY PROFESSIONAL UNIVERSITY , REG NO.- 12104278.

#include <iostream>
#include<map>
using namespace std;

double totalAmount(int product, int amount, int gst)
{

    if (product > 500)
    {
        product = product - ((product * 5) / 100);
    }
    if (gst == 0)
        int gstAmount = 1;
    int gstAmount = (product * amount * gst) / 100;
    return product + gstAmount;
}

double maxGST(int product, int amount, int gst)
{
    if (gst == 0)
        int gst = 1;

    return gst = (product * amount * gst) / 100;
}
void find_greatest(double a, double b, double c, double d)
{
    double x = max(a, max(b, max(c, d)));
    if (x == a)
        cout << "Leather Wallet has maximum GST";
    if (x == b)
        cout << "Umbrella has maximum GST";
    if (x == c)
        cout << "Cigarette maximum GST";
    if (x == d)
        cout << " Honey has maximum GST";
}

int main()
{

    int leatherWallet = 1100;
    int umbrella = 900;
    int cigarette = 200;
    int honey = 100;
    // Answer for question 1
    int amountToPay = totalAmount(leatherWallet, 1, 18) + totalAmount(umbrella, 2, 12) + totalAmount(cigarette, 3, 28) + totalAmount(honey, 4, 0);
    cout << "Customer will pay " << amountToPay << "Rs." << endl;

    // Question 2
    double num1 = maxGST(leatherWallet, 1, 18);
    double num2 = maxGST(umbrella, 2, 12);
    double num3 = maxGST(cigarette, 3, 28);
    double num4 = maxGST(honey, 4, 0);

    find_greatest(num1, num2, num3, num4);

    // Question 3
     
     map<string,double,int>items={{"leatherWallet", 1, 18},{"umbrella", 2, 12},{"cigarette", 3, 28},{"honey", 4, 0}};

//

    return 0;
}
