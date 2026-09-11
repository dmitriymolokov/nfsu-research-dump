/* spd-match: far pct=7.03 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-unbal-a/va_004E0380 */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int DAT_00758954;
extern int _DAT_00758958;
extern void LAB_004e0420(void);
extern void LAB_004e04c8(void);
extern void LAB_004e04e9(void);
extern void LAB_004e04fa(void);

int * __fastcall FUN_004e0380(int val, int *param_1, int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int *local_2c;
  byte local_20;
  byte local_1f [31];
  
  *param_1 = val;
  param_1[1] = 1;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  FUN_004f68c0(0x20,"P%d_Transmission_select",val + 1);
  uVar4 = FUN_004fd230();
  if (((param_2 == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c != 0) {
      iVar5 = FUN_004ef050(uVar4);
      local_2c = param_1 + 4;
      param_1[3] = iVar5;
      iVar5 = 0;
      goto LAB_004e0420;
    }
    iVar5 = 0;
  }
  local_2c = param_1 + 4;
  param_1[3] = iVar5;
  iVar5 = 0;
LAB_004e0420:
  do {
    iVar5 = iVar5 + 1;
    FUN_004f68c0(0x20,"button_%d_p%d",iVar5,val + 1);
    iVar9 = -1;
    pbVar7 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar7 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar3;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    iVar8 = DAT_0073578c;
    if (param_2 == 0) {
LAB_004e04e9:
      if (iVar8 == 0) {
LAB_004e04fa:
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar8 = DAT_0073578c;
      if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
              (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_004e04e9;
          goto LAB_004e04c8;
        }
        goto LAB_004e04fa;
      }
LAB_004e04c8:
      if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar8 = DAT_0073578c, iVar6 == 0))
      goto LAB_004e04e9;
    }
    *local_2c = iVar6;
    local_2c = local_2c + 1;
    if (1 < iVar5) {
      iVar5 = DAT_00758954;
      if (((*param_1 == 0) || (iVar5 = _DAT_00758958, *param_1 == 1)) && (iVar5 != 0)) {
        if (iVar5 == 1) {
          param_1[1] = 2;
        }
        return param_1;
      }
      param_1[1] = 1;
      return param_1;
    }
  } while( true );
}
