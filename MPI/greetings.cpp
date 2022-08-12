# include <mpi.h>
# include <iostream>

using namespace std;

/*
void main (int argc, char* argv[]) {
    int my_rank;
    int nrank;
    int source;
    int dest;
    int tag = 0;
    char message[100];
    MPI_Status status;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

    if (my_rank==0) {
        for (int i; i<argc; i++) {
            cout << "Argument " << i+1 << " of " << argc << ": " << argv[i] << endl;
        }
    }

    cout << "Greetings from Rank " << my_rank << endl;

    MPI_Finalize();
}
*/


int main (int argc, char* argv[]) {
    int my_rank;
    int nrank;
    int source;
    int dest;
    int tag = 0;
    char message[100];
    char message_in[100];

    MPI_Status status;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &nrank);

    // Assignment 3.7, each proc sends greetings to the next one
    dest = (my_rank + 1) % nrank;
    source = (my_rank + nrank -1) % nrank;

    sprintf(message, "Greeting from Rank %d", my_rank);

    MPI_Send(message, 100, MPI_CHAR, dest, 0, MPI_COMM_WORLD);
    MPI_Recv(message, 100, MPI_CHAR, source, 0, MPI_COMM_WORLD, &status);

    cout << "Rank " << my_rank << " received " << message << endl;

    MPI_Finalize();

    return 0;
    
}
