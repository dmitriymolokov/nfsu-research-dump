/* Decompiled from Speed.exe @ 005c55ad */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005c55ad(int param_1)

{
  char *_Locale;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
  }
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))(1);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_005c54ec(1);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_005c52d8(1);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_005c51e6(1);
  }
  _Locale = *(char **)(param_1 + 0x84);
  if (_Locale != (char *)0x0) {
    iVar1 = 2;
    bVar4 = true;
    pcVar2 = _Locale;
    pcVar3 = "C";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      _setlocale(4,_Locale);
    }
  }
  if (*(void **)(param_1 + 0x84) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x84));
  }
  __controlfp(*(uint *)(param_1 + 0x88),0x30000);
  FUN_005b17b7();
  FUN_005b1758();
  return;
}

