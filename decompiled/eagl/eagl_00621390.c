/* Decompiled from Speed.exe @ 00621390 */
/* Module: EAGL */
/* Ghidra DecompileAll */


uint * FUN_00621390(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)0x0;
  if (((param_2 != (uint *)0x0) && (-1 < param_1)) && (iVar3 = 0, puVar1 = param_2, param_1 != 0)) {
    do {
      uVar2 = *param_2 >> 0x10;
      if (((((uVar2 == 0x11) || (uVar2 == 0x10)) ||
           ((uVar2 == 0x41 || ((uVar2 == 0x40 || (uVar2 == 0x30)))))) || (uVar2 == 0x2f)) ||
         ((uVar2 == 0x43 || (uVar2 == 0x42)))) {
        param_2 = param_2 + (*param_2 & 0xffff);
        iVar3 = iVar3 + 1;
      }
      uVar2 = *param_2;
      if (uVar2 == 0) {
        param_2 = param_2 + 1;
      }
      puVar1 = param_2 + (uVar2 & 0xffff);
      param_2 = puVar1;
    } while (iVar3 != param_1);
  }
  return puVar1;
}

