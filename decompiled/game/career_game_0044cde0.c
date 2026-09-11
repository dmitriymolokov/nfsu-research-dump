/* spd-match: far pct=63.16 M4.0.2-CE */
/* R2: __fastcall replaces Ghidra in_EAX. Inventory/ledger prior 73.68% was Pass-A cdecl+/Gr
 * (EAX-hybrid); R2 plateau 63.16% — EAX vs ECX + push-order + epilogue wall. */
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);
void __cdecl FUN_0040a880(void *);

void __fastcall FUN_0044cde0(unsigned char *obj)
{
  _eh_vector_destructor_iterator_((void *)(obj + 8), 0x38, 0x10, FUN_0040a880);
}
