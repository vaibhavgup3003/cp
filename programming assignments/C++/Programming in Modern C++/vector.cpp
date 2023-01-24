#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}

int main()
{
  cout << "Enter the No. of elements \n ";
  int count, sum = 0;
  cin >> count;

  vector<int> arr; // This will initiallise a vector type integer array of default size i.e '0'.
  //  arr.resize (count); // Set resize
  vector<int> vec4(6,3); // initiallises a vecor with 6 threes in a single row.
  int x;
  for (int i = 0; i < count; i++)
  {
    cin >> x;
    arr.push_back(x);
    sum = sum + arr[i];
  }
  arr.pop_back();
  cout << "Sum of " << arr.size() << " natural numbers is "
       << sum << endl;

  // int size;
  // cin >> size;
  // vector<int> arr;
  // arr.resize(size);
  // int element;
  // for (int i = 0; i < size; i++)
  // {
  //   cin >> element;
  //   arr.push_back(element);
  // }
  vector<int> :: iterator iter = arr.begin();
  arr.insert(iter, 4);
  display(arr);

  vector<int> :: iterator it;
  for (it = v.begin(); it != v.end(); i++)
  {
    cout << (*it) << " ";
  }

  // ** ERASE ELEMENT **
  // Removes the element present at position.  
// Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v);

// **ERASES RANGE OF ELEMENTS **
// Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
// Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)
  // v.end() is last iterator ke ek baad wala iterator.
  // last iterator is v.end -1.
} 
