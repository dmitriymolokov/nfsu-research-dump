/* Decompiled from Speed.exe @ 0042c340 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042c340(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    if (*(undefined4 **)(unaff_ESI + 0x288) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_ESI + 0x288))(1);
      *(undefined4 *)(unaff_ESI + 0x288) = 0;
    }
    puVar1 = (undefined4 *)(&DAT_007404a4)[*(int *)(unaff_ESI + 0x1c) * 0x18];
    if ((((puVar1 != &DAT_007404a4 + *(int *)(unaff_ESI + 0x1c) * 0x18) &&
         (puVar1 != (undefined4 *)0x0)) && (puVar1 != (undefined4 *)0x4)) &&
       (((puVar1 != &DAT_007404a4 + *(int *)(unaff_ESI + 0x1c) * 0x18 &&
         (puVar1 != (undefined4 *)0x0)) && (puVar1 + -1 != (undefined4 *)0x0)))) {
      (**(code **)puVar1[-1])(1);
    }
    if (param_1 != 0) {
      pvVar2 = _malloc(0x30);
      if (pvVar2 != (void *)0x0) {
        uVar3 = FUN_004852a0();
        *(undefined4 *)(unaff_ESI + 0x288) = uVar3;
        return;
      }
      *(undefined4 *)(unaff_ESI + 0x288) = 0;
    }
  }
  return;
}

