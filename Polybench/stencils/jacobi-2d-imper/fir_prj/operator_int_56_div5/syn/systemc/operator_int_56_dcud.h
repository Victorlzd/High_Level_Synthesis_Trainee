// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __operator_int_56_dcud_H__
#define __operator_int_56_dcud_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct operator_int_56_dcud_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 1;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(operator_int_56_dcud_ram) {
        ram[0] = "0b0";
        ram[1] = "0b0";
        ram[2] = "0b1";
        ram[3] = "0b1";
        ram[4] = "0b0";
        ram[5] = "0b0";
        ram[6] = "0b0";
        ram[7] = "0b1";
        ram[8] = "0b1";
        ram[9] = "0b0";
        ram[10] = "0b0";
        ram[11] = "0b0";
        ram[12] = "0b1";
        ram[13] = "0b1";
        ram[14] = "0b0";
        ram[15] = "0b0";
        ram[16] = "0b0";
        ram[17] = "0b1";
        ram[18] = "0b1";
        ram[19] = "0b0";
        ram[20] = "0b0";
        ram[21] = "0b0";
        ram[22] = "0b1";
        ram[23] = "0b1";
        ram[24] = "0b0";
        ram[25] = "0b0";
        ram[26] = "0b0";
        ram[27] = "0b1";
        ram[28] = "0b1";
        ram[29] = "0b0";
        ram[30] = "0b0";
        ram[31] = "0b0";
        ram[32] = "0b1";
        ram[33] = "0b1";
        ram[34] = "0b0";
        ram[35] = "0b0";
        ram[36] = "0b0";
        ram[37] = "0b1";
        ram[38] = "0b1";
        ram[39] = "0b0";
        ram[40] = "0b0";
        ram[41] = "0b0";
        ram[42] = "0b1";
        ram[43] = "0b1";
        ram[44] = "0b0";
        ram[45] = "0b0";
        ram[46] = "0b0";
        ram[47] = "0b1";
        ram[48] = "0b1";
        ram[49] = "0b0";
        ram[50] = "0b0";
        ram[51] = "0b0";
        ram[52] = "0b1";
        ram[53] = "0b1";
        ram[54] = "0b0";
        ram[55] = "0b0";
        ram[56] = "0b0";
        ram[57] = "0b1";
        ram[58] = "0b1";
        ram[59] = "0b0";
        ram[60] = "0b0";
        ram[61] = "0b0";
        ram[62] = "0b1";
        ram[63] = "0b1";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(operator_int_56_dcud) {


static const unsigned DataWidth = 1;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


operator_int_56_dcud_ram* meminst;


SC_CTOR(operator_int_56_dcud) {
meminst = new operator_int_56_dcud_ram("operator_int_56_dcud_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~operator_int_56_dcud() {
    delete meminst;
}


};//endmodule
#endif
