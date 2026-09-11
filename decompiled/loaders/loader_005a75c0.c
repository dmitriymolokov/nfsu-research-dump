/* spd-match: far pct=4.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_0077af30;
extern void LAB_005a764a(void);
int unaff_EBX;
int unaff_EDI;
int unaff_ESI;
int unaff_retaddr;

undefined4 FUN_005a75c0(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  int unaff_retaddr;
  
  if ((unaff_ESI < 0) || (bVar3 = true, 4 < unaff_ESI)) {
    bVar3 = false;
  }
  if ((unaff_ESI < 0xb) || (0x10 < unaff_ESI)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar3) && (!bVar2)) {
    return 0;
  }
  iVar4 = (**(code **)(*unaff_EDI + 0x10))();
  cVar1 = (char)unaff_EDI[0x17];
  if (((cVar1 == -1) || (*(short *)((int)unaff_EDI + 0x5e) == -1)) || (cVar1 < 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = (&DAT_0077af30)[cVar1];
  }
  if ((char)((uint)unaff_EBX >> 0x18) == '\0') {
    if (!bVar2) goto LAB_005a764a;
    cVar1 = *(char *)(iVar4 + iVar6 + 0x265);
  }
  else {
    pcVar5 = (char *)((iVar4 + 1) * 0x34 + iVar6);
    if (*pcVar5 != '\0') goto LAB_005a764a;
    cVar1 = pcVar5[1];
  }
  if (cVar1 == '\0') {
    return 0;
  }
LAB_005a764a:
  if ((*(int *)(unaff_retaddr + 0x24) != 2) && (bVar2)) {
    if ((unaff_ESI < 0) || (4 < unaff_ESI)) {
      if (unaff_ESI < 0xb) {
        return 0;
      }
      if (0x10 < unaff_ESI) {
        return 0;
      }
      cVar1 = *(char *)(unaff_EDI[0x19] + unaff_ESI + 0xa6);
    }
    else {
      cVar1 = *(char *)(unaff_EDI[0x19] + 0xb0);
    }
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}
