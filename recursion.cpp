//Quinton Negron
//This program takes 2 numbers and
//prints all numbers in range from left to right
#include <iostream>
#include <string>
using namespace std;

//returns if alphabetic or numeric or not
bool isAlphanumeric(string s)
{
  if(s.length() <= 0)
    return true;
  else
  {
    if((((int)s[0]) >= 48 && ((int)s[0]) <= 57) || (((int)s[0]) >= 65 && ((int)s[0]) <= 90) || (((int)s[0]) >= 97 && ((int)s[0]) <= 122))
    {
      return isAlphanumeric(s.substr(1));
    }
    else
      return false;
  }
}

int main() 
{
  cout << isAlphanumeric("ABCD") << endl;        // true (1)
  cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
  cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)
}

//prints numbers in range
/*void printRange(int left, int right)
 {
 if(left > right)
 {
 return;
 }
 else
 {
 cout << left << endl;
 printRange(left + 1, right);
 }
 }
 */
/*//finds some in range of numbers
 int sumRange(int left, int right)
 {
 int sum = 0;
 if(left > right)
 return sum;
 else
 {
 return sum = left + sumRange(left + 1, right);
 }
 }
 
 //helper for sumArray
 int sumArrayInRange(int *arr, int left, int right)
 {
 int sum = 0;
 if(left > right)
 return sum;
 else
 {
 return sum = arr[left] + sumArrayInRange(arr, left + 1, right);
 }
 }
 
 //returns sum of array
 int sumArray(int *arr, int size)
 {
 int sum = 0;
 if(size <= 0)
 return sum;
 else
 {
 return sumArrayInRange(arr, 0, size-1);
 }
 }
 */
