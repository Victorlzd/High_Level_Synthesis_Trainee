// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __operator_double_dg8j_H__
#define __operator_double_dg8j_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct operator_double_dg8j_ram : public sc_core::sc_module {

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


   SC_CTOR(operator_double_dg8j_ram) {
        for (unsigned i = 0; i < 20 ; i = i + 1) {
            ram[i] = "0b0";
        }
        for (unsigned i = 20; i < 40 ; i = i + 1) {
            ram[i] = "0b1";
        }
        for (unsigned i = 40; i < 60 ; i = i + 1) {
            ram[i] = "0b0";
        }
        ram[60] = "0b1";
        ram[61] = "0b1";
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


SC_MODULE(operator_double_dg8j) {


static const unsigned DataWidth = 1;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


operator_double_dg8j_ram* meminst;


SC_CTOR(operator_double_dg8j) {
meminst = new operator_double_dg8j_ram("operator_double_dg8j_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~operator_double_dg8j() {
    delete meminst;
}


};//endmodule
#endif
