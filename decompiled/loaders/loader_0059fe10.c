/* Decompiled from Speed.exe @ 0059fe10 */
/* Module: Loader */
/* Ghidra DecompileAll */


bool FUN_0059fe10(int param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_EDI;
  
  iVar6 = 0;
  iVar5 = 0;
  bVar3 = false;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    do {
      iVar7 = iVar5 + 1;
      iVar5 = iVar5 + 1;
    } while (param_2[iVar7] != '\0');
    if (0 < iVar5) {
      iVar7 = 0;
      bVar3 = false;
      do {
        if (param_1 + -1 <= iVar6) break;
        bVar2 = param_2[iVar7];
        iVar8 = iVar7 + 1;
        if ((char)bVar2 < '\0') {
          if ((bVar2 & 0xe0) == 0xc0) {
            pbVar1 = (byte *)(param_2 + iVar8);
            iVar8 = iVar7 + 2;
            if ((*pbVar1 & 0xc0) == 0x80) {
              uVar4 = (ushort)(bVar2 & 0x1f) * 0x40 + (ushort)(*pbVar1 & 0x3f);
            }
            else {
LAB_0059fe81:
              iVar8 = iVar7 + 1;
              uVar4 = (ushort)bVar2;
              bVar3 = true;
            }
            *(ushort *)(unaff_EDI + iVar6 * 2) = uVar4;
          }
          else {
            if ((bVar2 & 0xf0) != 0xe0) goto LAB_0059fe81;
            pbVar1 = (byte *)(param_2 + iVar8);
            iVar8 = iVar7 + 3;
            if (((*pbVar1 & 0xc0) == 0x80) && ((param_2[iVar7 + 2] & 0xc0U) == 0x80)) {
              uVar4 = ((ushort)(*pbVar1 & 0x3f) + (ushort)bVar2 * 0x40) * 0x40 +
                      (ushort)(param_2[iVar7 + 2] & 0x3f);
              if (0xff7f < uVar4) {
                uVar4 = uVar4 & 0xff;
              }
              *(ushort *)(unaff_EDI + iVar6 * 2) = uVar4;
            }
            else {
              bVar3 = true;
              iVar8 = iVar7 + 1;
              *(ushort *)(unaff_EDI + iVar6 * 2) = (ushort)bVar2;
            }
          }
        }
        else {
          *(ushort *)(unaff_EDI + iVar6 * 2) = (ushort)bVar2;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar8;
      } while (iVar8 < iVar5);
    }
  }
  *(undefined2 *)(unaff_EDI + iVar6 * 2) = 0;
  return !bVar3;
}

