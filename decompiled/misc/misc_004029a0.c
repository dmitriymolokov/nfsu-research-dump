/* Decompiled from Speed.exe @ 004029a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004029a0(char param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBX;
  
  puVar2 = DAT_0078e974;
  puVar3 = (undefined4 *)FUN_0040a880();
  do {
    if (puVar2 == puVar3) {
      return;
    }
    uVar1 = puVar2[3];
    iVar4 = puVar2[5];
    if (param_1 == '\0') {
      if (((iVar4 == 0) || (*(int *)(iVar4 + 0x68) != unaff_EBX)) ||
         ((*(int *)(unaff_EBX + 0x70) != 0 &&
          (((iVar4 = *(int *)(*(int *)(unaff_EBX + 0x70) + 0x74), iVar4 != 0 &&
            (iVar4 = FUN_0053e400(uVar1,iVar4,0), iVar4 != 0)) && (*(int *)(iVar4 + 4) != 0))))))
      goto LAB_00402a4a;
      iVar4 = FUN_005461c0(uVar1,0,0);
    }
    else if (((iVar4 == 0) && (*(int *)(unaff_EBX + 0x70) != 0)) &&
            ((iVar4 = *(int *)(*(int *)(unaff_EBX + 0x70) + 0x74), iVar4 != 0 &&
             ((iVar4 = FUN_0053e400(uVar1,iVar4,0), iVar4 != 0 &&
              (iVar4 = *(int *)(iVar4 + 4), iVar4 != 0)))))) {
      *(undefined1 *)(iVar4 + 0x53) = 1;
    }
    else {
LAB_00402a4a:
      iVar4 = puVar2[5];
    }
    puVar2[5] = iVar4;
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

