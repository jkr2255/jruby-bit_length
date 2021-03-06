#include "bit_utils.h"

VALUE rb_mBitUtils;

void
Init_bit_utils(void)
{
  VALUE rb_mCImpl;
  rb_mBitUtils = rb_define_module("BitUtils");
  rb_mCImpl = rb_define_module_under(rb_mBitUtils, "CImpl");
  register_count(rb_mCImpl);
  register_trailing_zeros(rb_mCImpl);
  register_each_bit(rb_mCImpl);
}
