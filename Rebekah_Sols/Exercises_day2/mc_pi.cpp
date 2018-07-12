#include <iostream>
#include <cmath>
#include <random>
using namespace std;

void approx_pi( int N ){

  double count = 0;
  double x;
  double y;
  double dist;

  for (int i = 0; i < N; i++){

      x = ((double) rand() / (RAND_MAX));
      y = ((double) rand() / (RAND_MAX));

      dist = pow(x,2) + pow(y,2);
      if (dist <= 1){
          count += 1;
      }
  }

  double pi = 4.0 * count / N;
  cout << "Pi = " << pi << " with N = " << N << endl;
}

int main(){

  approx_pi(100);
  approx_pi(1000);
  approx_pi(10000);
  
  return 0;
}
