/* Decompiled from Speed.exe @ 005a1100 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005a1100(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  uint *puVar5;
  char *pcVar6;
  int extraout_EDX;
  int *piVar7;
  uint uVar8;
  
  piVar7 = &DAT_00733ffc;
  uVar8 = 2;
  do {
    if (((uVar8 - 2 < 0x100) && (piVar7[-1] != 0)) ||
       ((*(int *)(param_2 + 0x88b0) != 0 &&
        ((piVar4 = (int *)(*(int *)(param_2 + 0x88b0) + 0x58a0), piVar4 != (int *)0x0 &&
         (uVar8 - 2 == *piVar4)))))) {
      if (((uVar8 - 2 < 0x100) && (piVar7[-1] != 0)) ||
         (((*(int *)(param_2 + 0x88b0) != 0 &&
           (piVar4 = (int *)(*(int *)(param_2 + 0x88b0) + 0x58a0), piVar4 != (int *)0x0)) &&
          (uVar8 - 2 == *piVar4)))) {
        pcVar6 = (char *)(uVar8 + 0x34a + param_2);
      }
      else {
        pcVar6 = (char *)0x0;
      }
      if (*pcVar6 == '\x01') {
        *pcVar6 = '\0';
      }
    }
    if (((uVar8 - 1 < 0x100) && (*piVar7 != 0)) ||
       ((*(int *)(param_2 + 0x88b0) != 0 &&
        ((piVar4 = (int *)(*(int *)(param_2 + 0x88b0) + 0x58a0), piVar4 != (int *)0x0 &&
         (uVar8 - 1 == *piVar4)))))) {
      if (((uVar8 - 1 < 0x100) && (*piVar7 != 0)) ||
         (((*(int *)(param_2 + 0x88b0) != 0 &&
           (piVar4 = (int *)(*(int *)(param_2 + 0x88b0) + 0x58a0), piVar4 != (int *)0x0)) &&
          (uVar8 - 1 == *piVar4)))) {
        pcVar6 = (char *)(uVar8 + 0x34b + param_2);
      }
      else {
        pcVar6 = (char *)0x0;
      }
      if (*pcVar6 == '\x01') {
        *pcVar6 = '\0';
      }
    }
    if (((uVar8 < 0x100) && (piVar7[1] != 0)) ||
       ((*(int *)(param_2 + 0x88b0) != 0 &&
        ((puVar5 = (uint *)(*(int *)(param_2 + 0x88b0) + 0x58a0), puVar5 != (uint *)0x0 &&
         (uVar8 == *puVar5)))))) {
      if (((uVar8 < 0x100) && (piVar7[1] != 0)) ||
         (((*(int *)(param_2 + 0x88b0) != 0 &&
           (puVar5 = (uint *)(*(int *)(param_2 + 0x88b0) + 0x58a0), puVar5 != (uint *)0x0)) &&
          (uVar8 == *puVar5)))) {
        pcVar6 = (char *)(uVar8 + 0x34c + param_2);
      }
      else {
        pcVar6 = (char *)0x0;
      }
      if (*pcVar6 == '\x01') {
        *pcVar6 = '\0';
      }
    }
    uVar1 = uVar8 + 1;
    if (((uVar1 < 0x100) && (piVar7[2] != 0)) ||
       ((*(int *)(param_2 + 0x88b0) != 0 &&
        ((puVar5 = (uint *)(*(int *)(param_2 + 0x88b0) + 0x58a0), puVar5 != (uint *)0x0 &&
         (uVar1 == *puVar5)))))) {
      if (((uVar1 < 0x100) && (piVar7[2] != 0)) ||
         (((*(int *)(param_2 + 0x88b0) != 0 &&
           (puVar5 = (uint *)(*(int *)(param_2 + 0x88b0) + 0x58a0), puVar5 != (uint *)0x0)) &&
          (uVar1 == *puVar5)))) {
        pcVar6 = (char *)(uVar8 + 0x34d + param_2);
      }
      else {
        pcVar6 = (char *)0x0;
      }
      if (*pcVar6 == '\x01') {
        *pcVar6 = '\0';
      }
    }
    uVar1 = uVar8 + 2;
    piVar7 = piVar7 + 4;
    uVar8 = uVar8 + 4;
  } while (uVar1 < 0x100);
  uVar8 = 0;
  do {
    puVar5 = (uint *)(&DAT_00733ff8)[uVar8];
    if (((puVar5 != (uint *)0x0) ||
        (((*(int *)(param_2 + 0x88b0) != 0 &&
          (puVar5 = (uint *)(*(int *)(param_2 + 0x88b0) + 0x58a0), puVar5 != (uint *)0x0)) &&
         (uVar8 == *puVar5)))) &&
       ((cVar3 = FUN_005a0fc0(), param_2 = extraout_EDX, cVar3 != '\0' &&
        ((((uVar1 = *puVar5, uVar1 < 0x100 && ((&DAT_00733ff8)[uVar1] != 0)) ||
          ((*(int *)(extraout_EDX + 0x88b0) != 0 &&
           ((puVar5 = (uint *)(*(int *)(extraout_EDX + 0x88b0) + 0x58a0), puVar5 != (uint *)0x0 &&
            (uVar1 == *puVar5)))))) &&
         (puVar2 = (undefined1 *)(uVar1 + 0x34c + extraout_EDX), puVar2 != (undefined1 *)0x0)))))) {
      *puVar2 = 1;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x100);
  return;
}

