/* Decompiled from Speed.exe @ 0040e900 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


void FUN_0040e900(void)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  pcVar7 = "HEADLIGHTS";
  piStack_6c = (int *)0xffffffff;
  uVar6 = 0x48;
  do {
    piStack_6c = (int *)((int)piStack_6c * 0x21 + uVar6);
    pbVar1 = (byte *)(pcVar7 + 1);
    uVar6 = (uint)*pbVar1;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar1 != 0);
  uStack_64 = 0;
  uStack_68 = 1;
  uStack_70 = 0x40e92e;
  piVar3 = (int *)FUN_005461c0();
  piStack_6c = *(int **)(DAT_0073640c + 0x18);
  uStack_64 = *(undefined4 *)(*piVar3 + 0x18);
  uStack_68 = *(undefined4 *)(DAT_0073640c + 0x44);
  uStack_70 = 0x40e94d;
  (**(code **)(*piStack_6c + 0xd0))();
  piStack_78 = *(int **)(DAT_0073640c + 0x18);
  uStack_74 = *(undefined4 *)(DAT_0073640c + 0x7c);
  uStack_70 = DAT_0071abb4;
  uStack_7c = 0x40e96a;
  (**(code **)(*piStack_78 + 0xd0))();
  uStack_80 = *(undefined4 *)(DAT_0073640c + 0x84);
  uStack_7c = DAT_0071aa28;
  (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0xd0))(*(int **)(DAT_0073640c + 0x18));
  iVar2 = DAT_0073640c;
  if (*(int *)(DAT_0073640c + 0xc) == 0) {
    pcVar7 = "HEADLIGHTS";
    iVar4 = -1;
    uVar6 = 0x48;
    do {
      iVar4 = iVar4 * 0x21 + uVar6;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar6 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    piVar5 = (int *)FUN_005461c0(iVar4,1,0);
    piVar3 = *(int **)(iVar2 + 0x18);
    (**(code **)(*piVar3 + 0xd0))
              (piVar3,*(undefined4 *)(iVar2 + 0x44),*(undefined4 *)(*piVar5 + 0x18));
    (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0xd0))
              (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0x7c),DAT_0071abb4);
    (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0xd0))
              (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0x84),DAT_0071aa28);
    (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x78))
              (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0x8c),DAT_006b7c68);
  }
  else {
    uStack_70 = 0;
    piStack_6c = (int *)0x0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_74 = 0x3f000000;
    if (&DAT_00740460 + *(int *)(DAT_00736458 + 4) * 0x18 != (int *)0x0) {
      thunk_FUN_005ac68f(&uStack_74,(&DAT_00740460)[*(int *)(DAT_00736458 + 4) * 0x18] + 0x40,
                         &uStack_74);
      piStack_78 = (int *)uStack_74;
      uStack_68 = uStack_64;
      (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x98))
                (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0x88),&uStack_80);
      return;
    }
  }
  return;
}

