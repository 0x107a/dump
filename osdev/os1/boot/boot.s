BITS 16
org 0x00007c00

global boot

section .rodata
  hello: db "Hello World!", 0

section .text
boot:
  jmp $


padding: times 510 - ($-$$) db 0
magic:   dw 0xaa55
