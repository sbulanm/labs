#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cout << "‚¢¥¤¨â¥ ¯®«®¦¨â¥«ì­®¥ ç¨á«®" << endl;
    cin >> a;
    if ((a % 2 == 0) && ((a >= 10) || (a < 100)))  {
        cout << "‚¢¥¤ñ­­®¥ ç¨á«® ï¢«ï¥âáï çñâ­ë¬ ¤¢ã§­ ç­ë¬";
    }
    else {
        cout << "‚¢¥¤ñ­­®¥ ç¨á«® ­¥ ï¢«ï¥âáï çñâ­ë¬ ¤¢ã§­ ç­ë¬";
    }
}
