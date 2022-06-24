#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;


void Generator();
void Validator();

int Choice()
{
     int ans;

    cout << "  " << "What would you like to do?" << endl << endl;
    cout << "  " << "1. Generate a password" << "               " << "2. Validate a Password Strength" << endl;
    cin >> ans;
    ans=int(ans);
    if (ans == 1 )
        {
            Generator();
        }
    else if (ans == 2)
        {
            //validator
            cout<<"Validator"<<endl;
        }
    else if (ans != 1 || ans != 2)
        {
            cout << "  " << "Wrong Input!!! Please put the correct answer!!!!" << endl << endl;
            Choice();
        }
    else
        {
            exit(4);
        }
    return 0;
}

void Generator()
{
    char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char schar[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char bchar[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char echar[29] = {'`', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '=', '+', '[', ']', '{', '}', '"', ';', ':', ',', '<', '.', '>', '/', '?'};
    int len=0, nans=0, sans=0, bans=0, eans=0;

    cout << "      Maximum Length of the Password is 2,147,483,647"<<endl<<endl;
    cout << "Length of the password:    ";
    cin >> len;
    cout << "      Answer '1' for YES and '0' for NO"<<endl<<endl;
    cout << "Do you want numbers in your password?" <<endl;
    cin >> nans;
    cout << "Do you want small letters in your password?" <<endl;
    cin >> sans;
    cout << "Do you want block letters in your password?" <<endl;
    cin >> bans;
    cout << "Do you want especial characters in your password?" <<endl;
    cin >> eans;

    if (nans==1 && sans != 1 && bans != 1 && eans != 1)
    {
        srand(time(NULL));

        for (int i=0; i<len; i++)
            {
                int randIndex = rand() % 10;
                cout << num[randIndex] << " ";
            }
    }
    else if (nans != 1 && sans == 1 && bans != 1 && eans != 1)
    {
        srand(time(NULL));

        for (int i=0; i<len; i++)
            {
                int randIndex = rand() % 10;
                cout << schar[randIndex] << " ";
            }
    }
    else if (nans != 1 && sans != 1 && bans == 1 && eans != 1)
    {
        srand(time(NULL));

        for (int i=0; i<len; i++)
            {
                int randIndex = rand() % 10;
                cout << bchar[randIndex] << " ";
            }
    }
    else if (nans != 1 && sans != 1 && bans != 1 && eans == 1)
    {
        srand(time(NULL));

        for (int i=0; i<len; i++)
            {
                int randIndex = rand() % 10;
                cout << echar[randIndex] << " ";
            }
    }
    else if (nans == 1 && sans == 1 && bans != 1 && eans != 1)
    {
        srand(time(NULL));

        int a, b, c, d;

        a= sizeof(num)/sizeof(char);
        b= sizeof(schar)/sizeof(char);
        char temp[a+b];

        for (c=0; c<a; c++)
        {
            temp[c]=num[c];
        }

        for (d=0; d<b; d++)
        {
            temp[c]=schar[d];
            c++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 36;
            cout << temp[randIndex] << " ";
        }
    }
    else if (nans == 1 && sans != 1 && bans == 1 && eans != 1)
    {
        srand(time(NULL));

        int a, b, c, d;

        a= sizeof(num)/sizeof(char);
        b= sizeof(bchar)/sizeof(char);
        char temp[a+b];

        for (c=0; c<a; c++)
        {
            temp[c]=num[c];
        }

        for (d=0; d<b; d++)
        {
            temp[c]=bchar[d];
            c++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 36;
            cout << temp[randIndex] << " ";
        }
    }
    else if (nans == 1 && sans != 1 && bans != 1 && eans == 1)
    {
        srand(time(NULL));

        int a, b, c, d;

        a= sizeof(num)/sizeof(char);
        b= sizeof(echar)/sizeof(char);
        char temp[a+b];

        for (c=0; c<a; c++)
        {
            temp[c]=num[c];
        }

        for (d=0; d<b; d++)
        {
            temp[c]=echar[d];
            c++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 36;
            cout << temp[randIndex] << " ";
        }
    }
    else if (nans != 1 && sans == 1 && bans == 1 && eans != 1)
    {
        srand(time(NULL));

        int a, b, c, d;

        a= sizeof(schar)/sizeof(char);
        b= sizeof(bchar)/sizeof(char);
        char temp[a+b];

        for (c=0; c<a; c++)
        {
            temp[c]=schar[c];
        }

        for (d=0; d<b; d++)
        {
            temp[c]=bchar[d];
            c++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 36;
            cout << temp[randIndex] << " ";
        }
    }
    else if (nans != 1 && sans == 1 && bans != 1 && eans == 1)
    {
        srand(time(NULL));

        int a, b, c, d;

        a= sizeof(schar)/sizeof(char);
        b= sizeof(echar)/sizeof(char);
        char temp[a+b];

        for (c=0; c<a; c++)
        {
            temp[c]=schar[c];
        }

        for (d=0; d<b; d++)
        {
            temp[c]=echar[d];
            c++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 36;
            cout << temp[randIndex] << " ";
        }
    }
    else if (nans != 1 && sans != 1 && bans == 1 && eans == 1)
    {
        srand(time(NULL));

        int a, b, c, d;

        a= sizeof(bchar)/sizeof(char);
        b= sizeof(echar)/sizeof(char);
        char temp[a+b];

        for (c=0; c<a; c++)
        {
            temp[c]=bchar[c];
        }

        for (d=0; d<b; d++)
        {
            temp[c]=echar[d];
            c++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 36;
            cout << temp[randIndex] << " ";
        }
    }
    else if (nans == 1 && sans == 1 && bans == 1 && eans != 1)
    {
        srand(time(NULL));

        int a, b, c, d, e, f;

        a= sizeof(num)/sizeof(char);
        b= sizeof(schar)/sizeof(char);
        c= sizeof(bchar)/sizeof(char);
        char temp[a+b+c];

        for (d=0; d<a; d++)
        {
            temp[d]=num[d];
        }

        for (e=0; e<b; e++)
        {
            temp[d]=schar[e];
            d++;
        }

        for (f=0; f<c; f++)
        {
            temp[d]=bchar[f];
            d++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 62;
            cout << temp[randIndex] << " ";
        }
    }
    else if (nans == 1 && sans == 1 && bans != 1 && eans == 1)
    {
        srand(time(NULL));

        int a, b, c, d, e, f;

        a= sizeof(num)/sizeof(char);
        b= sizeof(schar)/sizeof(char);
        c= sizeof(echar)/sizeof(char);
        char temp[a+b+c];

        for (d=0; d<a; d++)
        {
            temp[d]=num[d];
        }

        for (e=0; e<b; e++)
        {
            temp[d]=schar[e];
            d++;
        }

        for (f=0; f<c; f++)
        {
            temp[d]=echar[f];
            d++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 62;
            cout << temp[randIndex] << " ";
        }
    }
    else if (nans == 1 && sans != 1 && bans == 1 && eans == 1)
    {
        srand(time(NULL));

        int a, b, c, d, e, f;

        a= sizeof(num)/sizeof(char);
        b= sizeof(bchar)/sizeof(char);
        c= sizeof(echar)/sizeof(char);
        char temp[a+b+c];

        for (d=0; d<a; d++)
        {
            temp[d]=num[d];
        }

        for (e=0; e<b; e++)
        {
            temp[d]=bchar[e];
            d++;
        }

        for (f=0; f<c; f++)
        {
            temp[d]=echar[f];
            d++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 62;
            cout << temp[randIndex] << " ";
        }
    }
    else if (nans !=1 && sans == 1 && bans == 1 && eans == 1)
    {
        srand(time(NULL));

        int a, b, c, d, e, f;

        a= sizeof(schar)/sizeof(char);
        b= sizeof(bchar)/sizeof(char);
        c= sizeof(echar)/sizeof(char);
        char temp[a+b+c];

        for (d=0; d<a; d++)
        {
            temp[d]=schar[d];
        }

        for (e=0; e<b; e++)
        {
            temp[d]=bchar[e];
            d++;
        }

        for (f=0; f<c; f++)
        {
            temp[d]=echar[f];
            d++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 62;
            cout << temp[randIndex] << " ";
        }
    }
    else if (nans == 1 && sans == 1 && bans == 1 && eans == 1)
    {
        srand(time(NULL));

        int a, b, c, d, e, f, g, h;

        a= sizeof(num)/sizeof(char);
        b= sizeof(schar)/sizeof(char);
        c= sizeof(bchar)/sizeof(char);
        d= sizeof(echar)/sizeof(char);
        char temp[a+b+c+d];

        for (e=0; e<a; e++)
        {
            temp[e]=num[e];
        }

        for (f=0; f<b; f++)
        {
            temp[e]=schar[f];
            e++;
        }

        for (g=0; g<c; g++)
        {
            temp[e]=bchar[g];
            e++;
        }

        for (h=0; h<d; h++)
        {
            temp[e]=echar[h];
            e++;
        }

        for (int i=0; i<len; i++)
        {
            int randIndex = rand() % 91;
            cout << temp[randIndex] << " ";
        }
    }
    else
        cout<<"error"<<endl;
}

int main()
{
    Choice();
    return 0;
}
