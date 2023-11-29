# ML-on-ultra-low-power-devices

Installation directory of codecomposer : /home/ganraj/ti/ccs1250 

0. Look at the section 5 : experimental evaluation in the 1st paper link :  

https://dl.acm.org/doi/pdf/10.1145/3508352.3549451 

    LED blinking code of MSP430 

    To test timing of LeNet-5 in MSP430. 

 

 

Prerequisites : 

    Understand about https://www.youtube.com/watch?v=k5FgMRrRm-c 

    https://www.youtube.com/watch?v=vn7TqU89e9o&list=PLRqKd7sGGKMTB5egcnNuR_SJjMgzFntKj&index=2 

For Lab PC : 

Workspace : /home/ganraj/workspace_v12 

For my PC : 

Workspace : /home/ganraj/ti/ccs1250 

 

 

 

Problem occuring : 

error initializing emulator msp-fet430uif is already in use . I am clearing the msp430 board . I am updating the system. Facing issues with proxy I guesss. Anyways doing just the thing to clear the msp430 board. Still the error persists : seeing manuel : https://www.ti.com/lit/ug/slau678c/slau678c.pdf?ts=1701161921322&ref_url=https%253A%252F%252Fwww.google.com%252F 

Installation directory of drivers : /opt/ti/fetdrivers . This is for your pc too. 

 

SO I DONOT KNOW WHAT I DID BUT IT GOT WORKING CORRECTLY : SO BASICALLY I USED THE RESOURCE : https://www.youtube.com/watch?v=H1HToCzku9Y 

 

 I IMPORTED THE OUT OF BOX BLINK CODE . NOW LET ME CHECK THE OTHER THINGS TOO. Basically you just install test packages which is being given to you by TI. And then I found the code of LED blink and I found it and I worked it out.  

 

---> last thing which I did today is about the suming of the elements of the array.  


29/11/23 :

    TASSEL_2 (Clock Source):
        TASSEL_2 selects SMCLK (Sub-System Master Clock) as the clock source for Timer_A. SMCLK is often derived from the main system clock.

    MC_1 (Mode Control - Up mode):
        MC_1 sets the timer to Up mode, where the timer counts up to the value in TA0CCR0 and then resets. This is a basic mode for generating a periodic interrupt or measuring time intervals.

    ID_3 (Input Divider):
        ID_3 divides the clock by 8. This is a prescaler setting, meaning the actual clock input to Timer_A is the selected clock source (SMCLK in this case) divided by 8.

    TA0CCR0 (Capture/Compare Register 0):
        TA0CCR0 = 2000; sets the value in the capture/compare register. In Up mode, the timer counts up to this value and then resets. In this case, it is set to 2000, resulting in a timer period of 1 ms (assuming a 16 MHz SMCLK and division by 8).

So, in summary, the Timer_A is configured to use the Sub-System Master Clock (SMCLK) as the clock source, operate in Up mode with a clock divider of 8, and have a timer period of 1 ms. This configuration is often used for generating periodic interrupts or measuring time intervals in embedded systems.

The reason for choosing these specific settings depends on the requirements of the application and the desired timing resolution. For example, the chosen period of 1 ms might be suitable for tasks that need to be performed at regular intervals. The clock source and divider settings depend on the overall system requirements and available clock sources.
