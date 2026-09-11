/* spd-match: far pct=5.16 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F25F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f1810();
int __cdecl FUN_004f2db0();
int __cdecl FUN_004f43d0();
int __cdecl FUN_004f48b0();
int __cdecl FUN_00514bf0();
int __cdecl FUN_0059fb80();
int __cdecl FUN_0059ff40();
extern int DAT_006b675c;
extern int DAT_006ee6f0;
void __fastcall FUN_004f25f0(undefined4 val, int param_1)

{

  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 local_8a8;
  undefined4 local_8a0;
  undefined4 local_89c;
  undefined4 local_898;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined4 local_87c;
  undefined4 local_878;
  undefined4 local_874;
  undefined4 local_870;
  undefined4 local_86c;
  undefined4 local_868;
  undefined4 local_864;
  undefined1 local_860 [4];
  undefined1 auStack_85c [12];
  undefined1 local_850 [52];
  undefined1 auStack_81c [2072];
  
  iVar1 = FUN_004f43d0();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    if (param_1 == 0) {
      param_1 = FUN_004f2db0(val,unaff_EBX,*(int *)(iVar1 + 8));
    }
    else {
      FUN_00514bf0(param_1);
    }
    local_8a8 = 0x3f800000;
    if (((DAT_006ee6f0 == 7) || (DAT_006ee6f0 == 8)) && (*(int *)(unaff_EBX + 0x24) == -0x6a7c55e6))
    {
      local_8a8 = DAT_006b675c;
    }
    local_8a0 = 0x3f800000;
    local_89c = 0;
    local_898 = 0;
    local_894 = 0;
    local_890 = 0;
    local_88c = 0x3f800000;
    local_888 = 0;
    local_884 = 0;
    local_880 = 0;
    local_87c = 0;
    local_878 = 0x3f800000;
    local_874 = 0;
    local_864 = 0x3f800000;
    local_870 = 0x43a00000;
    local_86c = 0x43700000;
    local_868 = 0;
    FUN_004f1810(val,local_860,*(undefined2 *)(unaff_EBX + 0x20),local_8a8);
    FUN_004f25f0(local_850,local_850,&local_8a0);
    iVar1 = *(int *)(unaff_EBX + 0x5c);
    if (((*(byte *)(unaff_EBX + 0x1c) & 2) == 0) && (iVar2 = FUN_0059fb80(), iVar2 != 0)) {
      FUN_0059ff40(auStack_81c,0x800);
      puVar3 = auStack_81c;
    }
    else {
      puVar3 = *(undefined1 **)(unaff_EBX + 0x60);
    }
    if (((((iVar1 != 0x169268) && (iVar1 != 0x4f876b6f)) &&
         ((iVar1 != 0x5d6a55a6 &&
          ((((iVar1 != 0x3825db8f && (iVar1 != 0x15417b53)) && (iVar1 != 0x2e8dfc7)) &&
           ((iVar1 != -0x57885dcc && (iVar1 != 0x1335f0)))))))) && (iVar1 != 0x2616b630)) &&
       (((iVar1 != -0x6c4af7c6 && (iVar1 != -0x3ae6c855)) && (iVar1 != 0x1cb516e6)))) {
      FUN_004f48b0(unaff_EDI,puVar3,auStack_85c,param_1);
    }
    return;
  }
  return;
}
