#include <iostream>

using namespace std;

int countPerfect(int array[], int number);

int main()
{
const int NUM_SCORES = 10;
int scores[NUM_SCORES], perfect =0;

cout << "Enter 10 test scores from 1 - 100: \n";

for (int perfect = 0; perfect < NUM_SCORES; perfect++)
{
cin >> scores[perfect];
}

perfect=countPerfect(scores, NUM_SCORES);

cout << "You entered " <<perfect<< " perfect scores!" << endl;

return 0;
}

/**********************************
* countPerfect *
**********************************/
int countPerfect(int array[], int number)
{
int perfScore = 0;

for (int count = 0; count < number; count++)\
{
if (array[count] == 100)
perfScore++;
}
return perfScore;
}
