/* Decompiled from Speed.exe @ 00555560 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00555560(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if ((*(int *)(param_1 + 0x40 + local_8 * 4) != 0) &&
       (cVar2 = FUN_004f7eb0(param_1), cVar2 != '\0')) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x40 + local_8 * 4) + 0x10);
      if (uVar1 < 0xda9a39d5) {
        if (uVar1 == 0xda9a39d4) {
          FUN_004134c0();
          uVar3 = FUN_004f6670();
          FUN_004f6540(0xb5971bf1,uVar3);
        }
        else if (uVar1 == 0xda96ef8e) {
          FUN_004134c0();
          uVar3 = FUN_004f6670();
          FUN_004f6540(0x9120409e,uVar3);
        }
        else if (uVar1 == 0xda96ef8f) {
          FUN_004134c0();
          uVar3 = FUN_004f6670();
          FUN_004f6540(0x9120409e,uVar3);
        }
      }
      else if (uVar1 == 0xda9a39d5) {
        FUN_004134c0();
        uVar3 = FUN_004f6670();
        FUN_004f6540(0xb5971bf1,uVar3);
      }
    }
  }
  return;
}

