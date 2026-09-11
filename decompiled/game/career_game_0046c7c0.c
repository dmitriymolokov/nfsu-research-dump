/* spd-match: far pct=9.85 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0046c6d0(...);
extern int DAT_006fff34;
extern int DAT_0073ad34;
extern int _DAT_006cc7c0;
extern int _DAT_006cca38;
extern int _DAT_006ccc00;
extern void *PTR_LAB_006c8508;
int unaff_ESI;

struct ThisCallBox {
  void FUN_0046c7c0(undefined4 param_2);
};
void ThisCallBox::FUN_0046c7c0(undefined4 param_2) {
  char *pcVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char *pcVar5;
  undefined4 *unaff_ESI;
  float10 fVar6;
  
  *unaff_ESI = (unsigned int)&PTR_LAB_006c8508;
  fVar2 = ((float *)this)[2];
  fVar3 = *((float *)this);
  unaff_ESI[10] = fVar3;
  unaff_ESI[9] = 9;
  unaff_ESI[0xb] = fVar2;
  unaff_ESI[0xd] = (unsigned int)(((float *)this) + 4);
  unaff_ESI[0xc] = _DAT_006cc7c0 / (fVar2 - fVar3);
  fVar2 = ((float *)this)[2];
  fVar3 = *((float *)this);
  unaff_ESI[0x12] = (unsigned int)(((float *)this) + 0x16);
  unaff_ESI[0xf] = fVar3;
  unaff_ESI[0xe] = 3;
  unaff_ESI[0x10] = fVar2;
  unaff_ESI[0x11] = _DAT_006ccc00 / (fVar2 - fVar3);
  fVar2 = ((float *)this)[2];
  fVar3 = *((float *)this);
  unaff_ESI[0x13] = 9;
  unaff_ESI[0x14] = fVar3;
  unaff_ESI[0x17] = (unsigned int)(((float *)this) + 0xd);
  unaff_ESI[0x15] = fVar2;
  unaff_ESI[0x16] = _DAT_006cc7c0 / (fVar2 - fVar3);
  fVar2 = ((float *)this)[1];
  fVar3 = *((float *)this);
  unaff_ESI[0x18] = 9;
  unaff_ESI[0x19] = fVar3;
  unaff_ESI[0x1c] = (unsigned int)&DAT_006fff34;
  unaff_ESI[0x1a] = fVar2;
  unaff_ESI[0x1b] = _DAT_006cc7c0 / (fVar2 - fVar3);
  unaff_ESI[7] = param_2;
  unaff_ESI[6] = (unsigned int)(((float *)this));
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x20] = 0x3f800000;
  unaff_ESI[0x28] = 0x3f800000;
  fVar2 = (float)DAT_0073ad34;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x25] = 0;
  fVar2 = fVar2 * _DAT_006cca38;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  unaff_ESI[0x24] = fVar2;
  unaff_ESI[0x29] = 0;
  unaff_ESI[0x2b] = 0;
  unaff_ESI[0x2d] = 0;
  unaff_ESI[0x2e] = 0;
  unaff_ESI[0x2c] = 0;
  unaff_ESI[0x2f] = 0;
  fVar6 = (float10)FUN_0046c6d0();
  unaff_ESI[0x2a] = (float)fVar6;
  pcVar1 = (char *)(unaff_ESI + 3);
  unaff_ESI[8] = 0;
  *pcVar1 = 'E';
  pcVar5 = pcVar1;
  do {
    cVar4 = pcVar5[(int)("Engine" + (1 - (int)pcVar1))];
    pcVar5 = pcVar5 + 1;
    *pcVar5 = cVar4;
  } while (cVar4 != '\0');
  return;
}
