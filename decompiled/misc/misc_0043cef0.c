/* spd-match: far pct=8.87 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0043cef0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0043cef0(int param_1)

{
  char cVar1;
  float10 fVar2;
  int local_418;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_00548820();
    FUN_00548840(*(undefined1 *)(param_1 + 0x40));
    fVar2 = (float10)FUN_0040ed00();
    FUN_00436dc0((float)fVar2);
    for (local_418 = 0; local_418 < (int)(uint)*(byte *)(param_1 + 0x40); local_418 = local_418 + 1)
    {
      FUN_00417490();
      FUN_0057a180();
      FUN_00436ed0();
      fVar2 = (float10)FUN_00579fc0();
      FUN_00436dc0((float)fVar2);
    }
    cVar1 = FUN_005466e0();
    if (cVar1 != '\0') {
      FUN_00547770();
    }
  }
  return;
}

