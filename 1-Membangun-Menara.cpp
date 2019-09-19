#include <iostream>
using namespace std;
int main()
{
  int T;
  cin >> T;
  int result[T][2];
  for (int i = 0; i < T; i++)
  {
    int N;
    cin >> N;
    int A[N][3];
    int min[N];
    int result_min = 0;
    int max[N];
    int result_max = 0;

    for (int j = 0; j < N; j++)
    {
      min[j] = 1001;
      max[j] = 0;
    }

    for (int j = 0; j < N; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        cin >> A[j][k];
        if (A[j][k] < min[j])
        {
          min[j] = A[j][k];
        }
        if (A[j][k] > max[j])
        {
          max[j] = A[j][k];
        }
      }
    }
    for (int j = 0; j < N; j++)
    {
      result_min += min[j];
      result_max += max[j];
    }

    result[i][0] = result_min;
    result[i][1] = result_max;
  }

  for (int i = 0; i < T; i++)
  {
    cout << result[i][0] << " " << result[i][1] << endl;
  }
}
