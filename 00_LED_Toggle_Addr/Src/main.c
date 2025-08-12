// Where is the LED connected?
// Port: A
// Pin:  5

#define PERIPH_BASE 		(0x40000000UL) // ul is stand for unsigned long

// Access AHB1
#define AHB1PERIPH_OFFSET   (0x00020000UL) //
#define	AHB1PERIPH_BASE		(PERIPH_BASE + AHB1PERIPH_OFFSET)// Base is stand for starting point

// Access GPIOA
#define GPIOA_OFFSET		(0x0000UL) // 0x 0000 0000
#define GPIOA_BASE			(AHB1PERIPH_BASE + GPIOA_OFFSET)

// Access RCC
#define RCC_OFFSET			(0x3800UL)
#define RCC_BASE			(AHB1PERIPH_BASE + RCC_OFFSET)

// Access AHB1EN_R
#define AHB1EN_R_OFFSET		(0x30UL)
#define RCC_AHB1EN_R_		(RCC_BASE + AHB1EN_R_OFFSET)

// Access GPIOAEN
#define GPIOAEN				(1U<<0) // Shift one to position 0,Ex: 1U << 4:shift one to position 4
