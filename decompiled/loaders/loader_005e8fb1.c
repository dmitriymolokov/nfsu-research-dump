/* Decompiled from Speed.exe @ 005e8fb1 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005e8fb1(undefined4 param_1)

{
  HMODULE pHVar1;
  int iVar2;
  
  if ((DAT_00709480 == (FARPROC)0x0) && (DAT_0070947c == (FARPROC)0x0)) {
    pHVar1 = GetModuleHandleA("d3d9.dll");
    if ((pHVar1 != (HMODULE)0x0) && (pHVar1 = LoadLibraryA("d3d9.dll"), pHVar1 != (HMODULE)0x0)) {
      DAT_00709480 = GetProcAddress(pHVar1,"DebugSetMute");
    }
    pHVar1 = GetModuleHandleA("d3d9d.dll");
    if ((pHVar1 != (HMODULE)0x0) && (pHVar1 = LoadLibraryA("d3d9d.dll"), pHVar1 != (HMODULE)0x0)) {
      DAT_0070947c = GetProcAddress(pHVar1,"DebugSetMute");
    }
  }
  if (DAT_006def54 == -1) {
    iVar2 = FUN_005b0484(4,"D3DXDoNotMute",&DAT_006def54,4);
    if (iVar2 == 0) {
      DAT_006def54 = 0;
    }
    if (DAT_006def54 == 0) goto LAB_005e905e;
    DAT_006def54 = 1;
  }
  if (DAT_006def54 != 0) {
    return;
  }
LAB_005e905e:
  if (DAT_00709480 != (FARPROC)0x0) {
    (*DAT_00709480)(param_1);
  }
  if (DAT_0070947c != (FARPROC)0x0) {
    (*DAT_0070947c)(param_1);
  }
  return;
}

