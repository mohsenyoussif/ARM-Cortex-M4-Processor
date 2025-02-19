/**
 ******************************************************************************
 * This lab demonstrates how to use ARM assembly instructions within a C program
 * The program loads 2 values from memory addresses into registers, adds them, and stores the result back into memory.
 * It highlights key operations like LDR (load), STR (store), and ADD (addition)
 *
 ******************************************************************************
 */



int main(void)
{
	int var = 20;
	__asm("MOV R0,%0"::"r"(var));
	/*Put the value 0x20001000 inside R1*/
	__asm volatile("LDR R1 , =#0x20001000");

	/*Put the value 0x20001000 inside R2*/
	__asm volatile("LDR R2 , =#0x20001004");

	/*get address inside R1 , fetch the data , put it inside R0 */
	__asm volatile("LDR R0 ,[R1]");

	/*get address inside R2 , fetch the data , put it inside R1 */
	__asm volatile("LDR R1 ,[R2]");

	/*Add operands in R0,R1 ,put the result inside R0 */
	__asm volatile("ADD R0,R0,R1");

	/*Store the value from R0 inside the memory location whose address is in R2*/
	__asm volatile("STR R0,[R2]");

    /* Loop forever */
	for(;;);
}
