/* spd-match: far pct=9.82 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040C300 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040f3d0();
int __cdecl FUN_00410400();
extern unsigned char *DAT_0073636c;
extern int DAT_007363e8;
extern unsigned char *DAT_0073640c;
extern int DAT_00736450;
void __fastcall FUN_0040c300(int obj, undefined4 param_1, undefined4 param_2)

{

  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_7c = *(undefined4 *)(obj + 0x14);
  local_80 = *(undefined4 *)(obj + 0x10);
  local_78 = *(undefined4 *)(obj + 0x18);
  local_74 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(obj + 0x83),
                                        *(undefined1 *)(obj + 0x80)),
                               *(undefined1 *)(obj + 0x81)),*(undefined1 *)(obj + 0x82));
  local_6c = *(undefined4 *)(obj + 0x54);
  local_5c = *(undefined4 *)(obj + 0x24);
  local_70 = *(undefined4 *)(obj + 0x50);
  local_60 = *(undefined4 *)(obj + 0x20);
  local_58 = *(undefined4 *)(obj + 0x28);
  local_54 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(obj + 0x87),
                                        *(undefined1 *)(obj + 0x84)),
                               *(undefined1 *)(obj + 0x85)),*(undefined1 *)(obj + 0x86));
  local_4c = *(undefined4 *)(obj + 0x60);
  local_3c = *(undefined4 *)(obj + 0x34);
  local_50 = *(undefined4 *)(obj + 0x5c);
  local_40 = *(undefined4 *)(obj + 0x30);
  local_38 = *(undefined4 *)(obj + 0x38);
  local_34 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(obj + 0x8b),
                                        *(undefined1 *)(obj + 0x88)),
                               *(undefined1 *)(obj + 0x89)),*(undefined1 *)(obj + 0x8a));
  local_2c = *(undefined4 *)(obj + 0x6c);
  local_1c = *(undefined4 *)(obj + 0x44);
  local_30 = *(undefined4 *)(obj + 0x68);
  local_20 = *(undefined4 *)(obj + 0x40);
  local_18 = *(undefined4 *)(obj + 0x48);
  local_14 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(obj + 0x8f),
                                        *(undefined1 *)(obj + 0x8c)),
                               *(undefined1 *)(obj + 0x8d)),*(undefined1 *)(obj + 0x8e));
  local_c = *(undefined4 *)(obj + 0x78);
  local_10 = *(undefined4 *)(obj + 0x74);
  FUN_0040f3d0(param_1);
  FUN_00410400(param_2);
  if (DAT_00736450 != 0) {
    (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0xd0))
              (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0x40),DAT_00736450);
  }
  DAT_007363e8 = 0;
  (**(code **)(*DAT_0073636c + 0x14c))(DAT_0073636c,6,2,&local_80,0x20);
  return;
}
