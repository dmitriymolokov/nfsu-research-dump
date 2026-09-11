/* Decompiled from Speed.exe @ 00511bf0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00511bf0(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  puVar5 = DAT_0073ad40;
  puVar3 = (undefined4 *)FUN_0040a880();
  for (; puVar5 != puVar3; puVar5 = (undefined4 *)*puVar5) {
    uVar7 = puVar5[3];
    uVar6 = puVar5[4] * 0x30 + uVar7;
    for (; uVar7 < uVar6; uVar7 = uVar7 + 0x30) {
      if (*(char *)(uVar7 + 0x10) == ':') goto LAB_00511c37;
    }
  }
  uVar7 = 0;
LAB_00511c37:
  if (uVar7 != 0) {
    iVar4 = FUN_0040cb70();
    do {
      if (*param_1 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *param_1 + -4;
      }
      if (iVar8 != iVar4) {
        do {
          if (*(int *)(iVar8 + 0x10) == *(int *)(uVar7 + 0xc)) {
            if (*(int *)(iVar8 + 0x18) == 0) {
              cVar2 = FUN_00511b00();
              if ((cVar2 == '\0') && (cVar2 = FUN_00511b70(), cVar2 != '\0')) {
                *(uint *)(iVar8 + 0x18) = uVar7;
              }
            }
            else if ((*(int *)(iVar8 + 0x14) == 0) && (cVar2 = FUN_00511b00(), cVar2 != '\0')) {
              *(uint *)(iVar8 + 0x14) = uVar7;
            }
            goto LAB_00511d14;
          }
          if (*(int *)(iVar8 + 4) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(iVar8 + 4) + -4;
          }
        } while (iVar8 != iVar4);
      }
      puVar5 = _malloc(0x1c);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = &PTR_FUN_006c0274;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[4] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      puVar5[4] = *(undefined4 *)(uVar7 + 0xc);
      cVar2 = FUN_00511b00();
      if (cVar2 == '\0') {
        cVar2 = FUN_00511b70();
        if (cVar2 != '\0') {
          puVar5[6] = uVar7;
        }
      }
      else {
        puVar5[5] = uVar7;
      }
      piVar1 = (int *)param_1[1];
      puVar3 = puVar5 + 1;
      *piVar1 = (int)puVar3;
      param_1[1] = (int)puVar3;
      puVar5[2] = piVar1;
      *puVar3 = param_1;
LAB_00511d14:
      uVar7 = FUN_0057ce10(0,0x3a,0,uVar7,0xffffffff);
    } while (uVar7 != 0);
  }
  return;
}

