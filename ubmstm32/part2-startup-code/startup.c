#include <stdint.h>

#define STACK_POINTER_INIT 0x20020000
#define EMPTY_HANDLER "empty_handler"

void empty_handler(void);
void reset_handler(void);

void nmi_handler(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void hard_fault_handler(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void mem_manage_handler(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void bus_fault_handler(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void usage_fault_handler(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void svcall_handler(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void debug_monitor(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void pend_sv_handler(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void systick_handler(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void window_watchdog_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti16_pvd_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti21_tamp_stamp_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti22_rtc_wakeup_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void flash_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void rcc_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti0_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti1_ieq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti2_ieq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti3_ieq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti4_ieq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma1_stream0(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma1_stream1(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma1_stream2(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma1_stream3(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma1_stream4(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma1_stream5(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma1_stream6(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void adc1_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti_9_to_5_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void tim1_brk_tim9_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void tim1_up_tim10_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void tim1_trg_com_tim11_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void tim1_cc_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void tim2_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void tim3_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void tim4_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void i2c1_ev_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void i2c1_er_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void i2c2_ev_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void i2c2_er_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void spi1_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void spi2_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void usart1_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void usart2_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti_15_to_10_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti17_or_rtc_alarm_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void exti18_or_otg_fs_wakeup_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma1_stream7_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void sdio_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void tim5_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void spi3_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma2_stream0_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma2_stream1_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma2_stream2_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma2_stream3_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma2_stream4_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void otg_fs_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma2_stream5_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma2_stream6_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void dma2_stream7_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void usart6_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void i2c3_ev_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void i2c3_er_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void fpu_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void spi4_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));
void spi5_irq(void) __attribute__ ((weak, alias(EMPTY_HANDLER)));

const uint32_t ISR_VECTOR[] __attribute__ ((section(".isr_vector"))) = {
  STACK_POINTER_INIT,
  (uint32_t) &reset_handler,
  (uint32_t) &nmi_handler,
  (uint32_t) &hard_fault_handler,
  (uint32_t) &mem_manage_handler,
  (uint32_t) &bus_fault_handler,
  (uint32_t) &usage_fault_handler,
  0, // reserved
  0, // reserved
  0, // reserved
  0, // reserved
  (uint32_t) &svcall_handler,
  (uint32_t) &debug_monitor,
  0, // reserved
  (uint32_t) &pend_sv_handler,
  (uint32_t) &systick_handler,
  (uint32_t) &window_watchdog_irq,
  (uint32_t) &exti16_pvd_irq,
  (uint32_t) &exti21_tamp_stamp_irq,
  (uint32_t) &exti22_rtc_wakeup_irq,
  (uint32_t) &flash_irq,
  (uint32_t) &rcc_irq,
  (uint32_t) &exti0_irq,
  (uint32_t) &exti1_ieq,
  (uint32_t) &exti2_ieq,
  (uint32_t) &exti3_ieq,
  (uint32_t) &exti4_ieq,
  (uint32_t) &dma1_stream0,
  (uint32_t) &dma1_stream1,
  (uint32_t) &dma1_stream2,
  (uint32_t) &dma1_stream3,
  (uint32_t) &dma1_stream4,
  (uint32_t) &dma1_stream5,
  (uint32_t) &dma1_stream6,
  (uint32_t) &adc1_irq,
  0, 
  0, 
  0, 
  0, 
  (uint32_t) &exti_9_to_5_irq,
  (uint32_t) &tim1_brk_tim9_irq,
  (uint32_t) &tim1_up_tim10_irq,
  (uint32_t) &tim1_trg_com_tim11_irq,
  (uint32_t) &tim1_cc_irq,
  (uint32_t) &tim2_irq,
  (uint32_t) &tim3_irq,
  (uint32_t) &tim4_irq,
  (uint32_t) &i2c1_ev_irq,
  (uint32_t) &i2c1_er_irq,
  (uint32_t) &i2c2_ev_irq,
  (uint32_t) &i2c2_er_irq,
  (uint32_t) &spi1_irq,
  (uint32_t) &spi2_irq,
  (uint32_t) &usart1_irq,
  (uint32_t) &usart2_irq,
  0, // ommited, probably missing reserved sector in rm
  (uint32_t) &exti_15_to_10_irq,
  (uint32_t) &exti17_or_rtc_alarm_irq,
  (uint32_t) &exti18_or_otg_fs_wakeup_irq,
  0,
  0,
  0,
  0,
  (uint32_t) &dma1_stream7_irq,
  0,
  (uint32_t) &sdio_irq,
  (uint32_t) &tim5_irq,
  (uint32_t) &spi3_irq,
  0,
  0,
  0,
  0,
  (uint32_t) &dma2_stream0_irq,
  (uint32_t) &dma2_stream1_irq,
  (uint32_t) &dma2_stream2_irq,
  (uint32_t) &dma2_stream3_irq,
  (uint32_t) &dma2_stream4_irq,
  0,
  0,
  0,
  0,
  0,
  0,
  (uint32_t) &otg_fs_irq,
  (uint32_t) &dma2_stream5_irq,
  (uint32_t) &dma2_stream6_irq,
  (uint32_t) &dma2_stream7_irq,
  (uint32_t) &usart6_irq,
  (uint32_t) &i2c3_ev_irq,
  (uint32_t) &i2c3_er_irq,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  (uint32_t) &fpu_irq,
  0,
  0,
  (uint32_t) &spi4_irq,
  (uint32_t) &spi5_irq,
};


void empty_handler(void) {
  while(1) {}
}


extern int main(void);
void reset_handler(void) {


  extern uint32_t _sbss[];
  extern uint32_t _ebss[];
  extern uint32_t _sidata[];
  extern uint32_t _sdata[];
  extern uint32_t _edata[];

  uint32_t data_size =  (_edata - _sdata);
  uint32_t bss_size =  (_ebss - _sbss);

  // copy from flash to ram
  uint8_t * data_ram = (uint8_t *) _sdata;
  uint8_t * data_flash = (uint8_t *) _sidata;
  for(uint32_t i = 0u; i < data_size; i++) {
    *(data_ram + i) = *(data_flash + i);
  }

  // clear bss section
  uint8_t * bss = (uint8_t *) _sbss; 
  for(int i = 0; i < bss_size; i++) {
    *(bss + i) = 0;
  }

  main();

}
