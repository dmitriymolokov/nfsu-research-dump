/* spd-match: far pct=9.43 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0067f15e();
int __cdecl FUN_0067f34b();
extern int DAT_006eb720;
extern int DAT_00717e64;
extern int DAT_00717e68;
extern int DAT_00717e6c;
extern int DAT_00717e70;
extern int DAT_00717e74;
extern int DAT_00717e78;
extern int DAT_00717e7c;
extern int DAT_00717e80;
extern code *DAT_00717e84;
extern void LAB_0067f5a2(void);
extern void LAB_0067f5c3(void);
int unaff_retaddr;

uint FUN_0067f3c2(void)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  uint unaff_retaddr;
  undefined4 uVar4;
  char local_80 [120];
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  iVar1 = _LcidFromHexString();
  iVar2 = (*DAT_00717e84)(iVar1,(-(uint)(DAT_00717e74 != 0) & 0xfffff005) + 0x1002,local_80,0x78);
  if (iVar2 == 0) {
    DAT_00717e64 = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_00717e78,local_80);
  if (iVar2 == 0) {
    iVar2 = (*DAT_00717e84)(iVar1,(-(uint)(DAT_00717e70 != 0) & 0xfffff002) + 0x1001,local_80,0x78);
    if (iVar2 == 0) {
      DAT_00717e64 = 0;
      return 1;
    }
    iVar2 = __stricmp(DAT_00717e80,local_80);
    if (iVar2 == 0) {
      DAT_00717e64 = DAT_00717e64 | 0x304;
      DAT_00717e68 = iVar1;
      DAT_00717e6c = iVar1;
    }
    else if ((DAT_00717e64 & 2) == 0) {
      if ((DAT_00717e7c == 0) ||
         (iVar2 = __strnicmp(DAT_00717e80,local_80,DAT_00717e7c), iVar2 != 0)) {
        if (((DAT_00717e64 & 1) == 0) && (iVar2 = FUN_0067f15e(iVar1), iVar2 != 0)) {
          DAT_00717e64 = DAT_00717e64 | 1;
          DAT_00717e6c = iVar1;
        }
      }
      else {
        DAT_00717e64 = DAT_00717e64 | 2;
        DAT_00717e6c = iVar1;
        sVar3 = _strlen(DAT_00717e80);
        if (sVar3 == DAT_00717e7c) {
          DAT_00717e68 = iVar1;
        }
      }
    }
  }
  if ((DAT_00717e64 & 0x300) == 0x300) goto LAB_0067f5c3;
  iVar2 = (*DAT_00717e84)(iVar1,(-(uint)(DAT_00717e70 != 0) & 0xfffff002) + 0x1001,local_80,0x78);
  if (iVar2 == 0) {
    DAT_00717e64 = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_00717e80,local_80);
  if (iVar2 == 0) {
    DAT_00717e64 = DAT_00717e64 | 0x200;
    if (((DAT_00717e70 == 0) && (DAT_00717e7c != 0)) &&
       (sVar3 = _strlen(DAT_00717e80), sVar3 == DAT_00717e7c)) {
      uVar4 = 1;
      goto LAB_0067f5a2;
    }
  }
  else {
    if (((DAT_00717e70 != 0) || (DAT_00717e7c == 0)) ||
       (iVar2 = __strnicmp(DAT_00717e80,local_80,DAT_00717e7c), iVar2 != 0)) goto LAB_0067f5c3;
    uVar4 = 0;
LAB_0067f5a2:
    iVar2 = FUN_0067f34b(iVar1,uVar4);
    if (iVar2 == 0) goto LAB_0067f5c3;
  }
  DAT_00717e64 = DAT_00717e64 | 0x100;
  if (DAT_00717e68 == 0) {
    DAT_00717e68 = iVar1;
  }
LAB_0067f5c3:
  return ~(DAT_00717e64 >> 2) & 1;
}
