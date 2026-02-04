ENTRY(reset_handler)

MEMORY {
 
  FLASH (RX) : ORIGIN = 0x08000000, LENGTH = 512K
  RAM (W) : ORIGIN = 0x20000000, LENGTH = 128K

}

SECTIONS {

  .isr_vector : {
    . = ALIGN(4); /* 4 byte alignment - 1 word */
    KEEP(*(.isr_vector))
    . = ALIGN(4); /* 4 byte alignment - 1 word */
  } > FLASH

  .text : {
    . = ALIGN(4); /* 4 byte alignment - 1 word */
    *(.text)
    *(.rodata)
    . = ALIGN(4);
  } > FLASH

  .bss : {
    . = ALIGN(4);
    _sbss = .;
    *(.bss)
    _ebss = .;
  } > RAM

  .data : {
    . = ALIGN(4);
    _sdata = .;
    *(.data)
    . = ALIGN(4);
    _edata = .;
  } > RAM AT> FLASH

  _sidata = LOADADDR(.data);

}
