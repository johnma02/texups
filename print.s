.text
.global _start

_start:
    ldr x1, weknowyoureinthere
    ldr x2, len
    mov x8, 0x40
    svc 0

.data
weknowyoureinthere:
    .asciz "We know you're in there\n"
len = .-weknowyoureinthere

