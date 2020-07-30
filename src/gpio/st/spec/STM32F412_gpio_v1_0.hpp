﻿/**
  ***********************************************************
  @file   /src/gpio/st/spec/STM32F412_gpio_v1_0.hpp
  @brief  This is autogenerated file        
  ***********************************************************
**/

#pragma once

//____________________INCLUDE_____________________//
#include <cstdint>

#if defined (STM32F412cx)
  #include "stm32f412cx.h"
#elif defined (STM32F412rx)
  #include "stm32f412rx.h"
#elif defined (STM32F412vx)
  #include "stm32f412vx.h"
#elif defined (STM32F412zx)
  #include "stm32f412zx.h"
#else
  #error "You must define supported target"
#endif



namespace mpp::gpio
{
  inline namespace STM32F412_gpio_v1_0
  {
    enum class Port { 
      A = GPIOA_BASE,
      B = GPIOB_BASE,
      C = GPIOC_BASE,
      D = GPIOD_BASE,
      E = GPIOE_BASE,
      F = GPIOF_BASE,
      G = GPIOG_BASE,
      H = GPIOH_BASE,
    };

    template< typename IO >
    constexpr bool IsValidIo()
    {
      switch(IO::Port())
      { 
        case Port::A: return IO::Pin() < 16u;
        case Port::B: return IO::Pin() < 16u;
        case Port::C: return IO::Pin() < 16u;
        case Port::D: return IO::Pin() < 16u;
        case Port::E: return IO::Pin() < 16u;
        case Port::F: return IO::Pin() < 16u;
        case Port::G: return IO::Pin() < 16u;
        case Port::H: return IO::Pin() < 2u;

        default: return false;
      }
    }


    

    struct PA0  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 0u; }
      enum { EVENTOUT = 15ul,  TIM2_CH1 = 1ul,  TIM2_ETR = 1ul,  TIM5_CH1 = 2ul,  TIM8_ETR = 3ul,  USART2_CTS = 7ul, }; 
    };

    struct PA1  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 1u; }
      enum { EVENTOUT = 15ul,  I2S4_SD = 5ul,  QUADSPI_BK1_IO3 = 9ul,  SPI4_MOSI = 5ul,  TIM2_CH2 = 1ul,  TIM5_CH2 = 2ul,  USART2_RTS = 7ul, }; 
    };

    struct PA10 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 10u; }
      enum { EVENTOUT = 15ul,  I2S5_SD = 6ul,  SPI5_MOSI = 6ul,  TIM1_CH3 = 1ul,  USART1_RX = 7ul,  USB_OTG_FS_ID = 10ul, }; 
    };

    struct PA11 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 11u; }
      enum { CAN1_RX = 9ul,  EVENTOUT = 15ul,  SPI4_MISO = 6ul,  TIM1_CH4 = 1ul,  USART1_CTS = 7ul,  USART6_TX = 8ul,  USB_OTG_FS_DM = 10ul, }; 
    };

    struct PA12 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 12u; }
      enum { CAN1_TX = 9ul,  EVENTOUT = 15ul,  SPI5_MISO = 6ul,  TIM1_ETR = 1ul,  USART1_RTS = 7ul,  USART6_RX = 8ul,  USB_OTG_FS_DP = 10ul, }; 
    };

    struct PA13 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 13u; }
      enum { EVENTOUT = 15ul,  SYS_JTMS_SWDIO = 0ul, }; 
    };

    struct PA14 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 14u; }
      enum { EVENTOUT = 15ul,  SYS_JTCK_SWCLK = 0ul, }; 
    };

    struct PA15 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 15u; }
      enum { EVENTOUT = 15ul,  I2S1_WS = 5ul,  I2S3_WS = 6ul,  SPI1_NSS = 5ul,  SPI3_NSS = 6ul,  SYS_JTDI = 0ul,  TIM2_CH1 = 1ul,  TIM2_ETR = 1ul,  USART1_TX = 7ul, }; 
    };

    struct PA2  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 2u; }
      enum { EVENTOUT = 15ul,  FSMC_D4 = 12ul,  FSMC_DA4 = 12ul,  I2S_CKIN = 5ul,  TIM2_CH3 = 1ul,  TIM5_CH3 = 2ul,  TIM9_CH1 = 3ul,  USART2_TX = 7ul, }; 
    };

    struct PA3  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 3u; }
      enum { EVENTOUT = 15ul,  FSMC_D5 = 12ul,  FSMC_DA5 = 12ul,  I2S2_MCK = 5ul,  TIM2_CH4 = 1ul,  TIM5_CH4 = 2ul,  TIM9_CH2 = 3ul,  USART2_RX = 7ul, }; 
    };

    struct PA4  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 4u; }
      enum { DFSDM1_DATIN1 = 8ul,  EVENTOUT = 15ul,  FSMC_D6 = 12ul,  FSMC_DA6 = 12ul,  I2S1_WS = 5ul,  I2S3_WS = 6ul,  SPI1_NSS = 5ul,  SPI3_NSS = 6ul,  USART2_CK = 7ul, }; 
    };

    struct PA5  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 5u; }
      enum { DFSDM1_CKIN1 = 8ul,  EVENTOUT = 15ul,  FSMC_D7 = 12ul,  FSMC_DA7 = 12ul,  I2S1_CK = 5ul,  SPI1_SCK = 5ul,  TIM2_CH1 = 1ul,  TIM2_ETR = 1ul,  TIM8_CH1N = 3ul, }; 
    };

    struct PA6  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 6u; }
      enum { EVENTOUT = 15ul,  I2S2_MCK = 6ul,  QUADSPI_BK2_IO0 = 10ul,  SDIO_CMD = 12ul,  SPI1_MISO = 5ul,  TIM13_CH1 = 9ul,  TIM1_BKIN = 1ul,  TIM3_CH1 = 2ul,  TIM8_BKIN = 3ul, }; 
    };

    struct PA7  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 7u; }
      enum { EVENTOUT = 15ul,  I2S1_SD = 5ul,  QUADSPI_BK2_IO1 = 10ul,  SPI1_MOSI = 5ul,  TIM14_CH1 = 9ul,  TIM1_CH1N = 1ul,  TIM3_CH2 = 2ul,  TIM8_CH1N = 3ul, }; 
    };

    struct PA8  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 8u; }
      enum { EVENTOUT = 15ul,  I2C3_SCL = 4ul,  RCC_MCO_1 = 0ul,  SDIO_D1 = 12ul,  TIM1_CH1 = 1ul,  USART1_CK = 7ul,  USB_OTG_FS_SOF = 10ul, }; 
    };

    struct PA9  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::A; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 9u; }
      enum { EVENTOUT = 15ul,  I2C3_SMBA = 4ul,  SDIO_D2 = 12ul,  TIM1_CH2 = 1ul,  USART1_TX = 7ul,  USB_OTG_FS_VBUS = 10ul, }; 
    };

    struct PB0  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 0u; }
      enum { EVENTOUT = 15ul,  I2S5_CK = 6ul,  SPI5_SCK = 6ul,  TIM1_CH2N = 1ul,  TIM3_CH3 = 2ul,  TIM8_CH2N = 3ul, }; 
    };

    struct PB1  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 1u; }
      enum { DFSDM1_DATIN0 = 8ul,  EVENTOUT = 15ul,  I2S5_WS = 6ul,  QUADSPI_CLK = 9ul,  SPI5_NSS = 6ul,  TIM1_CH3N = 1ul,  TIM3_CH4 = 2ul,  TIM8_CH3N = 3ul, }; 
    };

    struct PB10 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 10u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SCL = 9ul,  I2C2_SCL = 4ul,  I2S2_CK = 5ul,  I2S3_MCK = 6ul,  SDIO_D7 = 12ul,  SPI2_SCK = 5ul,  TIM2_CH3 = 1ul,  USART3_TX = 7ul, }; 
    };

    struct PB11 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 11u; }
      enum { EVENTOUT = 15ul,  I2C2_SDA = 4ul,  I2S_CKIN = 5ul,  TIM2_CH4 = 1ul,  USART3_RX = 7ul, }; 
    };

    struct PB12 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 12u; }
      enum { CAN2_RX = 9ul,  DFSDM1_DATIN1 = 10ul,  EVENTOUT = 15ul,  FSMC_D13 = 12ul,  FSMC_DA13 = 12ul,  I2C2_SMBA = 4ul,  I2S2_WS = 5ul,  I2S3_CK = 7ul,  I2S4_WS = 6ul,  SPI2_NSS = 5ul,  SPI3_SCK = 7ul,  SPI4_NSS = 6ul,  TIM1_BKIN = 1ul,  USART3_CK = 8ul, }; 
    };

    struct PB13 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 13u; }
      enum { CAN2_TX = 9ul,  DFSDM1_CKIN1 = 10ul,  EVENTOUT = 15ul,  FMPI2C1_SMBA = 4ul,  I2S2_CK = 5ul,  I2S4_CK = 6ul,  SPI2_SCK = 5ul,  SPI4_SCK = 6ul,  TIM1_CH1N = 1ul,  USART3_CTS = 8ul, }; 
    };

    struct PB14 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 14u; }
      enum { DFSDM1_DATIN2 = 8ul,  EVENTOUT = 15ul,  FMPI2C1_SDA = 4ul,  FSMC_D0 = 10ul,  FSMC_DA0 = 10ul,  I2S2_ext_SD = 6ul,  SDIO_D6 = 12ul,  SPI2_MISO = 5ul,  TIM12_CH1 = 9ul,  TIM1_CH2N = 1ul,  TIM8_CH2N = 3ul,  USART3_RTS = 7ul, }; 
    };

    struct PB15 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 15u; }
      enum { DFSDM1_CKIN2 = 8ul,  EVENTOUT = 15ul,  FMPI2C1_SCL = 4ul,  I2S2_SD = 5ul,  RTC_REFIN = 0ul,  SDIO_CK = 12ul,  SPI2_MOSI = 5ul,  TIM12_CH2 = 9ul,  TIM1_CH3N = 1ul,  TIM8_CH3N = 3ul, }; 
    };

    struct PB2  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 2u; }
      enum { DFSDM1_CKIN0 = 6ul,  EVENTOUT = 15ul,  QUADSPI_CLK = 9ul, }; 
    };

    struct PB3  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 3u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SDA = 4ul,  I2C2_SDA = 9ul,  I2S1_CK = 5ul,  I2S3_CK = 6ul,  SPI1_SCK = 5ul,  SPI3_SCK = 6ul,  SYS_JTDO_SWO = 0ul,  TIM2_CH2 = 1ul,  USART1_RX = 7ul, }; 
    };

    struct PB4  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 4u; }
      enum { EVENTOUT = 15ul,  I2C3_SDA = 9ul,  I2S3_ext_SD = 7ul,  SDIO_D0 = 12ul,  SPI1_MISO = 5ul,  SPI3_MISO = 6ul,  SYS_JTRST = 0ul,  TIM3_CH1 = 2ul, }; 
    };

    struct PB5  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 5u; }
      enum { CAN2_RX = 9ul,  EVENTOUT = 15ul,  I2C1_SMBA = 4ul,  I2S1_SD = 5ul,  I2S3_SD = 6ul,  SDIO_D3 = 12ul,  SPI1_MOSI = 5ul,  SPI3_MOSI = 6ul,  TIM3_CH2 = 2ul, }; 
    };

    struct PB6  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 6u; }
      enum { CAN2_TX = 9ul,  EVENTOUT = 15ul,  I2C1_SCL = 4ul,  QUADSPI_BK1_NCS = 10ul,  SDIO_D0 = 12ul,  TIM4_CH1 = 2ul,  USART1_TX = 7ul, }; 
    };

    struct PB7  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 7u; }
      enum { EVENTOUT = 15ul,  FSMC_NL = 12ul,  I2C1_SDA = 4ul,  TIM4_CH2 = 2ul,  USART1_RX = 7ul, }; 
    };

    struct PB8  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 8u; }
      enum { CAN1_RX = 8ul,  EVENTOUT = 15ul,  I2C1_SCL = 4ul,  I2C3_SDA = 9ul,  I2S5_SD = 6ul,  SDIO_D4 = 12ul,  SPI5_MOSI = 6ul,  TIM10_CH1 = 3ul,  TIM4_CH3 = 2ul, }; 
    };

    struct PB9  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::B; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 9u; }
      enum { CAN1_TX = 8ul,  EVENTOUT = 15ul,  I2C1_SDA = 4ul,  I2C2_SDA = 9ul,  I2S2_WS = 5ul,  SDIO_D5 = 12ul,  SPI2_NSS = 5ul,  TIM11_CH1 = 3ul,  TIM4_CH4 = 2ul, }; 
    };

    struct PC0  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 0u; }
      enum { EVENTOUT = 15ul, }; 
    };

    struct PC1  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 1u; }
      enum { EVENTOUT = 15ul, }; 
    };

    struct PC10 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 10u; }
      enum { EVENTOUT = 15ul,  I2S3_CK = 6ul,  QUADSPI_BK1_IO1 = 9ul,  SDIO_D2 = 12ul,  SPI3_SCK = 6ul,  USART3_TX = 7ul, }; 
    };

    struct PC11 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 11u; }
      enum { EVENTOUT = 15ul,  FSMC_D2 = 10ul,  FSMC_DA2 = 10ul,  I2S3_ext_SD = 5ul,  QUADSPI_BK2_NCS = 9ul,  SDIO_D3 = 12ul,  SPI3_MISO = 6ul,  USART3_RX = 7ul, }; 
    };

    struct PC12 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 12u; }
      enum { EVENTOUT = 15ul,  FSMC_D3 = 10ul,  FSMC_DA3 = 10ul,  I2S3_SD = 6ul,  SDIO_CK = 12ul,  SPI3_MOSI = 6ul,  USART3_CK = 7ul, }; 
    };

    struct PC13 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 13u; }
      enum { EVENTOUT = 15ul, }; 
    };

    struct PC14 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 14u; }
      enum { EVENTOUT = 15ul, }; 
    };

    struct PC15 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 15u; }
      enum { EVENTOUT = 15ul, }; 
    };

    struct PC2  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 2u; }
      enum { DFSDM1_CKOUT = 8ul,  EVENTOUT = 15ul,  FSMC_NWE = 12ul,  I2S2_ext_SD = 6ul,  SPI2_MISO = 5ul, }; 
    };

    struct PC3  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 3u; }
      enum { EVENTOUT = 15ul,  FSMC_A0 = 12ul,  I2S2_SD = 5ul,  SPI2_MOSI = 5ul, }; 
    };

    struct PC4  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 4u; }
      enum { EVENTOUT = 15ul,  FSMC_NE4 = 12ul,  I2S1_MCK = 5ul,  QUADSPI_BK2_IO2 = 10ul, }; 
    };

    struct PC5  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 5u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SMBA = 4ul,  FSMC_NOE = 12ul,  QUADSPI_BK2_IO3 = 10ul,  USART3_RX = 7ul, }; 
    };

    struct PC6  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 6u; }
      enum { DFSDM1_CKIN3 = 6ul,  EVENTOUT = 15ul,  FMPI2C1_SCL = 4ul,  FSMC_D1 = 10ul,  FSMC_DA1 = 10ul,  I2S2_MCK = 5ul,  SDIO_D6 = 12ul,  TIM3_CH1 = 2ul,  TIM8_CH1 = 3ul,  USART6_TX = 8ul, }; 
    };

    struct PC7  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 7u; }
      enum { DFSDM1_DATIN3 = 10ul,  EVENTOUT = 15ul,  FMPI2C1_SDA = 4ul,  I2S2_CK = 5ul,  I2S3_MCK = 6ul,  SDIO_D7 = 12ul,  SPI2_SCK = 5ul,  TIM3_CH2 = 2ul,  TIM8_CH2 = 3ul,  USART6_RX = 8ul, }; 
    };

    struct PC8  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 8u; }
      enum { EVENTOUT = 15ul,  QUADSPI_BK1_IO2 = 9ul,  SDIO_D0 = 12ul,  TIM3_CH3 = 2ul,  TIM8_CH3 = 3ul,  USART6_CK = 8ul, }; 
    };

    struct PC9  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::C; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 9u; }
      enum { EVENTOUT = 15ul,  I2C3_SDA = 4ul,  I2S_CKIN = 5ul,  QUADSPI_BK1_IO0 = 9ul,  RCC_MCO_2 = 0ul,  SDIO_D1 = 12ul,  TIM3_CH4 = 2ul,  TIM8_CH4 = 3ul, }; 
    };

    struct PD0  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 0u; }
      enum { CAN1_RX = 9ul,  EVENTOUT = 15ul,  FSMC_D2 = 12ul,  FSMC_DA2 = 12ul, }; 
    };

    struct PD1  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 1u; }
      enum { CAN1_TX = 9ul,  EVENTOUT = 15ul,  FSMC_D3 = 12ul,  FSMC_DA3 = 12ul, }; 
    };

    struct PD10 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 10u; }
      enum { EVENTOUT = 15ul,  FSMC_D15 = 12ul,  FSMC_DA15 = 12ul,  USART3_CK = 7ul, }; 
    };

    struct PD11 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 11u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SMBA = 4ul,  FSMC_A16 = 12ul,  QUADSPI_BK1_IO0 = 9ul,  USART3_CTS = 7ul, }; 
    };

    struct PD12 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 12u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SCL = 4ul,  FSMC_A17 = 12ul,  QUADSPI_BK1_IO1 = 9ul,  TIM4_CH1 = 2ul,  USART3_RTS = 7ul, }; 
    };

    struct PD13 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 13u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SDA = 4ul,  FSMC_A18 = 12ul,  QUADSPI_BK1_IO3 = 9ul,  TIM4_CH2 = 2ul, }; 
    };

    struct PD14 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 14u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SCL = 4ul,  FSMC_D0 = 12ul,  FSMC_DA0 = 12ul,  TIM4_CH3 = 2ul, }; 
    };

    struct PD15 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 15u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SDA = 4ul,  FSMC_D1 = 12ul,  FSMC_DA1 = 12ul,  TIM4_CH4 = 2ul, }; 
    };

    struct PD2  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 2u; }
      enum { EVENTOUT = 15ul,  FSMC_NWE = 10ul,  SDIO_CMD = 12ul,  TIM3_ETR = 2ul, }; 
    };

    struct PD3  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 3u; }
      enum { DFSDM1_DATIN0 = 6ul,  EVENTOUT = 15ul,  FSMC_CLK = 12ul,  I2S2_CK = 5ul,  QUADSPI_CLK = 9ul,  SPI2_SCK = 5ul,  SYS_TRACED1 = 0ul,  USART2_CTS = 7ul, }; 
    };

    struct PD4  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 4u; }
      enum { DFSDM1_CKIN0 = 6ul,  EVENTOUT = 15ul,  FSMC_NOE = 12ul,  USART2_RTS = 7ul, }; 
    };

    struct PD5  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 5u; }
      enum { EVENTOUT = 15ul,  FSMC_NWE = 12ul,  USART2_TX = 7ul, }; 
    };

    struct PD6  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 6u; }
      enum { DFSDM1_DATIN1 = 6ul,  EVENTOUT = 15ul,  FSMC_NWAIT = 12ul,  I2S3_SD = 5ul,  SPI3_MOSI = 5ul,  USART2_RX = 7ul, }; 
    };

    struct PD7  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 7u; }
      enum { DFSDM1_CKIN1 = 6ul,  EVENTOUT = 15ul,  FSMC_NE1 = 12ul,  USART2_CK = 7ul, }; 
    };

    struct PD8  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 8u; }
      enum { EVENTOUT = 15ul,  FSMC_D13 = 12ul,  FSMC_DA13 = 12ul,  USART3_TX = 7ul, }; 
    };

    struct PD9  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::D; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 9u; }
      enum { EVENTOUT = 15ul,  FSMC_D14 = 12ul,  FSMC_DA14 = 12ul,  USART3_RX = 7ul, }; 
    };

    struct PE0  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 0u; }
      enum { EVENTOUT = 15ul,  FSMC_NBL0 = 12ul,  TIM4_ETR = 2ul, }; 
    };

    struct PE1  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 1u; }
      enum { EVENTOUT = 15ul,  FSMC_NBL1 = 12ul, }; 
    };

    struct PE10 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 10u; }
      enum { EVENTOUT = 15ul,  FSMC_D7 = 12ul,  FSMC_DA7 = 12ul,  QUADSPI_BK2_IO3 = 10ul,  TIM1_CH2N = 1ul, }; 
    };

    struct PE11 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 11u; }
      enum { EVENTOUT = 15ul,  FSMC_D8 = 12ul,  FSMC_DA8 = 12ul,  I2S4_WS = 5ul,  I2S5_WS = 6ul,  SPI4_NSS = 5ul,  SPI5_NSS = 6ul,  TIM1_CH2 = 1ul, }; 
    };

    struct PE12 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 12u; }
      enum { EVENTOUT = 15ul,  FSMC_D9 = 12ul,  FSMC_DA9 = 12ul,  I2S4_CK = 5ul,  I2S5_CK = 6ul,  SPI4_SCK = 5ul,  SPI5_SCK = 6ul,  TIM1_CH3N = 1ul, }; 
    };

    struct PE13 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 13u; }
      enum { EVENTOUT = 15ul,  FSMC_D10 = 12ul,  FSMC_DA10 = 12ul,  SPI4_MISO = 5ul,  SPI5_MISO = 6ul,  TIM1_CH3 = 1ul, }; 
    };

    struct PE14 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 14u; }
      enum { EVENTOUT = 15ul,  FSMC_D11 = 12ul,  FSMC_DA11 = 12ul,  I2S4_SD = 5ul,  I2S5_SD = 6ul,  SPI4_MOSI = 5ul,  SPI5_MOSI = 6ul,  TIM1_CH4 = 1ul, }; 
    };

    struct PE15 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 15u; }
      enum { EVENTOUT = 15ul,  FSMC_D12 = 12ul,  FSMC_DA12 = 12ul,  TIM1_BKIN = 1ul, }; 
    };

    struct PE2  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 2u; }
      enum { EVENTOUT = 15ul,  FSMC_A23 = 12ul,  I2S4_CK = 5ul,  I2S5_CK = 6ul,  QUADSPI_BK1_IO2 = 9ul,  SPI4_SCK = 5ul,  SPI5_SCK = 6ul,  SYS_TRACECLK = 0ul, }; 
    };

    struct PE3  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 3u; }
      enum { EVENTOUT = 15ul,  FSMC_A19 = 12ul,  SYS_TRACED0 = 0ul, }; 
    };

    struct PE4  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 4u; }
      enum { DFSDM1_DATIN3 = 8ul,  EVENTOUT = 15ul,  FSMC_A20 = 12ul,  I2S4_WS = 5ul,  I2S5_WS = 6ul,  SPI4_NSS = 5ul,  SPI5_NSS = 6ul,  SYS_TRACED1 = 0ul, }; 
    };

    struct PE5  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 5u; }
      enum { DFSDM1_CKIN3 = 8ul,  EVENTOUT = 15ul,  FSMC_A21 = 12ul,  SPI4_MISO = 5ul,  SPI5_MISO = 6ul,  SYS_TRACED2 = 0ul,  TIM9_CH1 = 3ul, }; 
    };

    struct PE6  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 6u; }
      enum { EVENTOUT = 15ul,  FSMC_A22 = 12ul,  I2S4_SD = 5ul,  I2S5_SD = 6ul,  SPI4_MOSI = 5ul,  SPI5_MOSI = 6ul,  SYS_TRACED3 = 0ul,  TIM9_CH2 = 3ul, }; 
    };

    struct PE7  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 7u; }
      enum { DFSDM1_DATIN2 = 6ul,  EVENTOUT = 15ul,  FSMC_D4 = 12ul,  FSMC_DA4 = 12ul,  QUADSPI_BK2_IO0 = 10ul,  TIM1_ETR = 1ul, }; 
    };

    struct PE8  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 8u; }
      enum { DFSDM1_CKIN2 = 6ul,  EVENTOUT = 15ul,  FSMC_D5 = 12ul,  FSMC_DA5 = 12ul,  QUADSPI_BK2_IO1 = 10ul,  TIM1_CH1N = 1ul, }; 
    };

    struct PE9  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::E; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 9u; }
      enum { DFSDM1_CKOUT = 6ul,  EVENTOUT = 15ul,  FSMC_D6 = 12ul,  FSMC_DA6 = 12ul,  QUADSPI_BK2_IO2 = 10ul,  TIM1_CH1 = 1ul, }; 
    };

    struct PF0  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 0u; }
      enum { EVENTOUT = 15ul,  FSMC_A0 = 12ul,  I2C2_SDA = 4ul, }; 
    };

    struct PF1  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 1u; }
      enum { EVENTOUT = 15ul,  FSMC_A1 = 12ul,  I2C2_SCL = 4ul, }; 
    };

    struct PF10 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 10u; }
      enum { EVENTOUT = 15ul,  TIM1_ETR = 1ul,  TIM5_CH4 = 2ul, }; 
    };

    struct PF11 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 11u; }
      enum { EVENTOUT = 15ul,  TIM8_ETR = 3ul, }; 
    };

    struct PF12 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 12u; }
      enum { EVENTOUT = 15ul,  FSMC_A6 = 12ul,  TIM8_BKIN = 3ul, }; 
    };

    struct PF13 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 13u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SMBA = 4ul,  FSMC_A7 = 12ul, }; 
    };

    struct PF14 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 14u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SCL = 4ul,  FSMC_A8 = 12ul, }; 
    };

    struct PF15 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 15u; }
      enum { EVENTOUT = 15ul,  FMPI2C1_SDA = 4ul,  FSMC_A9 = 12ul, }; 
    };

    struct PF2  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 2u; }
      enum { EVENTOUT = 15ul,  FSMC_A2 = 12ul,  I2C2_SMBA = 4ul, }; 
    };

    struct PF3  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 3u; }
      enum { EVENTOUT = 15ul,  FSMC_A3 = 12ul,  TIM5_CH1 = 2ul, }; 
    };

    struct PF4  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 4u; }
      enum { EVENTOUT = 15ul,  FSMC_A4 = 12ul,  TIM5_CH2 = 2ul, }; 
    };

    struct PF5  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 5u; }
      enum { EVENTOUT = 15ul,  FSMC_A5 = 12ul,  TIM5_CH3 = 2ul, }; 
    };

    struct PF6  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 6u; }
      enum { EVENTOUT = 15ul,  QUADSPI_BK1_IO3 = 9ul,  SYS_TRACED0 = 0ul,  TIM10_CH1 = 3ul, }; 
    };

    struct PF7  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 7u; }
      enum { EVENTOUT = 15ul,  QUADSPI_BK1_IO2 = 9ul,  SYS_TRACED1 = 0ul,  TIM11_CH1 = 3ul, }; 
    };

    struct PF8  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 8u; }
      enum { EVENTOUT = 15ul,  QUADSPI_BK1_IO0 = 10ul,  TIM13_CH1 = 9ul, }; 
    };

    struct PF9  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::F; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 9u; }
      enum { EVENTOUT = 15ul,  QUADSPI_BK1_IO1 = 10ul,  TIM14_CH1 = 9ul, }; 
    };

    struct PG0  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 0u; }
      enum { CAN1_RX = 9ul,  EVENTOUT = 15ul,  FSMC_A10 = 12ul, }; 
    };

    struct PG1  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 1u; }
      enum { CAN1_TX = 9ul,  EVENTOUT = 15ul,  FSMC_A11 = 12ul, }; 
    };

    struct PG10 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 10u; }
      enum { EVENTOUT = 15ul,  FSMC_NE3 = 12ul, }; 
    };

    struct PG11 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 11u; }
      enum { CAN2_RX = 9ul,  EVENTOUT = 15ul, }; 
    };

    struct PG12 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 12u; }
      enum { CAN2_TX = 9ul,  EVENTOUT = 15ul,  FSMC_NE4 = 12ul,  USART6_RTS = 8ul, }; 
    };

    struct PG13 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 13u; }
      enum { EVENTOUT = 15ul,  FSMC_A24 = 12ul,  SYS_TRACED2 = 0ul,  USART6_CTS = 8ul, }; 
    };

    struct PG14 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 14u; }
      enum { EVENTOUT = 15ul,  FSMC_A25 = 12ul,  QUADSPI_BK2_IO3 = 9ul,  SYS_TRACED3 = 0ul,  USART6_TX = 8ul, }; 
    };

    struct PG15 
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 15u; }
      enum { EVENTOUT = 15ul,  USART6_CTS = 8ul, }; 
    };

    struct PG2  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 2u; }
      enum { EVENTOUT = 15ul,  FSMC_A12 = 12ul, }; 
    };

    struct PG3  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 3u; }
      enum { EVENTOUT = 15ul,  FSMC_A13 = 12ul, }; 
    };

    struct PG4  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 4u; }
      enum { EVENTOUT = 15ul,  FSMC_A14 = 12ul, }; 
    };

    struct PG5  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 5u; }
      enum { EVENTOUT = 15ul,  FSMC_A15 = 12ul, }; 
    };

    struct PG6  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 6u; }
      enum { EVENTOUT = 15ul,  QUADSPI_BK1_NCS = 10ul, }; 
    };

    struct PG7  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 7u; }
      enum { EVENTOUT = 15ul,  USART6_CK = 8ul, }; 
    };

    struct PG8  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 8u; }
      enum { EVENTOUT = 15ul,  USART6_RTS = 8ul, }; 
    };

    struct PG9  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::G; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 9u; }
      enum { EVENTOUT = 15ul,  FSMC_NE2 = 12ul,  QUADSPI_BK2_IO2 = 9ul,  USART6_RX = 8ul, }; 
    };

    struct PH0  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::H; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 0u; }
      enum { EVENTOUT = 15ul, }; 
    };

    struct PH1  
    {
      constexpr inline static auto const Port() noexcept(true) { return Port::H; }
	  constexpr inline static std::uint32_t const Pin()  noexcept(true) { return 1u; }
      enum { EVENTOUT = 15ul, }; 
    };
    
  } // inline namespace 
} // namespace mpp::gpio 
 
