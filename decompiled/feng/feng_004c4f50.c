/* Decompiled from Speed.exe @ 004c4f50 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004c4f50(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 < 0x9795550f) {
    if (param_2 == 0x9795550e) {
      FUN_00414a60();
      FUN_004f6bd0(&DAT_006c7a3c,1);
      FUN_004f6bd0(&DAT_006c7a3c,1);
      FUN_004f6bd0(&DAT_006c7a3c,1);
      return;
    }
    if (0x911ab364 < param_2) {
      if (param_2 != 0x9120409e) {
        return;
      }
LAB_004c501a:
      FUN_004c4be0();
      return;
    }
    if (param_2 == 0x911ab364) {
      FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
      return;
    }
    if (param_2 != 0xc407210) {
      if (param_2 != 0x12344321) {
        return;
      }
      FUN_004c4a60(param_1);
      return;
    }
    FUN_00414a10();
    FUN_004f6bd0(&DAT_006c619c,1);
    FUN_004f6bd0(&DAT_006c619c,1);
    cVar1 = FUN_004c4ee0();
    if (cVar1 != '\0') {
      FUN_004c4f00();
      return;
    }
  }
  else {
    if (param_2 != 0xaabbddcc) {
      if (param_2 != 0xb5971bf1) {
        if (param_2 != 0xc98356ba) {
          return;
        }
        FUN_004f89d0();
        FUN_004f7d30();
        return;
      }
      goto LAB_004c501a;
    }
    FUN_004f62a0(1,0);
    if (((DAT_0073578c != 0) && (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x18) != 0)) {
      FUN_004f09b0(*(int *)(iVar2 + 0x18));
    }
  }
  FUN_004c4e90();
  return;
}

