/* spd-match: far pct=6.79 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0052ff90 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void  FUN_0052ff90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  FUN_0052fb60(param_1);
  puVar1 = (undefined4 *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(*(int *)(param_1 + 0x24) + -0x210);
  }
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(param_1 + -0x1ec);
    }
    if (piVar5 == piVar6) break;
    (**(code **)(*piVar5 + 0x5c))(param_2);
    if (((*(char *)((int)piVar5 + 0x34e) == '\0') && ((char)piVar5[0xd4] == '\0')) &&
       (*(char *)((int)piVar5 + 0x351) != '\0')) {
      if (piVar5[0x84] == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(piVar5[0x84] + -0x210);
      }
      piVar2 = (int *)piVar5[0x85];
      iVar3 = piVar5[0x84];
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      DAT_00735618 = DAT_00735618 + -1;
      (**(code **)*piVar5)(1);
      piVar5 = piVar6;
    }
    else if (piVar5[0x84] == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(piVar5[0x84] + -0x210);
    }
  }
  if ((int)DAT_00735628 < (int)DAT_00735620) {
    DAT_00735628 = (int)DAT_00735620;
  }
  if ((int)DAT_0073562c < (int)DAT_00735624) {
    DAT_0073562c = (int)DAT_00735624;
  }
  if ((int)DAT_00735624 + (int)DAT_00735620 == 0) {
    for (puVar4 = (undefined4 *)*puVar1; (puVar4 != puVar1 && (puVar4 != (undefined4 *)0x0));
        puVar4 = (undefined4 *)*puVar4) {
    }
  }
  return;
}

