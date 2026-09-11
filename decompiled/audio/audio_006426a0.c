/* spd-match: far pct=4.07 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_006426A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006e7eb4;
extern int DAT_006e7ebc;
int unaff_ESI;
void __fastcall FUN_006426A0(int val)

{
  uint uVar1;

  uint *puVar2;
  int unaff_ESI;
  
  if (val == 0) {
    puVar2 = &DAT_006e7eb4;
    do {
      *puVar2 = *puVar2 & 0xfffffffe | (uint)(unaff_ESI != 0);
      puVar2 = puVar2 + 2;
    } while ((int)puVar2 < 0x6e80b4);
    return;
  }
  if (val == 1) {
    puVar2 = &DAT_006e7ebc;
    do {
      uVar1 = puVar2[-2];
      if ((uVar1 & 2) != 0) {
        puVar2[-2] = (unaff_ESI != 0 ^ uVar1) & 1 ^ uVar1;
      }
      uVar1 = *puVar2;
      if ((uVar1 & 2) != 0) {
        *puVar2 = (unaff_ESI != 0 ^ uVar1) & 1 ^ uVar1;
      }
      uVar1 = puVar2[2];
      if ((uVar1 & 2) != 0) {
        puVar2[2] = (unaff_ESI != 0 ^ uVar1) & 1 ^ uVar1;
      }
      uVar1 = puVar2[4];
      if ((uVar1 & 2) != 0) {
        puVar2[4] = (unaff_ESI != 0 ^ uVar1) & 1 ^ uVar1;
      }
      uVar1 = puVar2[6];
      if ((uVar1 & 2) != 0) {
        puVar2[6] = (unaff_ESI != 0 ^ uVar1) & 1 ^ uVar1;
      }
      uVar1 = puVar2[8];
      if ((uVar1 & 2) != 0) {
        puVar2[8] = (unaff_ESI != 0 ^ uVar1) & 1 ^ uVar1;
      }
      uVar1 = puVar2[10];
      if ((uVar1 & 2) != 0) {
        puVar2[10] = (unaff_ESI != 0 ^ uVar1) & 1 ^ uVar1;
      }
      uVar1 = puVar2[0xc];
      if ((uVar1 & 2) != 0) {
        puVar2[0xc] = (unaff_ESI != 0 ^ uVar1) & 1 ^ uVar1;
      }
      puVar2 = puVar2 + 0x10;
    } while ((int)puVar2 < 0x6e80bc);
    return;
  }
  (&DAT_006e7eb4)[val * 2] =
       (&DAT_006e7eb4)[val * 2] ^ ((uint)(unaff_ESI != 0) ^ (&DAT_006e7eb4)[val * 2]) & 1;
  return;
}
