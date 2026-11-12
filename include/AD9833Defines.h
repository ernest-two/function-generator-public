//Frequency Registers
#define AD9833_FREQ1     (1 << 15) // may not need to use other Freq Register.
#define AD9833_FREQ0     (1 << 14)

//bit controls
#define AD9833_B28       (1 << 13)
#define AD9833_HLB       (1 << 12) // may not need to use
#define AD9833_FSELECT   (1 << 11) // defines whether FREQ0 or FREQ1 is used in phase accumulator
#define AD9833_PSELECT   (1 << 10) // defines whether PHASE0 or PHASE1 is added to the output of the phase accumlator 
#define AD9833_RESET     (1 << 8)  // Reset = 1 resets internal registers to 0, which corresponds to an analog output of midscale. Reset = 0 disables reset.
#define AD9833_SLEEP1    (1 << 7)  // when SLEEP1 = 1, internal MCLK disabled, DAC output remains at its present value 
#define AD9833_SLEEP12   (1 << 6)  // SLEEP12 = 1 powers down the on-chip DAC. Useful when the AD9833 is used to output the MSB of the DAC data. SLEEP12 = 0 implies DAC is active
#define AD9833_OPBITEN   (1 << 5)  // Associated with D1 (AD9833_MODE). When OPBITTEN = 1, output of DAC is no longer available at VOUT pin. MSB or MSB/2 of DAC data is connected to VOUT pin. 
#define AD9833_DIV2      (1 << 3)  // ised in association with D5(OPBITEN). When DIV2 = 1, MSB of DAC data is passed directly to VOUT pin. When DIV2 = 0, MSB/2 is passed.
#define AD9833_MODE      (1 << 1)  // used in assoc with D5. should be set to 0 if AD9833_OPBITEN = 1. MODE = 1 is triangle output. MODE = 0 Sine wave output.
//bits D0, D2, and D9 are reserved for 0.

#define AD9833_SINE      0x2000
#define AD9833_TRIANGLE  0x2002
#define AD9833_SQUARE    0x2008

#define AD9833_IDLE      (AD9833_B28 | AD9833_RESET | AD9833_SLEEP12)
