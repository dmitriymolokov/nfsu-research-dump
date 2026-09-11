/* Decompiled from Speed.exe @ 00622f00 */
/* Module: EAGL */
/* Ghidra DecompileModule */


void __fastcall FUN_00622f00(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_4;
  
  iVar4 = 0;
  uStack_4 = param_1;
  if (0 < DAT_006e2a8c) {
    do {
      piVar1 = *(int **)(DAT_0070a488 + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_006e2a8c);
  }
  iVar4 = 0;
  if (0 < DAT_006e2a90) {
    do {
      puVar2 = *(undefined4 **)(DAT_0070a48c + iVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        cVar3 = FUN_00620230();
        if (cVar3 == '\0') {
          FUN_00620240();
        }
        (**(code **)(*DAT_00709d80 + 0x60))(DAT_00709d80,puVar2[2],puVar2[3],0x65,0,puVar2);
        if (puVar2[4] != 0) {
          uVar5 = puVar2[2];
          (**(code **)(*(int *)*puVar2 + 0x2c))((int *)*puVar2,0,uVar5,&uStack_4,0);
          FUN_0063f1b0(uVar5,puVar2[4],puVar2[2]);
          (**(code **)(*(int *)*puVar2 + 0x30))((int *)*puVar2);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_006e2a90);
  }
  return;
}

