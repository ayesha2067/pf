#include <iostream>
using namespace std;


void convertToWords(int val)
{
    if (val <= 20 || (val % 10 == 0 && val < 100))
    {
        switch (val)
        {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
        case 10:
            cout << "Ten";
            break;
        case 11:
            cout << "Eleven";
            break;
        case 12:
            cout << "Twelve";
            break;
        case 13:
            cout << "Thirteen";
            break;
        case 14:
            cout << "Fourteen";
            break;
        case 15:
            cout << "Fifteen";
            break;
        case 16:
            cout << "Sixteen";
            break;
        case 17:
            cout << "Seventeen";
            break;
        case 18:
            cout << "Eighteen";
            break;
        case 19:
            cout << "Nineteen";
            break;
        case 20:
            cout << "Twenty";
            break;
        case 30:
            cout << "Thirty";
            break;
        case 40:
            cout << "Forty";
            break;
        case 50:
            cout << "Fifty";
            break;
        case 60:
            cout << "Sixty";
            break;
        case 70:
            cout << "Seventy";
            break;
        case 80:
            cout << "Eighty";
            break;
        case 90:
            cout << "Ninety";
            break;
        }
    }
   
    else if (val > 20 && val < 30)
    {
        cout << "Twenty ";
        convertToWords(val - 20);
    }
    else if (val > 30 && val < 40)
    {
        cout << "Thirty ";
        convertToWords(val - 30);
    }
    else if (val > 40 && val < 50)
    {
        cout << "Forty ";
        convertToWords(val - 40);
    }
    else if (val > 50 && val < 60)
    {
        cout << "Fifty ";
        convertToWords(val - 50);
    }
    else if (val > 60 && val < 70)
    {
        cout << "Sixty ";
        convertToWords(val - 60);
    }
    else if (val > 70 && val < 80)
    {
        cout << "Seventy ";
        convertToWords(val - 70);
    }
    else if (val > 80 && val < 90)
    {
        cout << "Eighty ";
        convertToWords(val - 80);
    }
    else if (val > 90 && val < 100)
    {
        cout << "Ninety ";
        convertToWords(val - 90);
    }
}

int main()
{
    int inputNum;
    cout << "Enter an integer (1-99): ";
    cin >> inputNum;

    if (inputNum > 0 && inputNum < 100)
    {
        convertToWords(inputNum);
    }

    return 0;
}