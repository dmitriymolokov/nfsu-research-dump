/* spd-match: far pct=14.36 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_00642e80(...);
int __cdecl FUN_00645e00(...);
int __cdecl FUN_0064f810(...);
int __cdecl FUN_0064fb30(...);
int __cdecl FUN_0064fb50(...);
int __cdecl FUN_0064fb80(...);
int __cdecl FUN_0064fbd0(...);
extern int DAT_00712028;

struct ThisCallBox {
  undefined4 * FUN_00646100(undefined4 param_2, undefined4 param_3);
};
undefined4 * ThisCallBox::FUN_00646100(undefined4 param_2, undefined4 param_3) {
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_2c [24];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = FUN_0064f810();
  if (iVar2 != 0) {
    ((undefined4 *)this)[4] = 0xffffffff;
    ((undefined4 *)this)[1] = 0;
    ((undefined4 *)this)[3] = 0xffffffff;
    local_14 = 1;
    local_c = 0x1e;
    local_8 = 0xffffffff;
    FUN_0064fbd0(local_2c);
    local_10 = FUN_0064fb80(1,0x1e);
    uVar4 = FUN_00645e00("AV::audiobuff",local_10,0,0,DAT_00712028);
    ((undefined4 *)this)[1] = uVar4;
    uVar4 = FUN_0064fb50(param_2,local_2c,1,0x1e,((undefined4 *)this)[1],local_10);
    ((undefined4 *)this)[3] = uVar4;
    uVar4 = FUN_0064fb30(((undefined4 *)this)[3],0xffffffff,param_3);
    ((undefined4 *)this)[4] = uVar4;
    *((undefined4 *)this) = 0x3f800000;
    return ((undefined4 *)this);
  }
  iVar2 = FUN_0064f810();
  if (iVar2 == 0) {
                    
    FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/audioplayer.cpp",0x19,
                 "SNDSYS_inited()");
  }
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined4 *)(*pcVar1)();
  return puVar3;
}
