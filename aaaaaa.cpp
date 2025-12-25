full = 0;  // The number of full buffers;
empty = 10; // The number of empty buffers; Maximum number is 10
mutex = 1; // this variable manages the access to buffer pool and avoid conflict; 1=lock, 0=free

void main(){ 
//use  parallel process. In C, we use “#pragma omp”
while (true){ 
    print(‘Enter your choice:’);
    choice = read();
    if (choice == ‘Producer’) {
       // If mutex is 1 and empty is non-zero, then it is possible to produce
       if ((mutex == 1) && (empty != 0)) {
                 producer();
       }
       // Otherwise, print buffer is full
       else { print ("Buffer is full!"); }
    } 
    ………
   }
}