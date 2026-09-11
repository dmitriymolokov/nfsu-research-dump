/* spd-match: far pct=3.88 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005D79DC */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_005d7a06(void);
extern void LAB_005d7a34(void);
extern void LAB_005d7a9e(void);
extern void LAB_005d7aa3(void);
undefined4 __fastcall FUN_005d79dc(int * obj, int *param_1)

{
  byte bVar1;

  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  iVar3 = *param_1;
  if (iVar3 != *obj) {
    return 0;
  }
  if (iVar3 < 9) {
    if (4 < iVar3) {
      if (*(double *)(param_1 + 2) != *(double *)(obj + 2)) {
        return 0;
      }
      return 1;
    }
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        pbVar4 = (byte *)(obj + 2);
        pbVar2 = (byte *)(param_1 + 2);
        do {
          bVar1 = *pbVar2;
          bVar5 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) goto LAB_005d7a9e;
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar5 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_005d7a9e;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        goto LAB_005d7a34;
      }
      if (iVar3 < 2) {
        return 1;
      }
      if (4 < iVar3) {
        return 1;
      }
    }
    bVar5 = param_1[2] == obj[2];
    goto LAB_005d7a06;
  }
  if (iVar3 == 9) {
    pbVar4 = (byte *)obj[2];
    pbVar2 = (byte *)param_1[2];
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) goto LAB_005d7a9e;
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_005d7a9e;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
  }
  else {
    if (iVar3 != 10) {
      return 1;
    }
    pbVar4 = (byte *)obj[2];
    pbVar2 = (byte *)param_1[2];
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) goto LAB_005d7a9e;
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_005d7a9e;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
  }
LAB_005d7a34:
  iVar3 = 0;
LAB_005d7aa3:
  bVar5 = iVar3 == 0;
LAB_005d7a06:
  if (!bVar5) {
    return 0;
  }
  return 1;
LAB_005d7a9e:
  iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  goto LAB_005d7aa3;
}
