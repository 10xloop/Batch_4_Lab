.globl factorial

.data
n: .word 7

.text
main:
    li t1,1
    la t0, n
    lw a0, 0(t0)
    jal factorial

    addi a1, a0, 0    #return value from function
    addi a0, x0, 1      #To print integer on console
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
   mul t1,t1,a0    #t1=t1*a0
   addi a0,a0,-1   #a0=a0-1
   beq a0, x0, jumptomain
   
   jal x0,factorial
   
   
   jumptomain:
   mv a0,t1
   jr ra
   