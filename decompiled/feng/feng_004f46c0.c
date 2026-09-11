/* Decompiled from Speed.exe @ 004f46c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f46c0(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar2 = DAT_007460fc;
  puVar3 = (undefined4 *)FUN_0040a880();
  do {
    if (puVar2 == puVar3) {
      return;
    }
    uVar1 = puVar2[6];
    iVar4 = puVar2[2];
    if (param_2 == '\0') {
      if (((iVar4 == 0) || (*(int *)(iVar4 + 0x68) != param_1)) ||
         ((*(int *)(param_1 + 0x70) != 0 &&
          (((iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 0x74), iVar4 != 0 &&
            (iVar4 = FUN_0053e400(uVar1,iVar4,0), iVar4 != 0)) && (*(int *)(iVar4 + 4) != 0))))))
      goto LAB_004f476f;
      iVar4 = FUN_005461c0(uVar1,0,0);
    }
    else if (((iVar4 == 0) && (*(int *)(param_1 + 0x70) != 0)) &&
            ((iVar4 = *(int *)(*(int *)(param_1 + 0x70) + 0x74), iVar4 != 0 &&
             ((iVar4 = FUN_0053e400(uVar1,iVar4,0), iVar4 != 0 &&
              (iVar4 = *(int *)(iVar4 + 4), iVar4 != 0)))))) {
      *(undefined1 *)(iVar4 + 0x53) = 1;
    }
    else {
LAB_004f476f:
      iVar4 = puVar2[2];
    }
    if (iVar4 != puVar2[2]) {
      puVar2[2] = iVar4;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

