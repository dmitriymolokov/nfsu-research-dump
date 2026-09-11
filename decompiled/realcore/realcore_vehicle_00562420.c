/* Decompiled from Speed.exe @ 00562420 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00562420(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 local_35;
  int local_34;
  int local_30;
  uint local_2c [3];
  undefined1 auStack_20 [32];
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    iVar7 = param_1 + 0x5c;
    *(undefined1 *)(param_1 + 0x90) = 0;
    local_30 = iVar7;
    FUN_004f9340(iVar7);
    local_34 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      puVar1 = (undefined4 *)(param_1 + 100);
      do {
        iVar5 = local_34;
        piVar4 = _malloc(0x10);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar2 = piVar4 + 2;
          *piVar2 = (int)piVar2;
          piVar4[3] = (int)piVar2;
        }
        puVar3 = *(undefined4 **)(param_1 + 0x68);
        *puVar3 = piVar4;
        *(int **)(param_1 + 0x68) = piVar4;
        piVar4[1] = (int)puVar3;
        *piVar4 = (int)puVar1;
        if (*(int *)(iVar7 + 0x14) == 0) {
          *(undefined4 *)(iVar7 + 0x14) = *puVar1;
        }
        if (*(int *)(iVar7 + 0x10) == 0) {
          *(undefined4 *)(iVar7 + 0x10) = *puVar1;
        }
        if (((DAT_0073d8d0 == 0) || (DAT_0073d8a8 == 0)) ||
           (iVar5 = FUN_00666f30(DAT_0073d8a8,iVar5), iVar5 == 0)) {
          local_35 = 0;
          FUN_004174b0(piVar4,&local_35);
          FUN_004174b0(piVar4,&local_35);
          FUN_004174b0(piVar4,&local_35);
          puVar6 = &local_35;
        }
        else {
          FUN_006682f0(iVar5 + 0x28,local_2c,0xc,&DAT_006bc79c);
          FUN_004174b0(piVar4,iVar5 + 8);
          if (*(int *)(param_1 + 0x84) == 3) {
            FUN_00565da0(&DAT_006ca778,local_2c[0]);
          }
          else {
            FUN_00565da0("%02d:%02d:%02d",local_2c[0] / 60000,(local_2c[0] % 60000) / 1000,
                         ((local_2c[0] % 60000) % 1000) / 10);
            iVar7 = local_30;
          }
          FUN_004174b0(piVar4,auStack_20);
          FUN_004c2a50();
          iVar5 = FUN_0059fb80();
          if (iVar5 == 0) {
            iVar5 = FUN_0059fb80();
          }
          FUN_004174b0(piVar4,iVar5);
          puVar6 = (undefined1 *)FUN_0059fb80();
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = (undefined1 *)FUN_0059fb80();
          }
        }
        FUN_004174b0(piVar4,puVar6);
        local_34 = local_34 + 1;
      } while (local_34 < *(int *)(param_1 + 0x78));
    }
    if (*(int *)(iVar7 + 0x18) != 0) {
      FUN_004f8dd0(*(int *)(iVar7 + 0x18));
    }
    FUN_004f9240(iVar7);
  }
  return;
}

