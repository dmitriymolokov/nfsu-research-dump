/* Decompiled from Speed.exe @ 004ee910 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ee910(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  do {
    while( true ) {
      puVar3 = *(undefined4 **)(param_1 + 0xe4);
      if (puVar3 == (undefined4 *)0x0) {
        FUN_004ee5e0();
        FUN_004ee5e0();
        FUN_004ee5e0();
        _free(*(void **)(param_1 + 8));
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined1 *)(param_1 + 0x5250) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x4148) = 0;
        puVar3 = (undefined4 *)(param_1 + 0x414c);
        for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        *(undefined4 *)(param_1 + 0x514c) = 0;
        puVar3 = (undefined4 *)(param_1 + 0x5150);
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        FUN_004ee5e0();
        return;
      }
      puVar1 = puVar3;
      if (puVar3 != (undefined4 *)0x0) break;
LAB_004ee989:
      (**(code **)*puVar3)(1);
    }
    do {
      if (puVar1 == puVar3) {
        *(undefined4 *)(param_1 + 0xe4) = puVar3[1];
        if (puVar3 == *(undefined4 **)(param_1 + 0xe8)) {
          *(undefined4 *)(param_1 + 0xe8) = puVar3[2];
        }
        if (puVar3[2] != 0) {
          *(undefined4 *)(puVar3[2] + 4) = puVar3[1];
        }
        if (puVar3[1] != 0) {
          *(undefined4 *)(puVar3[1] + 8) = puVar3[2];
        }
        puVar3[1] = 0xabadcafe;
        puVar3[2] = 0xabadcafe;
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
        goto LAB_004ee989;
      }
      puVar1 = (undefined4 *)puVar1[1];
    } while (puVar1 != (undefined4 *)0x0);
    (**(code **)*puVar3)(1);
  } while( true );
}

