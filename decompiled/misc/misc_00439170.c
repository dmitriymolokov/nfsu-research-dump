/* Decompiled from Speed.exe @ 00439170 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0043925d) */

void __thiscall FUN_00439170(int param_1,undefined1 param_2,char param_3,uint param_4)

{
  char cVar1;
  undefined1 local_416;
  undefined1 local_414 [1040];
  
  FUN_00548820();
  FUN_00548840(*(undefined1 *)(param_1 + 4));
  FUN_00548840(param_2);
  if ((param_3 == '\0') && (param_4 != 9)) {
    local_416 = 0;
  }
  else {
    local_416 = 1;
  }
  FUN_00548840(local_416);
  FUN_00548840(param_4 & 0xff);
  FUN_00548980(local_414,param_1 + 0x18c);
  FUN_00439440();
  FUN_00548980(local_414,param_1 + 0x28);
  cVar1 = FUN_005466e0();
  if (cVar1 != '\0') {
    FUN_00546830();
  }
  FUN_004390d0(3);
  return;
}

