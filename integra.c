#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mpi.h"

int main(int argc, char *argv[]) {
    int N = atoi(argv[1]);
    int rank, size, source;
    double inte, total;
    MPI_Status status;
    MPI_Init(&argc,&argv);
    MPI_Comm_size(MPI_COMM_WORLD,&size);
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);
    if (rank == 0) {
        source = 1;
        total=0;
        for (source; src < size; ++src){
            MPI_Recv(&inte, 1, MPI_DOUBLE, source, 0, MPI_COMM_WORLD, &Stat);
            total=total+inte;
        }
        total=total/(double)N
        fprintf(stderr, "El area es : %f\n", total);
    }else if (rank == 1) {
        dest = 0;
        inte=10
        MPI_Send(&inte, 1, MPI_CHAR, dest, 0, MPI_COMM_WORLD);
    }
    MPI_Finalize();
    return 0;
}
