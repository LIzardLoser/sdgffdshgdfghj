#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main() {
  while (true)
  {
      string value;
    int x;
    char ch;
    cin >> value;

    if (value == "Hi" || value == "hi")
    {
      cout << "Hi There\n";
    }
    else if (value == "close" || value == "Close")
    {
      exit(0);
    }
    else if (value == "svcd")
    {
      ofstream file("TheCode.txt");
      file << "LOL IMAGINE";
      file.close();
      exit(0);
    }
    else {
      cout << "Rude ass *Grumble Grumble*\n";
    }

    ch = _getch();
    system("cls");
  }
  
  return 0;
}