 #include "transpose.h"
 
/* The naive transpose function as a reference. */
void transpose_naive(int n, int blocksize, int *dst, int *src) {
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            dst[y + x * n] = src[x + y * n];
        }
    }
}

/* Implement cache blocking below. You should NOT assume that n is a
 * multiple of the block size. */
void transpose_blocking(int n, int BLOCK_SIZE, int *B, int *A) {
    // YOUR CODE HERE
   int i, j, ii, jj;
    for (i = 0; i < n; i += BLOCK_SIZE) {
        for (j = 0; j < n; j += BLOCK_SIZE) {
            for (ii = i; ii < i + BLOCK_SIZE && ii < n; ii++) {
                for (jj = j; jj < j + BLOCK_SIZE && jj < n; jj++) {
                    B[jj*n+ii] = A[ii*n+jj];
                }
            }
        }
    }
}
