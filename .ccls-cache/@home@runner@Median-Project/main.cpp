#include <iostream>
using namespace std;

int main()
{
  int amount;
  int i;
  int a;
  int b = 0;
  float median;
  float left;
  float right;
 
  cout << endl;
  cout << "\033[34mHow many numbers are there?\033[0m ";
  cin >> amount;
 
  float num[amount];
  float numsorted[amount];

  cout << endl;
 
  for (i = 1; i <= amount; i++)
  {
    cout << "Enter number ";
    cin >> num[i];
    cout << endl;
  }
 
  //sorting
  for (i = 1; i <= 9999999; i++)
    {
      for(a = 1; a <= amount; a++)
        {
          if (i == num[a])
          {
            b = b + 1;
            numsorted[b] = num[a];
          }
        }
    }

  // Display
  cout << "\033[34mThe sequence in ascending order is: \033[0m| ";
 
  for(i = 1; i <= amount; i++)
    {
      cout << numsorted[i] << " | " ;
    }

  cout << endl;
  cout << endl;

  // Even Amount
  if (amount % 2 == 0)
  {
    left = numsorted[amount/2];
    right = numsorted[amount/ 2 + 1];

    median = (left + right) / 2;
    cout << "\033[34mTherefore, the median is: \033[0m" << median;
  }
 
  // Odd Amount
  if (amount % 2 != 0)
  {
    median = numsorted[(amount + 1)/2];
    cout << "\033[34mTherefore, the median is: \033[0m" << median;
  }

  cout << endl;
  return 0;
}
