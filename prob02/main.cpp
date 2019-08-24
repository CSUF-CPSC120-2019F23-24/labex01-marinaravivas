// This program calculates the user's pay.

#include <iostream>

int main()
{
  double bars, price, pay;

  // Get the number of hours worked.
  std::cout << "How many candy bars did you sell? ";
  std::cin >> bars;

  // Get the hourly pay rate.
  std::cout << "How much does the organization earn for each bar sold? ";
  std::cin >> price;

  // Calculate the pay.
  pay = bars * price;

  // Display the pay.
  std::cout << "Congratulations! You have earned $ for the organization" << pay << std::endl;

  return 0;
}
