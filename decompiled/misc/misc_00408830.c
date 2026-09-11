/* spd-match: far pct=11.38 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_no_code */
#include "ghidra_compat.h"

typedef void *WNDPROC;
typedef void *LPTHREAD_START_ROUTINE;

int __cdecl FUN_00401e50();
int __cdecl FUN_00408220();
int __cdecl FUN_004086b0();
int __cdecl FUN_0040a890();
int __cdecl FUN_0040aa20();
int __cdecl FUN_0040b340();
int __cdecl FUN_0040cb80();
int __cdecl FUN_0040e180();
int __cdecl FUN_0040f2e0();
int __cdecl FUN_00410780();
int __cdecl FUN_00410c50();
int __cdecl FUN_00410e50();
int __cdecl FUN_00413000();
int __cdecl FUN_00413050();
int __cdecl FUN_00566dc0();
extern int DAT_00701034;
extern int DAT_00701038;
extern int DAT_00702a80;
extern int DAT_00718738;
extern int DAT_0071a96c;
extern int DAT_0071b208;
extern int DAT_0071b7a0;
extern unsigned char *DAT_00736368;
extern int DAT_0073636c;
extern int DAT_00736380;
extern int DAT_00736384;
extern int DAT_00736398;
extern int DAT_0073645c;
extern int DAT_0073d814;
extern int DAT_0073d818;
extern unsigned char *DAT_0073d81c;
extern unsigned char *_DAT_007364e0;
extern unsigned char *_DAT_007364e4;
extern void LAB_004110d0(void);
extern char stack0xffffffac;

undefined4 FUN_00408830(void)

{
  int nHeight;
  undefined4 *puVar1;
  HWND hWndParent;
  int iVar2;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  undefined1 auStack_44 [16];
  WNDCLASSEXA WStack_34;
  
  DAT_00736368 = (int *)Direct3DCreate9(0x1f);
  FUN_00410c50();
  __controlfp(3,0x8001f);
  _DAT_007364e0 = (undefined4 *)FUN_00566dc0(4,"g_textureHeaderPool",0);
  if (_DAT_007364e0 == (undefined4 *)0x0) {
    _DAT_007364e0 = (undefined4 *)0x0;
  }
  else if (DAT_0073d814 == 1) {
    *DAT_0073d81c = _DAT_007364e0;
    puVar1 = _DAT_007364e0;
    _DAT_007364e0[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *_DAT_007364e0 = &DAT_0073d818;
  }
  _DAT_007364e0[5] = _DAT_007364e0[5] & 0xfffffffd;
  _DAT_007364e4 = (undefined4 *)FUN_00566dc0(4,"g_vertexBufferHeaderPool",0);
  if (_DAT_007364e4 == (undefined4 *)0x0) {
    _DAT_007364e4 = (undefined4 *)0x0;
  }
  else if (DAT_0073d814 == 1) {
    *DAT_0073d81c = _DAT_007364e4;
    puVar1 = _DAT_007364e4;
    _DAT_007364e4[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *_DAT_007364e4 = &DAT_0073d818;
  }
  _DAT_007364e4[5] = _DAT_007364e4[5] & 0xfffffffd;
  WStack_34.cbSize = 0x30;
  WStack_34.style = 0x40;
  WStack_34.lpfnWndProc = (WNDPROC)&LAB_004110d0;
  WStack_34.cbClsExtra = 0;
  WStack_34.cbWndExtra = 0;
  WStack_34.hInstance = GetModuleHandleA((LPCSTR)0x0);
  WStack_34.hIcon = (HICON)0x0;
  WStack_34.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  WStack_34.hbrBackground = (HBRUSH)0x0;
  WStack_34.lpszMenuName = (LPCSTR)0x0;
  WStack_34.lpszClassName = "GameFrame";
  WStack_34.hIconSm = (HICON)0x0;
  RegisterClassExA(&WStack_34);
  nHeight = DAT_00701038;
  iVar2 = DAT_00701034;
  AdjustWindowRect((LPRECT)&stack0xffffffac,0x90080000,0);
  lpParam = (LPVOID)0x0;
  hMenu = (HMENU)0x0;
  hInstance = WStack_34.hInstance;
  hWndParent = GetDesktopWindow();
  DAT_00736380 = CreateWindowExA(0,"GameFrame","NFS Underground",0x90080000,100,100,iVar2,nHeight,
                                 hWndParent,hMenu,hInstance,lpParam);
  UpdateWindow(DAT_00736380);
  SetCursor((HCURSOR)0x0);
  ShowCursor(0);
  SetFocus(DAT_00736380);
  SetForegroundWindow(DAT_00736380);
  GetWindowRect(DAT_00736380,(LPRECT)&DAT_0071b7a0);
  GetClientRect(DAT_00736380,(LPRECT)&DAT_0071b208);
  (**(code **)(*DAT_00736368 + 0x20))(DAT_00736368,DAT_00736398,auStack_44);
  DAT_00702a80 = 0x15;
  FUN_004086b0(800);
  iVar2 = (**(code **)(*DAT_00736368 + 0x40))
                    (DAT_00736368,DAT_00736398,1,DAT_00736380,0x40,&DAT_0071a96c,&DAT_0073636c);
  if (iVar2 != 0) {
    (**(code **)(*DAT_00736368 + 0x40))
              (DAT_00736368,DAT_00736398,1,DAT_00736380,0x20,&DAT_0071a96c,&DAT_0073636c);
  }
  ShowWindow(DAT_00736380,1);
  SetWindowLongA(DAT_00736380,-0x10,0x10c00000);
  FUN_00408220();
  FUN_0040e180();
  FUN_00410e50();
  FUN_0040f2e0();
  DAT_0073645c = (uint)(DAT_00736384 != 0);
  FUN_0040b340();
  FUN_0040a890();
  FUN_0040aa20();
  FUN_0040cb80();
  FUN_00401e50(&DAT_00718738);
  FUN_00413000();
  FUN_00413050();
  FUN_00410780();
  return 0;
}
