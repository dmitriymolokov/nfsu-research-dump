/* Decompiled from Speed.exe @ 006804ed */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __lseeki64_lk
   
   Library: Visual Studio 2003 Release */

undefined8 __lseeki64_lk(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG local_8;
  
  local_8 = param_3;
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar2 = (undefined4 *)FUN_00677f42();
    *puVar2 = 9;
LAB_00680547:
    DVar4 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar4 = SetFilePointer(hFile,param_2,&local_8,param_4);
    if (DVar4 == 0xffffffff) {
      DVar3 = GetLastError();
      if (DVar3 != 0) {
        __dosmaperr(DVar3);
        goto LAB_00680547;
      }
    }
    pbVar1 = (byte *)((&DAT_00793240)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar4);
}

