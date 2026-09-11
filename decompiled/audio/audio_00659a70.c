/* Decompiled from Speed.exe @ 00659a70 */
/* Module: Audio */
/* Ghidra DecompileAll */


ushort FUN_00659a70(int *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  
  if ((int)(uint)DAT_00713dbc <= *param_1) {
    return 0;
  }
  do {
    uVar1 = *(ushort *)(&DAT_00713dbe + *param_1 * 2);
    uVar2 = *(ushort *)(param_2 + 0x18);
    uVar3 = uVar1 & 0x71c;
    if ((((uVar2 & 0x71c) == 0) || (uVar3 = uVar2 & uVar3, uVar3 != 0)) &&
       ((uVar5 = uVar1 & 0xe0, (uVar2 & 0xe0) == 0 || (uVar5 = uVar2 & uVar5, uVar5 != 0)))) {
      uVar3 = uVar3 | uVar5;
      if ((uVar1 & 0x10) != 0) {
        if ((uVar2 & 3) == 0) {
          uVar3 = uVar3 | uVar1 & 3;
        }
        else {
          uVar2 = uVar2 & uVar1 & 3;
          uVar3 = uVar3 | uVar2;
          if (uVar2 == 0) goto LAB_00659b17;
        }
      }
      if (((*(char *)(param_2 + 3) == '\x01') || (-1 < (char)uVar3)) && (uVar3 != 0)) {
        *param_1 = *param_1 + 1;
        return uVar3;
      }
    }
LAB_00659b17:
    iVar4 = *param_1 + 1;
    *param_1 = iVar4;
    if ((int)(uint)DAT_00713dbc <= iVar4) {
      return 0;
    }
  } while( true );
}

