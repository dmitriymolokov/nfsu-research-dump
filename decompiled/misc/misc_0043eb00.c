/* spd-match: far pct=15.48 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_00401bd0();
int __cdecl FUN_00401d80();
int __cdecl FUN_004081e0();
int __cdecl FUN_004134c0();
int __cdecl FUN_0041f5c0();
int __cdecl FUN_00424d50();
int __cdecl FUN_00424d60();
int __cdecl FUN_00424d80();
int __cdecl FUN_00424db0();
int __cdecl FUN_0042ac60();
int __cdecl FUN_00432c50();
int __cdecl FUN_00432d10();
int __cdecl FUN_00432d40();
int __cdecl FUN_00435ff0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043b850();
int __cdecl FUN_0043db50();
int __cdecl FUN_0043db60();
int __cdecl FUN_0043ea50();
int __cdecl FUN_0043eaa0();
int __cdecl FUN_0043f0e0();
int __cdecl FUN_0043f130();
int __cdecl FUN_004a3420();
int __cdecl FUN_00564990();
int __cdecl FUN_00575950();
extern int DAT_00700a18;
extern int DAT_0077a03c;
extern int DAT_0077a040;
extern int DAT_0077b198;
extern int _DAT_006b78fc;
extern int _DAT_0078a380;

void __fastcall FUN_0043eb00(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_54;
  int local_28;
  int local_c;
  
  local_c = 0;
  while( true ) {
    iVar2 = FUN_004081e0();
    if (iVar2 <= local_c) break;
    FUN_00401d80();
    iVar2 = FUN_00424d60();
    if (iVar2 == 0) {
      iVar2 = FUN_00424d50();
      if (iVar2 != 0) {
        iVar2 = FUN_00424d80();
        if (iVar2 != 0) {
          uVar3 = FUN_0041f5c0();
          FUN_0043b850(uVar3);
          iVar2 = FUN_004134c0();
          uVar3 = FUN_0041f5c0();
          iVar4 = FUN_0043ea50(uVar3);
          *(float *)(iVar4 + 0x10) = (float)iVar2;
        }
      }
    }
    else {
      FUN_00424db0();
      FUN_00432d40();
      FUN_00575950();
      fVar7 = (float10)FUN_00432d10();
      uVar3 = FUN_0041f5c0();
      iVar2 = FUN_0043ea50(uVar3);
      *(float *)(iVar2 + 0x10) = (float)fVar7;
    }
    local_c = local_c + 1;
  }
  cVar1 = FUN_0043a2e0();
  if (cVar1 == '\0') {
    iVar2 = FUN_0043f0e0(*(undefined4 *)(param_1 + 8));
    if (iVar2 != 0) {
      iVar4 = FUN_0043db60();
      FUN_004081e0();
      iVar5 = FUN_0042ac60();
      if (iVar4 <= iVar5) {
        iVar4 = FUN_0043db60();
        FUN_0043db50(iVar4 + 1);
        iVar4 = FUN_004081e0();
        for (local_28 = 0; local_28 < 4 - iVar4; local_28 = local_28 + 1) {
          iVar5 = FUN_0043ea50(local_28 + 100);
          FUN_004081e0();
          iVar6 = FUN_0042ac60();
          if (iVar6 == 0) {
            iVar6 = *(int *)(iVar2 + 0x94 + *(int *)(iVar5 + 0xc) * 4);
          }
          else {
            iVar6 = *(int *)(iVar2 + 0xa4 + *(int *)(iVar5 + 0xc) * 4);
          }
          local_54 = (float)iVar6;
          *(float *)(iVar5 + 0x10) =
               ((int)_DAT_006b78fc) * local_54 *
               ((*(float *)(&((int)DAT_0077a040) + *(int *)(iVar5 + 0x20) * 0x54) -
                *(float *)(&((int)DAT_0077a03c) + *(int *)(iVar5 + 0x20) * 0x54)) *
                *(float *)(iVar5 + 0x24) + *(float *)(&((int)DAT_0077a03c) + *(int *)(iVar5 + 0x20) * 0x54)
               ) * ((int)_DAT_0078a380) * ((int)DAT_00700a18) + *(float *)(iVar5 + 0x10);
        }
      }
    }
  }
  iVar2 = FUN_00401bd0();
  if (iVar2 == 0) {
    FUN_00564990(&DAT_0077b198,FUN_0043f130);
    FUN_00435ff0(&DAT_0077b198);
    FUN_004a3420();
  }
  FUN_004081e0();
  iVar2 = FUN_00432c50();
  if (iVar2 != 0) {
    FUN_004081e0();
    iVar2 = FUN_0042ac60();
    if (iVar2 < 0xb) {
      uVar3 = FUN_0041f5c0();
      uVar3 = FUN_0043eaa0(uVar3);
      FUN_004081e0();
      iVar2 = FUN_0042ac60();
      *(undefined4 *)(param_1 + 0x28 + iVar2 * 4) = uVar3;
    }
  }
  return;
}
