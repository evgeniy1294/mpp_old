#include "stm32f407_disco.hpp"


extern "C" {
 /* The following are constructs created by the linker, indicating where the
    the "data" and "bss" segments reside in memory */
  extern std::uint32_t _sidata;
  extern std::uint32_t _sdata;
  extern std::uint32_t _edata;
  extern std::uint32_t _sbss;
  extern std::uint32_t _ebss;
  extern std::uint32_t _estack;
  
  extern int main();
    
  void Reset_Handler();
  void DefaultHandler();
	
  
  __attribute__ ((section(".isr_flash"), used)) 
  void (* const InterruptTable[])(void) =
  {
    /* 0 The initial stack pointer */
    (void (*)(void))((std::uint32_t)&_estack),     
     
    /******  Cortex Interrupt  ************/ 
    Reset_Handler,               //  1 The reset handler
    DefaultHandler,              //  2 The NMI handler
    DefaultHandler,              //  3 The hard fault handler
    DefaultHandler,              //  4 Memory Management (MemManage) Fault
    DefaultHandler,              //  5 The bus fault handler
    DefaultHandler,              //  6 The usage fault handler
    0,                           //  7 Reserved
    0,                           //  8 Reserved
    0,                           //  9 Reserved
    0,                           // 10 Reserved
    DefaultHandler,              // 11 Supervisor Call (SVCall)
    DefaultHandler,              // 12 Debug monitor handler
    0,                           // 13 Reserved
    DefaultHandler,              // 14 The PendSV handler
    board::Systick::Interrupt,   // 15 The SysTick handler

    /******  STM32 specific Interrupt  ************/
    DefaultHandler,              // 16  Window WatchDog Interrupt
    DefaultHandler,              // 17  PVD through EXTI Line detection Interrupt
    DefaultHandler,              // 18  Tamper and TimeStamp interrupts through the EXTI line
    DefaultHandler,              // 19  RTC Wakeup interrupt through the EXTI line
    DefaultHandler,              // 20  FLASH global Interrupt
    DefaultHandler,              // 21  RCC global Interrupt
    DefaultHandler,              // 22  EXTI Line0 Interrupt
    DefaultHandler,              // 23  EXTI Line1 Interrupt
    DefaultHandler,              // 24  EXTI Line2 Interrupt
    DefaultHandler,              // 25  EXTI Line3 Interrupt
    DefaultHandler,              // 26  EXTI Line4 Interrupt
    DefaultHandler,              // 27  DMA1 Stream 0 global Interrupt
    DefaultHandler,              // 28  DMA1 Stream 1 global Interrupt                                    
    DefaultHandler,              // 29  DMA1 Stream 2 global Interrupt                                    
    DefaultHandler,              // 30  DMA1 Stream 3 global Interrupt                                    
    DefaultHandler,              // 31  DMA1 Stream 4 global Interrupt                                    
    DefaultHandler,              // 32  DMA1 Stream 5 global Interrupt                                    
    DefaultHandler,              // 33  DMA1 Stream 6 global Interrupt                                    
    DefaultHandler,              // 34  ADC1, ADC2 and ADC3 global Interrupts                             
    DefaultHandler,              // 35  CAN1 TX Interrupt                                                 
    DefaultHandler,              // 36  CAN1 RX0 Interrupt                                                
    DefaultHandler,              // 37  CAN1 RX1 Interrupt                                                
    DefaultHandler,              // 38  CAN1 SCE Interrupt                                                
    DefaultHandler,              // 39  External Line[9:5] Interrupts                                     
    DefaultHandler,              // 40  TIM1 Break interrupt and TIM9 global interrupt                    
    DefaultHandler,              // 41  TIM1 Update Interrupt and TIM10 global interrupt                  
    DefaultHandler,              // 42  TIM1 Trigger and Commutation Interrupt and TIM11 global interrupt 
    DefaultHandler,              // 43  TIM1 Capture Compare Interrupt                                    
    DefaultHandler,              // 44  TIM2 global Interrupt                                             
    DefaultHandler,              // 45  TIM3 global Interrupt                                             
    DefaultHandler,              // 46  TIM4 global Interrupt                                             
    DefaultHandler,              // 47  I2C1 Event Interrupt                                              
    DefaultHandler,              // 48  I2C1 Error Interrupt                                              
    DefaultHandler,              // 49  I2C2 Event Interrupt                                              
    DefaultHandler,              // 50  I2C2 Error Interrupt                                              
    DefaultHandler,              // 51  SPI1 global Interrupt                                             
    DefaultHandler,              // 52  SPI2 global Interrupt                                             
    DefaultHandler,              // 53  USART1 global Interrupt                                          
    DefaultHandler,              // 54  USART2 global Interrupt                                           
    DefaultHandler,              // 55  USART3 global Interrupt                                           
    DefaultHandler,              // 56  External Line[15:10] Interrupts                                   
    DefaultHandler,              // 57  RTC Alarm (A and B) through EXTI Line Interrupt                   
    DefaultHandler,              // 58  USB OTG FS Wakeup through EXTI line interrupt                     
    DefaultHandler,              // 59  TIM8 Break Interrupt and TIM12 global interrupt                   
    DefaultHandler,              // 60  TIM8 Update Interrupt and TIM13 global interrupt                  
    DefaultHandler,              // 61  TIM8 Trigger and Commutation Interrupt and TIM14 global interrupt 
    DefaultHandler,              // 62  TIM8 Capture Compare global interrupt                             
    DefaultHandler,              // 63  DMA1 Stream7 Interrupt                                            
    DefaultHandler,              // 64  FSMC global Interrupt                                             
    DefaultHandler,              // 65  SDIO global Interrupt                                             
    DefaultHandler,              // 66  TIM5 global Interrupt                                             
    DefaultHandler,              // 67  SPI3 global Interrupt                                             
    DefaultHandler,              // 68  UART4 global Interrupt                                           
    DefaultHandler,              // 69  UART5 global Interrupt                                            
    DefaultHandler,              // 70  TIM6 global and DAC1&2 underrun error  interrupts                 
    DefaultHandler,              // 71  TIM7 global interrupt                                             
    DefaultHandler,              // 72  DMA2 Stream 0 global Interrupt                                    
    DefaultHandler,              // 73  DMA2 Stream 1 global Interrupt                                    
    DefaultHandler,              // 74  DMA2 Stream 2 global Interrupt                                    
    DefaultHandler,              // 75  DMA2 Stream 3 global Interrupt                                    
    DefaultHandler,              // 76  DMA2 Stream 4 global Interrupt                                    
    DefaultHandler,              // 77  Ethernet global Interrupt                                         
    DefaultHandler,              // 78  Ethernet Wakeup through EXTI line Interrupt                       
    DefaultHandler,              // 79  CAN2 TX Interrupt                                                 
    DefaultHandler,              // 80  CAN2 RX0 Interrupt                                                
    DefaultHandler,              // 81  CAN2 RX1 Interrupt                                                
    DefaultHandler,              // 82  CAN2 SCE Interrupt                                                
    DefaultHandler,              // 83  USB OTG FS global Interrupt                                       
    DefaultHandler,              // 84  DMA2 Stream 5 global interrupt                                    
    DefaultHandler,              // 85  DMA2 Stream 6 global interrupt                                    
    DefaultHandler,              // 86  DMA2 Stream 7 global interrupt                                    
    DefaultHandler,              // 87  USART6 global interrupt                                          
    DefaultHandler,              // 88  I2C3 event interrupt                                              
    DefaultHandler,              // 89  I2C3 error interrupt                                             
    DefaultHandler,              // 90  USB OTG HS End Point 1 Out global interrupt                       
    DefaultHandler,              // 91  USB OTG HS End Point 1 In global interrupt                        
    DefaultHandler,              // 92  USB OTG HS Wakeup through EXTI interrupt                          
    DefaultHandler,              // 93  USB OTG HS global interrupt                                       
    DefaultHandler,              // 94  DCMI global interrupt
    DefaultHandler,              // 95  You can use this vector for software interrupt
    DefaultHandler,              // 96  RNG global Interrupt                                              
    DefaultHandler,              // 97  FPU global interrupt 
  };
    
  
  void Reset_Handler()
  {
    // Copy the data segment initializers from FLASH to SRAM.
    std::uint32_t* pSrc = &_sidata;
    for( std::uint32_t* pDest = &_sdata; pDest < &_edata; )
      *pDest++ = *pSrc++;

    // Zero fill the bss segment.
    __asm("    ldr     r0, =_sbss\n"
          "    ldr     r1, =_ebss\n"
          "    mov     r2, #0\n"
          "    .thumb_func\n"
          "zero_loop:\n"
          "        cmp     r0, r1\n"
          "        it      lt\n"
          "        strlt   r2, [r0], #4\n"
          "        blt     zero_loop");
      
      
    main(); 
  }
    
    
    
  void DefaultHandler() { while(1) { asm("nop"); } }
    
    
} // extern "C"