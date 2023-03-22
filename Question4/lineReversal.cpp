#include <iostream>

using namespace std;

int main()
{
    int position = -1;
    char lineOfText[256]{'\0'};

    while (++position, std::cin.get(lineOfText[position]))
    {
        if (position == 255)
        {
            break;
        }
    }
    
    char lineOfReversedText[position + 1]{'\0'};

    for (int i = position; i >= 0; i--)
    {
        lineOfReversedText[i] = lineOfText[position - i];
    }

    for (auto i : lineOfReversedText)
    {
        cout << i;
    }

    cout << endl;
    cout << "This is the size of my first array " << sizeof(lineOfText)/ sizeof(lineOfText[0]) << endl;
    cout << "This is the size of my second array " << sizeof(lineOfReversedText)/ sizeof(lineOfReversedText[0]) << endl;

    return 0;
}