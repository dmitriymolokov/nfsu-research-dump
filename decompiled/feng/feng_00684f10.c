/* spd-match: close pct=87.50 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/active/va_00684F10 */
/* M3.9. CE fix: 8B jmp-thunk → FUN_00594fe0 (EAX); avoid min_clean int() stub clash. */
void __cdecl FUN_00594fe0(void *);

void FUN_00684f10(void *frame)
{
  ((void (__fastcall *)(void *))FUN_00594fe0)(*(void **)((char *)frame - 0x14));
}
