/* spd-match: far pct=7.47 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A55B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005a6000();
extern int DAT_00736150;
extern int DAT_0077af30;
extern void LAB_005a5610(void);
void __fastcall FUN_005a55b0(int obj)

{
  char cVar1;

  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *local_4;
  
  *(undefined4 *)(obj + 0xb8) = 0xffffffff;
  *(undefined1 *)(obj + 0xbc) = 0;
  *(undefined4 *)(obj + 0xc0) = 0xffffffff;
  *(undefined1 *)(obj + 0xb0) = 1;
  *(undefined4 *)(obj + 0xb1) = 0x1010101;
  *(undefined2 *)(obj + 0xb5) = 0x101;
  uVar6 = ((int)*(uint *)(obj + 0xac) < 1) - 1 & *(uint *)(obj + 0xac);
  if (*(int *)(obj + 4) <= (int)uVar6) {
    return;
  }
  local_4 = (int *)(obj + 4 + uVar6 * 4);
LAB_005a5610:
  iVar5 = local_4[1];
  cVar1 = *(char *)(iVar5 + 0x5c);
  if (((cVar1 == -1) || (*(short *)(iVar5 + 0x5e) == -1)) || (cVar1 < 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (&DAT_0077af30)[cVar1];
  }
  iVar7 = (int)cVar1;
  if ((cVar1 == -1) || (*(short *)(iVar5 + 0x5e) == -1)) {
    iVar2 = 0;
  }
  else {
    if (iVar7 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (&DAT_0077af30)[iVar7];
    }
    iVar2 = *(short *)(iVar5 + 0x5e) * 0x88 + 0x27c + iVar2;
  }
  if ((uVar6 == 0) || (iVar7 != *(char *)(*local_4 + 0x5c))) {
    FUN_005a6000(uVar4);
  }
  if (((*(uint *)(iVar2 + 0x84) & 0x1f00000) != 0x1f00000) && (*(int *)(obj + 0xb8) == -1)) {
    *(uint *)(obj + 0xb8) = uVar6;
  }
  iVar5 = 0;
  do {
    iVar7 = 0;
    do {
      if (*(char *)(iVar7 + 0x81 + iVar2) == -1) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    if ((iVar7 <= iVar5) || (*(int *)(obj + 0xc0) != -1)) break;
    uVar3 = (uint)*(byte *)(iVar5 + 0x81 + iVar2);
    if (uVar3 == 0xff) {
      iVar7 = 0;
    }
    else {
      iVar7 = uVar3 * 0x20 + DAT_00736150;
    }
    if (*(char *)(iVar7 + 0xb) == '\t') {
      *(uint *)(obj + 0xc0) = uVar6;
    }
    if (*(char *)(iVar7 + 0x10) != '\0') {
      *(undefined1 *)(obj + 0xbc) = 1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
  uVar6 = uVar6 + 1;
  local_4 = local_4 + 1;
  if (*(int *)(obj + 4) <= (int)uVar6) {
    return;
  }
  goto LAB_005a5610;
}
