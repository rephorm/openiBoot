#ifndef HW_CLOCKS5L8730_H
#define HW_CLOCKS5L8730_H

// Clock constants for the S5L8730. This device does not have a distinction
// between clock0 and clock1 like the S5L8900 does.

#define NUM_PLL 4
#define PLL_FREQUENCIES {600000000, 162000000, 200000000, 24000000}

#define NUM_CLOCK_REFERENCE 3
#define CLOCK_REFERENCE0 0xBF100004
#define CLOCK_REFERENCE1 0xBF100008
#define CLOCK_REFERENCE2 0xBF10000C
#define CLOCK_REFERENCE {CLOCK_REFERENCE0, CLOCK_REFERENCE1, CLOCK_REFERENCE2}

#define NUM_PERIPHERAL_CLOCK 28
#define NUM_DYNAMIC_CLOCKS 25
#define DYNAMIC_CLOCK_BASE 0xBF100010

#define CLOCK_USB_PHY		27
#define CLOCK_CPU			15
#define CLOCK_MEMORY		25
#define CLOCK_BUS			1
#define CLOCK_TIMEBASE		26
#define CLOCK_PERIPHERAL	2
#define CLOCK_FIXED			19

#define CLOCK_GATE_BASE		0xBF100078
#define NUM_CLOCK_GATES		52

#endif
