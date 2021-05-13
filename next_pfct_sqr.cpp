#include <math.h>
using namespace std;



long int findNextSquare(long int sq) {
  // Return the next square if sq if a perfect square, -1 otherwise
    double squareroot = 0;
    squareroot = sqrt(sq);
    if (squareroot == (int(squareroot))){
        //Find the next square
            double sq2 = pow(sqrt(sq)+1,2);
                cout << sq2 << "IS THE NEXT SQUARE" << endl;
                return sq2;
            }
    cout << sq << " NOT A SQUARE" << endl;
    return -1;
}
