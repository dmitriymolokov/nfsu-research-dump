/* Decompiled from Speed.exe @ 0061fe20 */
/* S45 QUARANTINE: Windows/D3D — out of WASM scope (see QUARANTINE.md) */
/* Module: EAGL */
/* Ghidra DecompileModule */


HWND FUN_0061fe20(void)

{
  HWND pHVar1;
  HINSTANCE in_stack_00000018;
  HMENU hMenu;
  LPVOID lpParam;
  tagRECT local_10;
  
  SetRect(&local_10,0,0,100,100);
  lpParam = (LPVOID)0x0;
  hMenu = (HMENU)0x0;
  pHVar1 = GetDesktopWindow();
  pHVar1 = CreateWindowExA(0,"EAGL PC Caps Retrieval","EAGL PC Caps Retrieval",0,-0x80000000,
                           -0x80000000,local_10.right - local_10.left,local_10.bottom - local_10.top
                           ,pHVar1,hMenu,in_stack_00000018,lpParam);
  if (pHVar1 == (HWND)0x0) {
    return (HWND)0x0;
  }
  UpdateWindow(pHVar1);
  return pHVar1;
}

