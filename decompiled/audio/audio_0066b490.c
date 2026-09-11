/* spd-match: far pct=78.95 M4.0.2-CE */
/* M3.9.254: /Og left the sole arg in EAX (Ghidra in_EAX). Reconstructed as __fastcall (ECX)
 * for 1-VA compilation. Opcode delta: ORIG mov edi,eax (8B F8) vs BEST mov esi,ecx (8B F1).
 * Do not use __asm { mov in_EAX, eax } — kills FPO on larger bodies; here register pick is ESI.
 * Avoid #include <windows.h> in this TU — forces GetTickCount IAT (ff 15) vs ORIG e8.
 */
typedef unsigned long DWORD;

DWORD __stdcall GetTickCount(void);
void __cdecl FUN_0066b1a0(int param);

void __fastcall FUN_0066b490(unsigned char *obj)
{
  if (*(int *)(obj + 0x80) == 3) {
    if (*(int *)(obj + 0xa8) == *(int *)(obj + 0xac)) {
      DWORD t;
      t = GetTickCount();
      if (t > *(unsigned int *)(obj + 0xb4) + 5000) {
        FUN_0066b1a0(0x13);
      }
    }
  }
}
