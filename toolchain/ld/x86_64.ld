ENTRY(timeos_kernel_entry)
SECTIONS
{
  . = 1M;
  .text : { *(.text.entry) *(.text*) }
  .rodata : { *(.rodata*) }
  .data : { *(.data*) }
  .bss : { *(COMMON) *(.bss*) }
}
