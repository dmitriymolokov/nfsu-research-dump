/* Decompiled from Speed.exe @ 00662340 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00662340(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_1 * param_2) / 1000;
  if (iVar3 < 3) {
    iVar3 = 3;
  }
  do {
    do {
      iVar2 = 0;
      do {
        iVar1 = iVar2;
        if (iVar1 * iVar1 - iVar3 == 0) goto LAB_0066237f;
        iVar2 = iVar1 + 1;
      } while (iVar1 * iVar1 < iVar3);
      iVar1 = iVar1 + -1;
LAB_0066237f:
      iVar1 = iVar1 + 1;
      iVar2 = 2;
    } while (iVar1 < 2);
    do {
      if (iVar3 % iVar2 == 0) {
        iVar3 = iVar3 + 1;
        break;
      }
      if (iVar2 == iVar1) {
        return iVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= iVar1);
  } while( true );
}

