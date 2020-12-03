/**
  ***********************************************************
  @file   /src/gpio/st/spec/STM32F105xC_gpio.hpp
  @brief  Support: STM32F105R8, STM32F105V8, STM32F105RB, 
          STM32F105VB, STM32F105RC and STM32F105VC   
  ***********************************************************
**/

#pragma once

//____________________INCLUDE_____________________//
#include <cstdint>

#if defined (STM32F105xC)
  #include "stm32f105xc.h"
#else
  #error "You must define supported target"
#endif



namespace mpp::gpio
{
  inline namespace STM32F105xC_gpio
  {
    enum class Port { 
      A = GPIOA_BASE,
      B = GPIOB_BASE,
      C = GPIOC_BASE,
      D = GPIOD_BASE,
      E = GPIOE_BASE,
    };

    template< typename IO >
    constexpr bool IsValidIo()
    {
      switch(IO::kPort)
      { 
        case Port::A: return IO::kPin < 16u;
        case Port::B: return IO::kPin < 16u;
        case Port::C: return IO::kPin < 16u;
        case Port::D: return IO::kPin < 16u;
        case Port::E: return IO::kPin < 16u;

        default: return false;
      }
    }
  } // inline namespace 
} // namespace mpp::gpio 
  

 
