#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "libs/matfun.h"
#include "libs/geofun.h"

int main() {
	double **A,**B,**C,**D;
	A = createMat(3,1);
	B = createMat(3,1);
	C = createMat(3,1);
	D = createMat(3,1);
	A[0][0] = -1;
	A[1][0] = 2;
  	A[2][0] = 1;
	B[0][0] = 1;
	B[1][0] = -2;
  	B[2][0] = 5;
  	C[0][0] = 4;
	C[1][0] = -7;
  	C[2][0] = 8;
	D[0][0] = 2;
	D[1][0] = -3;
  	D[2][0] = 4;
  	if(Matnorm(Matsub(A,B,3,1),3)==Matnorm(Matsub(C,D,3,1),3)) puts("Yaaay Its a parallelogram");
  	else puts("Noooo Not a parallelogram");
	freeMat(A,3);
	freeMat(B,3);
	freeMat(C,3);
	freeMat(D,3);
	return 0;
}
