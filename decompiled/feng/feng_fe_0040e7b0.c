/* Decompiled from Speed.exe @ 0040e7b0 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


void FUN_0040e7b0(void)

{
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  piStack_6c = *(int **)(DAT_0073640c + 0x18);
  uStack_68 = *(undefined4 *)(DAT_0073640c + 0x84);
  uStack_64 = DAT_0071aa28;
  uStack_70 = 0x40e7da;
  (**(code **)(*piStack_6c + 0xd0))();
  uStack_74 = *(undefined4 *)(DAT_0073640c + 0x8c);
  uStack_70 = DAT_006b7c68;
  (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x78))(*(int **)(DAT_0073640c + 0x18));
  if (*(int *)(DAT_0073640c + 0xc) != 0) {
    uStack_64 = 0;
    uStack_68 = 0x3f000000;
    if (&DAT_00740460 + *(int *)(DAT_00736458 + 4) * 0x18 != (int *)0x0) {
      thunk_FUN_005ac68f(&uStack_68,(&DAT_00740460)[*(int *)(DAT_00736458 + 4) * 0x18] + 0x40,
                         &uStack_68);
      piStack_6c = (int *)uStack_68;
      (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x98))
                (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0x88),&uStack_74);
    }
  }
  return;
}

