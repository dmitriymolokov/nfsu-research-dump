/* Decompiled from Speed.exe @ 0063d4d0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int FUN_0063d4d0(uint param_1,LPVOID param_2,uint param_3)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  uint nNumberOfBytesToRead;
  LPVOID lpBuffer;
  int iVar6;
  int iVar7;
  int local_4;
  
  local_4 = 0;
  if ((((DAT_0070f48c == 0) || (-1 < (int)param_1)) || (DAT_0070f488 <= (int)~param_1)) ||
     (iVar6 = ~param_1 * 0x24, *(char *)(iVar6 + DAT_0070f48c) == '\0')) {
    SetLastError(6);
    return 0;
  }
  SetLastError(0);
  iVar4 = DAT_0070f48c;
  iVar1 = *(int *)(iVar6 + 0x1c + DAT_0070f48c);
  if (iVar1 < *(int *)(iVar6 + 0x18 + DAT_0070f48c)) {
    *(int *)(iVar6 + 0x18 + DAT_0070f48c) = iVar1;
  }
  if (*(int *)(iVar6 + 0x20 + iVar4) != 0) {
    iVar1 = *(int *)(iVar6 + 0x18 + iVar4);
    iVar7 = *(int *)(iVar6 + 0x1c + iVar4);
    if (iVar7 < (int)(iVar1 + param_3)) {
      param_3 = iVar7 - iVar1;
    }
  }
  nNumberOfBytesToRead = *(uint *)(iVar6 + 0xc + iVar4);
  *(undefined1 *)(iVar6 + 2 + iVar4) = 1;
  lpBuffer = param_2;
  uVar5 = param_3;
  if (param_3 != 0) {
    while (*(char *)(iVar6 + 2 + iVar4) != '\0') {
      if (uVar5 < nNumberOfBytesToRead) {
        nNumberOfBytesToRead = uVar5;
      }
      iVar1 = *(int *)(iVar6 + 0x14 + iVar4);
      if (iVar1 == 0) {
        BVar2 = ReadFile(*(HANDLE *)(iVar6 + 4 + iVar4),lpBuffer,nNumberOfBytesToRead,&param_1,
                         (LPOVERLAPPED)0x0);
        if (BVar2 != 0) goto LAB_0063d5c0;
        DVar3 = GetLastError();
        if (DVar3 != 0x3e5) {
          local_4 = 0;
          iVar4 = DAT_0070f48c;
          break;
        }
        FUN_0063e5c0(1);
        iVar4 = DAT_0070f48c;
      }
      else {
        FUN_0063f1b0(lpBuffer,*(int *)(iVar6 + 0x18 + iVar4) + iVar1,nNumberOfBytesToRead);
        param_1 = nNumberOfBytesToRead;
        FUN_0063e5c0(0);
LAB_0063d5c0:
        iVar4 = DAT_0070f48c;
        iVar7 = *(int *)(iVar6 + 0x18 + DAT_0070f48c) + param_1;
        *(int *)(iVar6 + 0x18 + DAT_0070f48c) = iVar7;
        local_4 = local_4 + param_1;
        iVar1 = *(int *)(iVar6 + 0x1c + iVar4);
        lpBuffer = (LPVOID)((int)lpBuffer + param_1);
        if (iVar1 < iVar7) {
          *(int *)(iVar6 + 0x18 + iVar4) = iVar1;
        }
        if (param_1 < nNumberOfBytesToRead) break;
        uVar5 = param_3 - param_1;
        param_3 = uVar5;
      }
      if (uVar5 == 0) {
        *(undefined1 *)(iVar6 + 2 + iVar4) = 0;
        return local_4;
      }
    }
  }
  *(undefined1 *)(iVar6 + 2 + iVar4) = 0;
  return local_4;
}

