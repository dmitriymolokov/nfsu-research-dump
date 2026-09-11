/* Decompiled from Speed.exe @ 00654f00 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4
FUN_00654f00(uint param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  if ((param_1 & 0x1f8) == 0) {
    param_1 = param_1 | 0x1f8;
  }
  uVar1 = 0;
  if ((param_1 & 0x10) != 0) {
    uVar1 = 4;
  }
  if ((char)param_1 < '\0') {
    uVar1 = uVar1 | 0x10;
  }
  uVar4 = param_1 & 0xfffffe07;
  uVar3 = 4;
  while (uVar1 != 0) {
    if ((uVar1 & uVar3) != 0) {
      if ((uVar3 & 0x71c) == 4) {
        puVar2 = &DAT_00713f50 + uVar4 * 10;
      }
      else if ((uVar3 & 0x71c) == 0x10) {
        puVar2 = &DAT_00713f64 + uVar4 * 10;
      }
      else {
        puVar2 = (undefined2 *)0x0;
      }
      *puVar2 = (short)param_3;
      *(undefined4 *)(puVar2 + 2) = param_4;
      *(undefined4 *)(puVar2 + 4) = param_5;
      FUN_00659950(uVar4,uVar3);
      uVar1 = uVar1 & ~uVar3;
    }
    uVar3 = uVar3 << 1;
  }
  if (param_3 != 0) {
    FUN_00654e60(param_1,param_2);
    return 0;
  }
  FUN_00654e60(param_1,0);
  return 0;
}

